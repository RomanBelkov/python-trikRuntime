%Import QtCore/QtCoremod.sip

namespace trikKernel {
/// Structure of a time value in a convenient format.
class TimeVal {

	%TypeHeaderCode
		#include <timeVal.h>
	%End

	public:
		/// Constructor. Parameters represent time in the format - (sec * 10^6 + mcsec) msces.
		/// Constructor translates this value to the new format - 1 unit of a new value(mTime) is equal to 256 mcsec.
		/// Note that after these conversions value in microseconds becomes rounded, but we can neglect this fact
		/// in most cases.
		/// Formula for translation : mTime = (sec * 10^6 + mcsec) << 8 = sec * 10^6 << mShift + mcsec << mShift =
		/// = sec * mSecConst << (mShift - 6) + mcsec << mShift
		TimeVal(int sec, int mcsec);

		/// Overloaded "is equal" operator.
		/// @param timeVal - a value, which is assigned to a variable.
		// TimeVal &operator=(const TimeVal &timeVal);

		/// Returns packed data that shifted to the left on mShift bits.
		int packedUInt32() const;

		/// Creates TimeVal using packed data.
		/// It needs for hiding one argument constructor of TimeVal from packed data.
		static trikKernel::TimeVal fromPackedUInt32(int packedTime);
		
		// Counts time interval between two packed data of time
		static int timeInterval(int packedTimeLeft, int packedTimeRight);

		// %If (- Qt_5_0_0 )
		// 	// void *qMetaTypeConstructHelper<TimeVal>(const TimeVal *t);
		// %End

		// %If (Qt_5_0_0 -)
		// 	struct QtMetaTypePrivate::QMetaTypeFunctionHelper<TimeVal>;
		// %End

		/// "Minus" operator is for computing time interval between two timestamps, returns value in microsends.
		/// @param left - a value before sign, usually "time after event".
		/// @param right - a value after sign, usually "time before event".
		// int operator-(const TimeVal &left, const TimeVal &right);


	private:
		TimeVal() /Default/;

		explicit TimeVal(int packedTime);

		// uint32_t mTime = 0;

		// static const uint32_t mSecConst = 15625;
		// static const uint32_t mShift = 8;

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
	// inline int operator-(const TimeVal &left, const TimeVal &right)
	// {
	// 	return (left.mTime - right.mTime) << TimeVal::mShift;
	// }

};