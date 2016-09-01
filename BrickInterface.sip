//%Module trikControl

%Import QtCore/QtCoremod.sip

namespace trikControl {

	class BrickInterface : public QObject {

		%TypeHeaderCode
		#include <brickInterface.h>
		%End

		%InstanceCode
    		bla bla
		%End

	};
};