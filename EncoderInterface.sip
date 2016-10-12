%Import QtCore/QtCoremod.sip

namespace trikControl {

	%TypeHeaderCode
		#include <encoderInterface.h>
	%End

	/// Encoder of power motor.
	class EncoderInterface : public QObject /Abstract/ {

	public slots:
		/// Returns current encoder reading (in degrees).
		virtual int read() = 0;

		/// Returns current raw reading of encoder.
		virtual int readRawData() = 0;

		/// Resets encoder by setting current reading to 0.
		virtual void reset() = 0;
	};

};