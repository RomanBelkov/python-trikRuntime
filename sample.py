import trikControl
import sys
from PyQt4 import QtGui

print(sys.argv)
app = QtGui.QApplication(sys.argv)


# w = QtGui.QWidget()
# w.resize(250, 150)
# w.move(300, 300)
# w.setWindowTitle('Simple')
# w.show()

#print(dir(trikControl))
b = trikControl.trikControl.BrickFactory.create("./trik/", "./trik/media/")
b.playSound("beep.wav")
# scr = b.display()
# scr.drawPoint(10,10)
# scr.reset()
# scr.showImage("/home/rb/Documents/trikRuntime/trikControl/pythonPlayground/wat.jpg")

m = b.motor("M4")

print(dir(m))


m.setPower(100)


b.keys().reset()

sys.exit(app.exec_())