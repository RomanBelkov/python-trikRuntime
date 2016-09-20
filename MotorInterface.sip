%Import QtCore/QtCoremod.sip
//%Include DeviceInterface.sip

namespace trikControl {

/// Abstract motor. It is differently implemented by different motor types (like servo and power motors).
class MotorInterface : public QObject /Abstract/ {

	%TypeHeaderCode
		#include <motorInterface.h>
	%End

public:
	// class Type {
	// 	public:
	// 		enum _ {
	// 			powerMotor
	// 			, servoMotor
	// 		};
	// };

	enum Type {
				powerMotor
				, servoMotor
			};

	/// Returns minimal value of control accepted by a motor (-90..90, 0..100, for example).
	virtual int minControl() const = 0;

	/// Returns maximal value of control accepted by a motor (-90..90, 0..100, for example).
	virtual int maxControl() const = 0;

public slots:
	/// Sets current motor power to specified value, 0 to stop motor.
	/// @param power - power of a motor, from -100 (full reverse) to 100 (full forward), 0 --- break.
	/// @param constrain - if true, power will be constrained in an interval [-100, 100], if false, "power" value
	///        will be sent to a motor unaltered.
	virtual void setPower(int power, bool constrain = true) = 0;

	/// Returns currently set power of a motor.
	virtual int power() const = 0;

	/// Turns off motor. This is not the same as setPower(0), because setPower will
	/// leave motor on in a break mode, and this method will turn motor off.
	virtual void powerOff() = 0;
};

};