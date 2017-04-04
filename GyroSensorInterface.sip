%Import QtCore/QtCoremod.sip

%Include VectorSensorInterface.sip

namespace trikControl {

/// Sensor that returns a vector.
class GyroSensorInterface : public trikControl::VectorSensorInterface /Abstract/ {
	
	%TypeHeaderCode
		#include <gyroSensorInterface.h>
	%End

	signals:
		/// Average mean of bias is counted.
	    void biasInited();

	public slots:
		/// Calibrates bias value of sensor, sets new bias value, resets other values include tilt values.
        /// Preffered duration of calibration -- 15-20 seconds.
        /// @param msec - duration of calibration in milliseconds
        virtual void calibrate(int msec) = 0;

        /// Checks if bias is counted or not.
        virtual bool isCalibrated() const = 0;

        /// Returns current raw reading of a sensor.
        virtual QVector<int> readRawData() const = 0;
	};

};