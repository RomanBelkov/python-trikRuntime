from PyQt4.QtCore import *
import time


class script(QObject):
    stopWaiting = pyqtSignal(name="stopWaiting")

    # TODO timers are appended, but never stopped or deleted
    timers = []

    def wait(self, milliseconds):
        loop = QEventLoop()
        QObject.connect(self, SIGNAL("stopWaiting()"), loop, SLOT("quit()"), Qt.DirectConnection)
        timer = QTimer()
        QObject.connect(timer, SIGNAL("timeout()"), loop, SLOT("quit()"), Qt.DirectConnection)
        timer.start(milliseconds)
        loop.exec_()

    def timer(self, msec):
        result = QTimer()
        self.timers.append(result)
        result.start(msec)
        return result
        # QEventLoop loop;
        # QObject::connect(this, SIGNAL(stopWaiting()), &loop, SLOT(quit()), Qt::DirectConnection);
        # QTimer t;
        # connect(&t, SIGNAL(timeout()), &loop, SLOT(quit()), Qt::DirectConnection);
        # t.start(milliseconds);
        # loop.exec();
