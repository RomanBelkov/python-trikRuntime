from PyQt4 import QtGui, QtCore
from script import script
import trikControl
import sys
import time

__interpretation_started_timestamp__ = time.time() * 1000;
app = QtGui.QApplication(sys.argv)
brick = trikControl.trikControl.BrickFactory.create("/home/root/trik", "/home/root/trik/media/")
gamepad = trikControl.trikNetwork.GamepadFactory.create(666)
script = script()
pi = 3.1415926535897931;


def doSomethingWithButtons(code, value):
	print("AAAA")
	if code == 28:
		print("OLOLOLOLOLO")
    
def doSomethingWithGamepad(padId, x, y):
    print(padId)

def main():
  brick.display().showImage("/home/root/trik/media/trik_smile_normal.png")
  script.wait(100)
  print("lol")
  script.wait(10000)
  
  
  S = brick.sensor("A1").read()
  Sold = S
  while True:
    u = 2.5 * (S - brick.sensor("A1").read()) + 5 * (Sold - brick.sensor("A1").read())
    Sold = brick.sensor("A1").read()
    brick.motor("M2").setPower(50 + u)
    
    brick.motor("M1").setPower(50 - u)
    
    script.wait(30)
    

k = brick.keys()
QtCore.QObject.connect(k, QtCore.SIGNAL("buttonPressed(int,int)"), doSomethingWithButtons)

print(dir(gamepad))

QtCore.QObject.connect(gamepad, QtCore.SIGNAL("pad(int,int,int)"), doSomethingWithGamepad)

QtCore.QTimer.singleShot(2000, main())
sys.exit(app.exec_())