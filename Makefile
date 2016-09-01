TARGET = trikControl.so
SIP_SRC = $(wildcard *.sip)
OFILES = $(patsubst %.sip, siptrikControltrikControl%.o, $(SIP_SRC))
#OFILES = siptrikControlcmodule.o siptrikControltrikControlBrickFactory.o siptrikControltrikControlBrickInterface.o siptrikControltrikControl.o
HFILES = sipAPItrikControl.h 

CC = gcc
CXX = g++
LINK = g++
INCPATH  = -I. -I. -I../include/trikControl -I../../../../Qt/5.7/gcc_64/include/QtCore -I../../../../Qt/5.7/gcc_64/include/ -I../qslog -I../../trikKernel/include -I../trikHal/include -I../../../Qt/5.7/gcc_64/include -I../../../Qt/5.7/gcc_64/include/QtMultimedia -I../../../Qt/5.7/gcc_64/include/QtWidgets -I../../../Qt/5.7/gcc_64/include/QtGui -I../../../Qt/5.7/gcc_64/include/QtXml -I../../../Qt/5.7/gcc_64/include/QtNetwork -I../../../Qt/5.7/gcc_64/include/QtCore -I.build/x86-release/.moc -I../../../Qt/5.7/gcc_64/mkspecs/linux-g++
CPPFLAGS = -DNDEBUG -I. -I/usr/include/python3.5m $(INCPATH)
CFLAGS = -pipe -fPIC -O2 -Wall -W
CXXFLAGS = $(CFLAGS)
LFLAGS = -shared -Wl,--version-script=trikControl.exp
LIBS = -ltrikControl

siptrikControltrikControl%.cpp: %.sip
	/usr/bin/sip -c . -b trikControl.sbf -I /usr/share/sip/PyQt5/ $(INCPATH) -t WS_X11 -t Qt_5_7_0 $<
	
# INTERMEDIATE SECONDARY

all: $(TARGET)

#$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: PyInit_trikControl; local: *; };' > trikControl.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib64/python3.5/site-packages || mkdir -p $(DESTDIR)/usr/lib64/python3.5/site-packages
	cp -f $(TARGET) $(DESTDIR)/usr/lib64/python3.5/site-packages/$(TARGET)
	strip $(DESTDIR)/usr/lib64/python3.5/site-packages/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f siptrikControlcmodule.o
	-rm -f siptrikControltrikControlBrickFactory.o
	-rm -f siptrikControltrikControlBrickInterface.o
	-rm -f siptrikControltrikControl.o
	-rm -f trikControl.exp
