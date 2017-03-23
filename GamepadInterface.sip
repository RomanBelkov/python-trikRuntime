%Import QtCore/QtCoremod.sip

namespace trikControl {

/// Class to support remote control of a robot using TCP client.
class GamepadInterface : public QObject /Abstract/ {

	%TypeHeaderCode
		#include <gamepadInterface.h>
	%End

public slots:
	/// Clear data about previous pad events.
	virtual void reset() = 0;

	/// Returns true, if given pad button is pressed, and clears "pressed" state for that button.
	/// Buttons have indexes from 1 to 5.
	virtual bool buttonWasPressed(int buttonNumber) = 0;

	/// Returns true, if given pad button is pressed now. Buttons have indexes from 1 to 5.
	virtual bool buttonIsPressed(int buttonNumber) = 0;

	/// Returns current state of the pad, true if pressed.
	virtual bool isPadPressed(int pad) const = 0;

	/// Returns current X coordinate of given pad or -1 if this pad is not pressed.
	virtual int padX(int pad) const = 0;

	/// Returns current Y coordinate of given pad or -1 if this pad is not pressed.
	virtual int padY(int pad) const = 0;

	/// Returns current tilt angle of Android device when "wheel" is turned on.
	virtual int wheel() const = 0;

	/// Returns true if a gamepad is currently connected to a robot.
	virtual bool isConnected() const = 0;

signals:
	/// Emitted when user pulls finger off a pad.
	/// @param pad - id of a pad on which the event occurs.
	void padUp(int pad);

	/// Emitted when user tilts his Android device with "wheel" turned on.
	/// @param percent - percent of a tilt angle.
	void wheelEvent(int percent);

	/// Emitted when user pushes or moves his finger on a pad.
	/// @param pad - id of a pad on which the event occurs.
	/// @param x - x coordinate of an event.
	/// @param y - y coordinate of an event.
	void pad(int pad, int x, int y);

	/// Emitted when user pushes a button on gamepad.
	/// @param button - button number.
	/// @param pressed - 1 if button was pressed, 0 if it was released.
	void button(int button, int pressed);

	/// Emitted when a gamepad connects to robot. Note that robot may have several connected gamepads, and this signal
	/// will be emitted only when the first gamepad connects to robot.
	void connected();

	/// Emitted when last gamepad disconnects from robot. Note that robot may have several connected gamepads
	/// at the same time, so when one gamepad disconnects, this signal will not be emitted.
	void disconnect();
};

};