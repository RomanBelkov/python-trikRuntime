%Import QtCore/QtCoremod.sip

//#include "deviceInterface.h"

namespace trikControl {

/// Class for handling keys on a brick.
class KeysInterface : public QObject /Abstract/
{

	%TypeHeaderCode
		#include <keysInterface.h>
	%End

public slots:
	/// Clear data about previous key pressures.
	virtual void reset() = 0;

	/// Returns true if button with given code was pressed, and clears "pressed" state for that button.
	virtual bool wasPressed(int code) = 0;

	/// Returns true if button with given code is pressed at the moment.
	virtual bool isPressed(int code) = 0;

	/// Returns a code of a pressed button.
	virtual int buttonCode(bool wait = true) = 0;

signals:
	/// Triggered when button state changed (pressed or released).
	/// @param code - key code.
	/// @param value - key state.
	void buttonPressed(int code, int value);
};

};