%Import QtCore/QtCoremod.sip

namespace trikControl {

/// Abstract sensor, inherited by various sensor types.
class SensorInterface : public QObject /Abstract/ {

	%TypeHeaderCode
		#include <sensorInterface.h>
	%End

	public:
		enum Type {
			analogSensor
			, digitalSensor
			, specialSensor
		};

		/// Gets minimal possible value for sensor reading received by read() slot.
		virtual int minValue() const = 0;

		/// Gets maximal possible value for sensor reading received by read() slot.
		virtual int maxValue() const = 0;

	public slots:
		/// Returns current reading of a sensor.
		virtual int read() = 0;

		/// Returns current raw reading of a sensor.
		virtual int readRawData() = 0;
	};

};