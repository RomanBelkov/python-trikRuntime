//%Module trikControl

%Import QtCore/QtCoremod.sip

namespace trikControl {

	class BrickInterface : public QObject /Abstract/  {

		%TypeHeaderCode
		#include <brickInterface.h>
		%End

	};
};