%Import QtCore/QtCoremod.sip

namespace trikControl {

/// Provides battery voltage info.
class BatteryInterface : public QObject /Abstract/ {

	%TypeHeaderCode
		#include <batteryInterface.h>
	%End

	public slots:
		/// Returns current battery voltage in volts.
		virtual float readVoltage() = 0;

		/// Returns current raw reading of battery.
		virtual float readRawDataVoltage() = 0;
	};

};