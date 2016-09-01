//%Module trikControl

%If (- Qt_5_0_0 )
	%Import QtGui/QtGuimod.sip
%End

%If (Qt_5_0_0 -)
	%Import QtWidgets/QtWidgetsmod.sip
%End

namespace trikControl {

	class DisplayWidgetInterface : public QWidget /Abstract/ {

		%TypeHeaderCode
		#include <displayWidgetInterface.h>
		%End

	//signals:
	//	/// Emitted when widget is shown.
	//	void shown();
	//
	//	/// Emitted when widget is hidden.
	//	void hidden();

	};

};