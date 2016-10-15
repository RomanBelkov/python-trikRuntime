from PyQt4 import QtGui, QtCore
from script import script
import trikControl
import sys
import time
import subprocess

__interpretation_started_timestamp__ = time.time() * 1000;
app = QtGui.QApplication(sys.argv)
brick = trikControl.trikControl.BrickFactory.create("/home/root/trik", "/home/root/trik/media/")
gamepad = trikControl.trikNetwork.GamepadFactory.create(666)
script = script()
pi = 3.1415926535897931;

powerMotorLeft  = brick.motor("M2")
powerMotorRight = brick.motor("M1")


def restartStreamer():
  script.wait(2000)
  subprocess.call("/etc/init.d/mjpg-encoder-ov7670 restart", shell=True)
  subprocess.call("/etc/init.d/mjpg-streamer-ov7670 restart", shell=True)
  script.wait(2000)
  print("mjpeg streamer restarted")
    
    
def gamepadControl(padId, x, y):
    if padId == 1:
      powerMotorLeft.setPower(y + x);
      powerMotorRight.setPower(y - x);
        

def buttonGamepadControl(button, pressed):
    if button == 1:
      brick.say("Hello i am trik")
    elif button == 2:
      restartStreamer()
    

#k = brick.keys()
#QtCore.QObject.connect(k, QtCore.SIGNAL("buttonPressed(int,int)"), doSomethingWithButtons)

#print(dir(gamepad))

QtCore.QObject.connect(gamepad, QtCore.SIGNAL("pad(int,int,int)"), gamepadControl)
QtCore.QObject.connect(gamepad, QtCore.SIGNAL("button(int,int)"), buttonGamepadControl)
restartStreamer()
#QtCore.QTimer.singleShot(2000, main())
sys.exit(app.exec_())