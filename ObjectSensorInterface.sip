%Import QtCore/QtCoremod.sip

namespace trikControl {

/// Uses virtual line sensor to detect x coordinate of a center of an object that was in camera's field of view
/// when "detect" method was called. Used mainly to follow the line.
class ObjectSensorInterface : public QObject /Abstract/ {

	%TypeHeaderCode
		#include <objectSensorInterface.h>
	%End

signals:
	/// Emitted when sensor is stopped successfully.
	void stopped();

	public slots:
		/// Initializes a camera.
		/// @param showOnDisplay - true if we want an image from a camera to be drawn on robot display.
		virtual void init(bool showOnDisplay) = 0;

		/// Detects the color of an object in center of current frame and memorizes it.
		virtual void detect() = 0;

		/// Returns x, y coordinates and size of an object in a form of vector [x; y; size].
		/// Returns 0 in every field if detect() was not called.
		virtual QVector<int> read() = 0;

		/// Stops detection until init() will be called again.
		virtual void stop() = 0;

		/// Get values returned by last "detect" operation. Returned vector has 6 components - hue, saturation and value
		/// of a dominant color (got by "detect") and hue, saturation and value tolerance factors.
		virtual QVector<int> getDetectParameters() const = 0;
	};

};