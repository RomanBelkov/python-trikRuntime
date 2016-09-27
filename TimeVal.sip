namespace trikKernel {

/// Structure of a time value in a convenient format.
class TimeVal {

	%TypeHeaderCode
		#include <timeVal.h>
	%End

	public:
		/// Constructor.
		TimeVal();

		/// Copy constructor.
		/// @param timeVal - an object, a copy of which is created.
		TimeVal(const trikKernel::TimeVal &timeVal);

		/// Constructor. Parameters represent time in the format - (sec * 10^6 + mcsec) msces.
		/// Constructor translates this value to the new format - 1 unit of a new value(mTime) is equal to 256 mcsec.
		/// Note that after these conversions value in microseconds becomes rounded, but we can neglect this fact
		/// in most cases.
		/// Formula for translation : mTime = (sec * 10^6 + mcsec) << 8 = sec * 10^6 << mShift + mcsec << mShift =
		/// = sec * mSecConst << (mShift - 6) + mcsec << mShift
		TimeVal(int sec, int mcsec);

		/// Translates an interior format to mcsec.
		int toMcSec() const;

		/// Overloaded "minus" operator.
		/// @param left - a value before sign.
		/// @param right - a value after sign.
		//friend const TimeVal operator-(const TimeVal &left, const TimeVal &right);

		/// Overloaded "is equal" operator.
		/// @param timeVal - a value, which is assigned to a variable.
		//TimeVal &operator=(const TimeVal &timeVal);

	// private:
	// 	int mTime = 0;

	// 	static const int mSecConst = 15625;
	// 	static const int mShift = 8;
	};

	/// Overloaded "minus" operator.
	/// @param left - a value before sign.
	/// @param right - a value after sign.
	// inline const TimeVal operator-(const TimeVal &left, const TimeVal &right)
	// {
	// 	TimeVal deltaTime;
	// 	deltaTime.mTime	= left.mTime - right.mTime;
	// 	return deltaTime;
	// };

};