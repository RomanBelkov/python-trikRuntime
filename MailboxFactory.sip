%Include MailboxInterface.sip

namespace trikNetwork {

/// Factory that creates real mailbox object.
class MailboxFactory
{

	%TypeHeaderCode
		#include <mailboxFactory.h>
	%End


public:
	/// Method that creates mailbox object.
	/// Transfers ownership over MailboxInterface object to caller.
	/// @param port - TCP port of mailbox server.
	static trikNetwork::MailboxInterface *create(int port);

	/// Method that creates mailbox object.
	/// Transfers ownership over MailboxInterface object to caller.
	/// @param configurer - configurer object that contains preparsed XML config. If configuration is incorrect,
	///        uninitialized mailbox object will be returned.
	//static MailboxInterface *create(const trikKernel::Configurer &configurer);
};

};