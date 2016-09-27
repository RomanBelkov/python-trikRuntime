%Import QtCore/QtCoremod.sip

%Include TimeVal.sip

namespace trikControl {

/// Sensor that returns a vector.
class VectorSensorInterface : public QObject /Abstract/ {
	
	%TypeHeaderCode
		#include <vectorSensorInterface.h>
	%End

	signals:
		/// Emitted when new sensor reading is ready.
		void newData(QVector<int> reading, const trikKernel::TimeVal &eventTime);

	public slots:
		/// Returns current raw reading of a sensor.
		virtual QVector<int> read() const = 0;
	};

};
