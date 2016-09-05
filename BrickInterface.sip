//%Module trikControl

%Import QtCore/QtCoremod.sip
//%Include DisplayWidgetInterface.sip
%Include DisplayInterface.sip
%Include MotorInterface.sip

namespace trikControl {

	class BrickInterface : public QObject /Abstract/  {

		%TypeHeaderCode
		#include <brickInterface.h>
		%End

		public:

		/// Returns a widget on which display output is drawn.
		virtual trikControl::DisplayWidgetInterface *graphicsWidget() = 0;

		virtual trikControl::MotorInterface *motor(const QString &port) = 0;

		public slots:

		/// Plays given music file on a speaker (in format accepted by aplay or cvlc utilities).
		virtual void playSound(const QString &soundFileName) = 0;

		/// Returns class that provides drawing on display.
		virtual trikControl::DisplayInterface *display() = 0;

	};
};