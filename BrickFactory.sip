//%Module trikControl

//%Include QtCore/QString.sip
%Include BrickInterface.sip
//%Import QtCore/QtCoremod.sip

namespace trikControl {

	//class BrickInterface;

	// class BrickInterface : public QObject {
	// 	%TypeHeaderCode
	// 	#include <brickInterface.h>
	// 	%End
	// };

	class BrickFactory {

		%TypeHeaderCode
		#include <brickFactory.h>
		%End

		public:
			static trikControl::BrickInterface *create(const QString &systemConfig, const QString &modelConfig, const QString &mediaPath);
			static trikControl::BrickInterface *create(const QString &configFilesPath = ".", const QString &mediaPath = ".");

	};
};