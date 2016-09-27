from PyQt4 import QtGui, QtCore
import trikControl
import sys
import time


def wait():
	time.sleep(2)


def doSomethingWithButtons(code, value):
	print("AAAA")
	if code == 28:
		print("OLOLOLOLOLO")

def doSomethingWithGyro(array, time):
	print(array)

#print(sys.argv)
app = QtGui.QApplication(sys.argv)


#print(dir(trikControl))
b = trikControl.trikControl.BrickFactory.create("./trik/", "./trik/media/")  #("./../../bin/x86-release/", "./../../bin/x86-release/media") #(./trik/", "./trik/media/")

print(b.battery().readVoltage())
k = b.keys()
gyro = b.gyroscope()
#print(dir(k))

#k.buttonPressed.connect(doSomething)


QtCore.QObject.connect(k, QtCore.SIGNAL("buttonPressed(int,int)"), doSomethingWithButtons)


QtCore.QObject.connect(gyro, QtCore.SIGNAL("newData(QVector<int>,trikKernel::TimeVal)"), doSomethingWithGyro)
#print("fok of")

# b.playSound("beep.wav")
# wait()

# b.led().orange()
# wait()
# scr = b.display()
# print(dir(scr))
# scr.reset()
# scr.drawPoint(10,10)
# scr.reset()
# scr.showImage("/home/root/wat.jpg")

# sens = b.sensor("A6")
# print(sens.read())
# wait()
# print(sens.readRawData())
# wait()

# m = b.motor("M1")
# m.setPower(50)
# wait()
# m.powerOff()


# b.motor("S6").setPower(60)
# wait()
# b.motor("S6").setPower(-60)
# wait()
# b.motor("S6").powerOff()

# lineDetect = b.lineSensor("video1")
# lineDetect.init(True)
# lineDetect.detect()
# print(lineDetect.read())

sys.exit(app.exec_())