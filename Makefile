TARGET = trikControl.so
SIP_SRC = $(filter-out TCmod.sip, $(wildcard *.sip))
OFILES = $(patsubst %.sip, siptrikControltrikControl%.o, $(SIP_SRC)) siptrikControlcmodule.o siptrikControltrikControl.o
#OFILES = siptrikControlcmodule.o siptrikControltrikControlBrickFactory.o siptrikControltrikControlBrickInterface.o siptrikControltrikControl.o
HFILES = sipAPItrikControl.h 
CPPFILES = $(patsubst %.o, %.cpp, $(OFILES))
#note the default assignment
QT_VERSION ?= $(shell qmake -query QT_VERSION | sed -r 's/^([0-9]+)\.([0-9]+)\.([0-9]+)$$/Qt_\1_\2\_\3/')
QT_INSTALL_HEADERS ?= $(shell qmake -query QT_INSTALL_HEADERS)
TRIK_CONTROL_LIB_DIR ?= /home/rb/Documents/trikRuntime/bin/x86-release/  
PYQT_INSTALL_LOCATION ?= /usr/share/sip/PyQt4

ifneq ($(OE_QMAKE_INCDIR_QT),)
	QT_INSTALL_HEADERS = $(OE_QMAKE_INCDIR_QT)
endif

ifneq ($(CROSS_COMPILE),)
	TRIK_CONTROL_LIB_DIR = /home/rb/Documents/trikRuntime/bin/arm-release/ 
endif

#CC = gcc
#CXX = g++
#LINK = g++
INCPATH  = -I. -I../include/trikControl -I$(QT_INSTALL_HEADERS)/QtCore -I$(QT_INSTALL_HEADERS)/ -I../qslog -I../../trikKernel/include \
-I../trikHal/include -I$(QT_INSTALL_HEADERS)/QtWidgets -I$(QT_INSTALL_HEADERS)/QtGui  
# -I../../../Qt/5.7/gcc_64/include -I../../../Qt/5.7/gcc_64/include/QtMultimedia 
# -I../../../Qt/5.7/gcc_64/include/QtXml -I../../../Qt/5.7/gcc_64/include/QtNetwork -I../../../Qt/5.7/gcc_64/include/QtCore -I.build/x86-release/.moc -I../../../Qt/5.7/gcc_64/mkspecs/linux-g++
CPPFLAGS = -DNDEBUG -I. -I/opt/trik-sdk/sysroots/arm926ejste-oe-linux-gnueabi/usr/include/python2.7/ -I$(PYTHONHOME)/include/python2.7/ $(INCPATH)
CFLAGS = -pipe -fPIC -O2 -Wall -W
CXXFLAGS = $(CFLAGS) -std=c++11
LFLAGS = -shared -Wl,--version-script=trikControl.exp
LIBS = -L$(TRIK_CONTROL_LIB_DIR) -ltrikControl

all: $(TARGET)

$(CPPFILES) $(HFILES): $(SIP_SRC) TCmod.sip
	/usr/bin/sip -c . -b trikControl.sbf -I $(PYQT_INSTALL_LOCATION) $(INCPATH) -t WS_X11 -t $(QT_VERSION) TCmod.sip 
	
# INTERMEDIATE SECONDARY


#$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: inittrikControl; local: *; };' > trikControl.exp
	$(CC) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib64/python2.7/site-packages || mkdir -p $(DESTDIR)/usr/lib64/python2.7/site-packages
	cp -f $(TARGET) $(DESTDIR)/usr/lib64/python2.7/site-packages/$(TARGET)
	strip $(DESTDIR)/usr/lib64/python2.7/site-packages/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f siptrikControlcmodule.o
	-rm -f siptrikControltrikControlBrickFactory.o
	-rm -f siptrikControltrikControlBrickInterface.o
	-rm -f siptrikControltrikControl.o
	-rm -f trikControl.exp
