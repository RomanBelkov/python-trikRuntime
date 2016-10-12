%Import QtCore/QtCoremod.sip
%Include GamepadInterface.sip

namespace trikNetwork {

/// Factory that creates real gamepad receiver object.
	class GamepadFactory {

		%TypeHeaderCode
			#include <gamepadFactory.h>
		%End

		public:
			/// Method that creates gamepad object.
			/// Transfers ownership over GamepadInterface object to caller.
			/// @param port - TCP port of a gamepad server.
			static trikNetwork::GamepadInterface *create(int port);

			/// Method that creates gamepad object.
			/// Transfers ownership over GamepadInterface object to caller.
			/// @param configurer - configurer object that contains preparsed XML config. If gamepad is not enabled, nullptr
			///        will be returned.
			//static trikNetwork::GamepadInterface *create(const trikKernel::Configurer &configurer);
	};

};