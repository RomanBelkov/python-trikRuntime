#!/usr/bin/env python2

from PyQt4 import QtGui, QtCore
from script import script
import trikControl
import sys, subprocess
import time
import signal


frequency = 0
base_frequency = 30
#stepHz=10
max_frequency = 170
shift = 8

gdata = [0, 0, 0]
play = lambda:None

def sigint_hndlr (*args):
    QtGui.QApplication.quit()



def ground(power):
    pass


def red(power):
    pass


def green(power):
    pass


def blue(power):
    pass



def saturation(hz): return min(hz,max_frequency)
def update_gyro_data(data, time):
    global gdata
    gdata = data


def sound_loop():
    global frequency
    print (gdata)
    new_frequency = saturation((abs(gdata[0]) + abs(gdata[1]) + abs(gdata[2])) >> shift)
    print(new_frequency, frequency)
    if new_frequency < 30:
        if frequency > 0:
            play(base_frequency, 5000)
        frequency = 0
        ground(0)
    elif frequency != new_frequency:
        ground(100)
        red(saturation(gdata[0] >> shift))
        green(saturation(gdata[1] >> shift))
        blue(saturation(gdata[2] >> shift))
        frequency = new_frequency
        play(base_frequency + frequency, 2000)

if __name__ == "__main__":
    signal.signal(signal.SIGINT, sigint_hndlr)

    
    app = QtGui.QApplication(sys.argv)
    brick = trikControl.trikControl.BrickFactory.create("/home/root/trik", "/home/root/trik/media/")
    gyroscope = brick.gyroscope()
    # gamepad = trikControl.trikNetwork.GamepadFactory.create(666)
    script = script()
    play=brick.playTone

    subprocess.call("echo 0 > /sys/class/misc/l3g42xxd/odr_selection", shell=True)
    subprocess.call("echo 0 > /sys/class/misc/l3g42xxd/fs_selection", shell=True)
    subprocess.call("rmmod mma845x", shell=True)

    play(100, 3000)
    

    QtCore.QObject.connect(gyroscope, QtCore.SIGNAL("newData(QVector<int>,trikKernel::TimeVal)"), update_gyro_data)

    
    main_timer = script.timer(20)
#    script.timer(10).timeout.connect(lambda:None)
#main_timer.stop()
    QtCore.QObject.connect(main_timer, QtCore.SIGNAL("timeout()"), sound_loop)
#main_timer.start()

    sys.exit(app.exec_())