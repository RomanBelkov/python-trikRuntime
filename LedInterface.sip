%Import QtCore/QtCoremod.sip

namespace trikControl {

	%TypeHeaderCode
		#include <ledInterface.h>
	%End

/// Controls light-emitting diode on a brick.
class LedInterface : public QObject /Abstract/ {


	public slots:
		/// Turn LED on with red color.
		virtual void red() = 0;

		/// Turn LED on with green color.
		virtual void green() = 0;

		/// Turn LED on with orange color.
		virtual void orange() = 0;

		/// Turn LED off.
		virtual void off() = 0;
	};

};
