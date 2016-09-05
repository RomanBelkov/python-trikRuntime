#!/usr/bin/python3 -e

import trikControl
import sys
from PyQt5 import QtWidgets



app = QtWidgets.QApplication(sys.argv)

w = QtWidgets.QWidget()
w.resize(250, 150)
w.move(300, 300)
w.setWindowTitle('Simple')
w.show()

#print(dir(trikControl))
b = trikControl.trikControl.BrickFactory.create(".", ".")
b.playSound("beep.wav")
# scr = b.display()
# scr.drawPoint(10,10)
# scr.reset()
# scr.showImage("/home/rb/Documents/trikRuntime/trikControl/pythonPlayground/wat.jpg")

m = b.motor("M2")

print(m.minControl())

sys.exit(app.exec_())