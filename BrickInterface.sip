//%Module trikControl

%Import QtCore/QtCoremod.sip
//%Include DisplayWidgetInterface.sip

%Include DisplayInterface.sip
%Include MotorInterface.sip
%Include KeysInterface.sip
%Include SensorInterface.sip
%Include LineSensorInterface.sip
%Include ObjectSensorInterface.sip
%Include LedInterface.sip
%Include BatteryInterface.sip
%Include VectorSensorInterface.sip
%Include EncoderInterface.sip


namespace trikControl {

	class BrickInterface : public QObject /Abstract/  {

		%TypeHeaderCode
		#include <brickInterface.h>
		%End

		public:

		/// Returns a widget on which display output is drawn.
		virtual trikControl::DisplayWidgetInterface *graphicsWidget() = 0;

		public slots:

		/// Returns class that provides drawing on display.
		virtual trikControl::DisplayInterface *display() = 0;

		/// Returns keys on a control brick.
		virtual trikControl::KeysInterface *keys() = 0;

		virtual trikControl::MotorInterface *motor(const QString &port) = 0;

		virtual trikControl::SensorInterface *sensor(const QString &port) = 0;

		virtual trikControl::LineSensorInterface *lineSensor(const QString &port) = 0;

		virtual trikControl::ObjectSensorInterface *objectSensor(const QString &port) = 0;

		virtual trikControl::LedInterface *led() = 0;

		virtual trikControl::BatteryInterface *battery() = 0;

		/// Returns on-board accelerometer.
		virtual trikControl::VectorSensorInterface *accelerometer() = 0;

		/// Returns on-board gyroscope.
		virtual trikControl::VectorSensorInterface *gyroscope() = 0;

		virtual trikControl::EncoderInterface *encoder(const QString &port) = 0;

		/// Plays given music file on a speaker (in format accepted by aplay or cvlc utilities).
		virtual void playSound(const QString &soundFileName) = 0;

		/// Generates sound with given frequency and given duration, plays it on a speaker.
		virtual void playTone(int hzFreq, int msDuration) = 0;

		/// Uses text synthesis to say given text on a speaker.
		virtual void say(const QString &text) = 0;

		/// Stops all motors and shuts down all current activity.
		virtual void stop() = 0;

	};
};