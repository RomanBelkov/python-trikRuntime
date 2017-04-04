/*
 * Module code.
 *
 * Generated by SIP 4.18.1
 */

#include "sipAPItrikControl.h"

#line 29 "/usr/share/sip/PyQt4//QtCore/qobject.sip"
#include <qobject.h>
#line 12 "./siptrikControlcmodule.cpp"
#line 27 "/usr/share/sip/PyQt4//QtCore/qstring.sip"
#include <qstring.h>
#line 15 "./siptrikControlcmodule.cpp"
#line 26 "/usr/share/sip/PyQt4//QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 18 "./siptrikControlcmodule.cpp"
#line 6 "LedInterface.sip"
		#include <ledInterface.h>
#line 6 "EncoderInterface.sip"
		#include <encoderInterface.h>
#line 9 "GamepadInterface.sip"
		#include <gamepadInterface.h>
#line 25 "./siptrikControlcmodule.cpp"
#line 6 "LedInterface.sip"
		#include <ledInterface.h>
#line 6 "EncoderInterface.sip"
		#include <encoderInterface.h>
#line 30 "./siptrikControlcmodule.cpp"
#line 6 "LedInterface.sip"
		#include <ledInterface.h>
#line 11 "VectorSensorInterface.sip"
		#include <vectorSensorInterface.h>
#line 35 "./siptrikControlcmodule.cpp"
#line 6 "LedInterface.sip"
		#include <ledInterface.h>
#line 9 "BatteryInterface.sip"
		#include <batteryInterface.h>
#line 40 "./siptrikControlcmodule.cpp"
#line 6 "LedInterface.sip"
		#include <ledInterface.h>
#line 43 "./siptrikControlcmodule.cpp"
#line 10 "ObjectSensorInterface.sip"
		#include <objectSensorInterface.h>
#line 46 "./siptrikControlcmodule.cpp"
#line 10 "LineSensorInterface.sip"
		#include <lineSensorInterface.h>
#line 49 "./siptrikControlcmodule.cpp"
#line 9 "SensorInterface.sip"
		#include <sensorInterface.h>
#line 52 "./siptrikControlcmodule.cpp"
#line 10 "MotorInterface.sip"
		#include <motorInterface.h>
#line 55 "./siptrikControlcmodule.cpp"
#line 12 "KeysInterface.sip"
		#include <keysInterface.h>
#line 58 "./siptrikControlcmodule.cpp"
#line 13 "DisplayInterface.sip"
		#include <displayInterface.h>
#line 61 "./siptrikControlcmodule.cpp"
#line 16 "DisplayWidgetInterface.sip"
		#include <displayWidgetInterface.h>
#line 64 "./siptrikControlcmodule.cpp"
#line 101 "/usr/share/sip/PyQt4//QtCore/qvector.sip"
#include <qvector.h>
#line 67 "./siptrikControlcmodule.cpp"
#line 6 "LedInterface.sip"
		#include <ledInterface.h>
#line 6 "EncoderInterface.sip"
		#include <encoderInterface.h>
#line 20 "BrickFactory.sip"
		#include <brickFactory.h>
#line 74 "./siptrikControlcmodule.cpp"
#line 10 "MailboxFactory.sip"
		#include <mailboxFactory.h>
#line 77 "./siptrikControlcmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_trikControl[] = {
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'D', 'i', 's', 'p', 'l', 'a', 'y', 'W', 'i', 'd', 'g', 'e', 't', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'V', 'e', 'c', 't', 'o', 'r', 'S', 'e', 'n', 's', 'o', 'r', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'O', 'b', 'j', 'e', 'c', 't', 'S', 'e', 'n', 's', 'o', 'r', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'S', 'e', 'n', 's', 'o', 'r', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ':', ':', 'T', 'y', 'p', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'M', 'o', 't', 'o', 'r', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', ':', ':', 'T', 'y', 'p', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'L', 'i', 'n', 'e', 'S', 'e', 'n', 's', 'o', 'r', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'N', 'e', 't', 'w', 'o', 'r', 'k', ':', ':', 'M', 'a', 'i', 'l', 'b', 'o', 'x', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'G', 'a', 'm', 'e', 'p', 'a', 'd', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'E', 'n', 'c', 'o', 'd', 'e', 'r', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'B', 'a', 't', 't', 'e', 'r', 'y', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'D', 'i', 's', 'p', 'l', 'a', 'y', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'S', 'e', 'n', 's', 'o', 'r', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    't', 'r', 'i', 'k', 'N', 'e', 't', 'w', 'o', 'r', 'k', ':', ':', 'M', 'a', 'i', 'l', 'b', 'o', 'x', 'F', 'a', 'c', 't', 'o', 'r', 'y', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'B', 'r', 'i', 'c', 'k', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'M', 'o', 't', 'o', 'r', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'K', 'e', 'y', 's', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'B', 'r', 'i', 'c', 'k', 'F', 'a', 'c', 't', 'o', 'r', 'y', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', ':', ':', 'L', 'e', 'd', 'I', 'n', 't', 'e', 'r', 'f', 'a', 'c', 'e', 0,
    'c', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 'S', 't', 'a', 't', 'u', 's', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'w', 'i', 'n', 'd', 'o', 'w', 'A', 'c', 't', 'i', 'v', 'a', 't', 'i', 'o', 'n', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'o', 'u', 'b', 'l', 'e', 'C', 'l', 'i', 'c', 'k', 'E', 'v', 'e', 'n', 't', 0,
    't', 'r', 'i', 'k', 'K', 'e', 'r', 'n', 'e', 'l', ':', ':', 'T', 'i', 'm', 'e', 'V', 'a', 'l', 0,
    'g', 'e', 't', 'D', 'e', 't', 'e', 'c', 't', 'P', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r', 's', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'r', 'e', 'a', 'd', 'R', 'a', 'w', 'D', 'a', 't', 'a', 'V', 'o', 'l', 't', 'a', 'g', 'e', 0,
    'f', 'o', 'c', 'u', 's', 'P', 'r', 'e', 'v', 'i', 'o', 'u', 's', 'C', 'h', 'i', 'l', 'd', 0,
    'e', 's', 'c', 'a', 'p', 'e', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'P', 'r', 'e', 'v', 'C', 'h', 'i', 'l', 'd', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'S', 'u', 'b', 'W', 'i', 'n', 'd', 'o', 'w', 's', 0,
    'r', 'e', 's', 'e', 't', 'I', 'n', 'p', 'u', 't', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 'n', 'd', 'e', 'r', 'S', 'i', 'g', 'n', 'a', 'l', 'I', 'n', 'd', 'e', 'x', 0,
    'b', 'u', 't', 't', 'o', 'n', 'W', 'a', 's', 'P', 'r', 'e', 's', 's', 'e', 'd', 0,
    'f', 'r', 'o', 'm', 'P', 'a', 'c', 'k', 'e', 'd', 'U', 'I', 'n', 't', '3', '2', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'O', 'l', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'u', 'p', 'd', 'a', 't', 'e', 'M', 'i', 'c', 'r', 'o', 'F', 'o', 'c', 'u', 's', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 'M', 'e', 'n', 'u', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'b', 'u', 't', 't', 'o', 'n', 'I', 's', 'P', 'r', 'e', 's', 's', 'e', 'd', 0,
    's', 'e', 't', 'P', 'a', 'i', 'n', 't', 'e', 'r', 'W', 'i', 'd', 't', 'h', 0,
    's', 'e', 't', 'P', 'a', 'i', 'n', 't', 'e', 'r', 'C', 'o', 'l', 'o', 'r', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'g', 'r', 'a', 'p', 'h', 'i', 'c', 's', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'C', 'h', 'i', 'l', 'd', 0,
    's', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'd', 'r', 'a', 'g', 'L', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'a', 'g', 'E', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'H', 'u', 'l', 'l', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'a', 'c', 'c', 'e', 'l', 'e', 'r', 'o', 'm', 'e', 't', 'e', 'r', 0,
    's', 'p', 'e', 'c', 'i', 'a', 'l', 'S', 'e', 'n', 's', 'o', 'r', 0,
    'd', 'i', 'g', 'i', 't', 'a', 'l', 'S', 'e', 'n', 's', 'o', 'r', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'p', 'a', 'l', 'e', 't', 't', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    's', 'e', 't', 'B', 'a', 'c', 'k', 'g', 'r', 'o', 'u', 'n', 'd', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    'b', 'u', 't', 't', 'o', 'n', 'P', 'r', 'e', 's', 's', 'e', 'd', 0,
    't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd', 'T', 'i', 'm', 'e', 0,
    'd', 'r', 'a', 'g', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'o', 'c', 'u', 's', 'O', 'u', 't', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'y', 'H', 'u', 'l', 'l', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'o', 'b', 'j', 'e', 'c', 't', 'S', 'e', 'n', 's', 'o', 'r', 0,
    'i', 's', 'P', 'a', 'd', 'P', 'r', 'e', 's', 's', 'e', 'd', 0,
    't', 'i', 'm', 'e', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', 0,
    'p', 'a', 'c', 'k', 'e', 'd', 'U', 'I', 'n', 't', '3', '2', 0,
    'a', 'n', 'a', 'l', 'o', 'g', 'S', 'e', 'n', 's', 'o', 'r', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'L', 'a', 'b', 'e', 'l', 's', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'f', 'o', 'c', 'u', 's', 'I', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'a', 's', 'M', 'e', 's', 's', 'a', 'g', 'e', 's', 0,
    's', 't', 'o', 'p', 'W', 'a', 'i', 't', 'i', 'n', 'g', 0,
    't', 'r', 'i', 'k', 'N', 'e', 't', 'w', 'o', 'r', 'k', 0,
    'i', 's', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'e', 'd', 0,
    'r', 'e', 'a', 'd', 'V', 'o', 'l', 't', 'a', 'g', 'e', 0,
    't', 'a', 'b', 'l', 'e', 't', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'a', 'w', 'E', 'l', 'l', 'i', 'p', 's', 'e', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 'T', 'e', 'x', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 'T', 'e', 'x', 't', 0,
    'a', 'c', 't', 'i', 'o', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'r', 'e', 'a', 'd', 'R', 'a', 'w', 'D', 'a', 't', 'a', 0,
    't', 'r', 'i', 'k', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'n', 'e', 'w', 'M', 'e', 's', 's', 'a', 'g', 'e', 0,
    'c', 'l', 'e', 'a', 'r', 'Q', 'u', 'e', 'u', 'e', 0,
    'l', 'i', 'n', 'e', 'S', 'e', 'n', 's', 'o', 'r', 0,
    't', 'r', 'i', 'k', 'K', 'e', 'r', 'n', 'e', 'l', 0,
    'b', 'u', 't', 't', 'o', 'n', 'C', 'o', 'd', 'e', 0,
    'w', 'a', 's', 'P', 'r', 'e', 's', 's', 'e', 'd', 0,
    'm', 'a', 'x', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'm', 'i', 'n', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    's', 'e', 'r', 'v', 'o', 'M', 'o', 't', 'o', 'r', 0,
    'p', 'o', 'w', 'e', 'r', 'M', 'o', 't', 'o', 'r', 0,
    'f', 'o', 'n', 't', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'e', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 'S', 'p', 'a', 'n', 0,
    'c', 'o', 'n', 's', 't', 'r', 'a', 'i', 'n', 't', 0,
    'c', 'l', 'o', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'r', 'e', 'p', 'e', 'a', 't', 'T', 'i', 'm', 'e', 0,
    'w', 'h', 'e', 'e', 'l', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'i', 'e', 'l', 'd', 'W', 'i', 'd', 't', 'h', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 0,
    'p', 'l', 'a', 'y', 'S', 'o', 'u', 'n', 'd', 0,
    'g', 'y', 'r', 'o', 's', 'c', 'o', 'p', 'e', 0,
    'c', 'o', 'n', 'n', 'e', 'c', 't', 'e', 'd', 0,
    'i', 's', 'P', 'r', 'e', 's', 's', 'e', 'd', 0,
    's', 'h', 'o', 'w', 'I', 'm', 'a', 'g', 'e', 0,
    'd', 'r', 'a', 'w', 'P', 'o', 'i', 'n', 't', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'm', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    's', 'h', 'o', 'w', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'i', 'd', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'o', 'p', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'i', 's', 'E', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'r', 'e', 'c', 'e', 'i', 'v', 'e', 'r', 's', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    's', 'e', 'r', 'v', 'e', 'r', 'I', 'p', 0,
    'p', 'l', 'a', 'y', 'T', 'o', 'n', 'e', 0,
    'm', 'a', 'x', 'V', 'a', 'l', 'u', 'e', 0,
    'm', 'i', 'n', 'V', 'a', 'l', 'u', 'e', 0,
    'p', 'o', 'w', 'e', 'r', 'O', 'f', 'f', 0,
    's', 'e', 't', 'P', 'o', 'w', 'e', 'r', 0,
    'a', 'd', 'd', 'L', 'a', 'b', 'e', 'l', 0,
    'd', 'r', 'a', 'w', 'R', 'e', 'c', 't', 0,
    'd', 'r', 'a', 'w', 'L', 'i', 'n', 'e', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'b', 'e', 'h', 'a', 'v', 'i', 'o', 'r', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'f', 'i', 'l', 'l', 'C', 'h', 'a', 'r', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    'r', 'e', 'c', 'e', 'i', 'v', 'e', 0,
    'g', 'a', 'm', 'e', 'p', 'a', 'd', 0,
    'e', 'n', 'c', 'o', 'd', 'e', 'r', 0,
    'b', 'a', 't', 't', 'e', 'r', 'y', 0,
    'n', 'e', 'w', 'D', 'a', 't', 'a', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'd', 'r', 'a', 'w', 'A', 'r', 'c', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'r', 'o', 'w', 'S', 'p', 'a', 'n', 0,
    'c', 'a', 'p', 't', 'i', 'o', 'n', 0,
    'd', 'i', 's', 'p', 'l', 'a', 'y', 0,
    's', 't', 'o', 'p', 'p', 'e', 'd', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    's', 'e', 'n', 's', 'o', 'r', 0,
    'o', 'r', 'a', 'n', 'g', 'e', 0,
    'd', 'e', 't', 'e', 'c', 't', 0,
    'r', 'e', 'd', 'r', 'a', 'w', 0,
    'y', 'R', 'o', 'u', 'n', 'd', 0,
    'x', 'R', 'o', 'u', 'n', 'd', 0,
    'm', 'e', 't', 'r', 'i', 'c', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    'w', 'i', 'n', 'd', 'o', 'w', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    'b', 'u', 't', 't', 'o', 'n', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    'w', 'i', 'd', 'g', 'e', 't', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    's', 'e', 'n', 'd', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 's', 't', 'e', 'm', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'a', 'c', 't', 'i', 'o', 'n', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'o', 'f', 'f', 's', 'e', 't', 0,
    'c', 'r', 'e', 'a', 't', 'e', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    'o', 'b', 'j', 'e', 'c', 't', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'm', 'o', 't', 'o', 'r', 0,
    'p', 'a', 'd', 'U', 'p', 0,
    'w', 'h', 'e', 'e', 'l', 0,
    'p', 'o', 'w', 'e', 'r', 0,
    'b', 'r', 'u', 's', 'h', 0,
    'h', 'i', 'n', 't', 's', 0,
    'c', 'l', 'e', 'a', 'r', 0,
    'r', 'e', 's', 'e', 't', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 't', 'a', 't', 'e', 0,
    'g', 'r', 'e', 'e', 'n', 0,
    's', 'e', 'n', 'd', 0,
    'm', 'y', 'I', 'p', 0,
    'p', 'a', 'd', 'Y', 0,
    'p', 'a', 'd', 'X', 0,
    'i', 'n', 'i', 't', 0,
    'h', 'i', 'd', 'e', 0,
    'p', 'o', 'r', 't', 0,
    'k', 'e', 'y', 's', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'i', 'l', 'l', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    'r', 'e', 'a', 'd', 0,
    't', 'y', 'p', 'e', 0,
    's', 't', 'o', 'p', 0,
    's', 'a', 'y', 0,
    'p', 'e', 'n', 0,
    'o', 'f', 'f', 0,
    'p', 'o', 's', 0,
    'r', 'e', 'd', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
    't', 'o', 0,
};

QString sipVH_trikControl_0(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, bool a0)
{
    QString sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "b",a0);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_QString, &sipRes);

    return sipRes;
}

void sipVH_trikControl_1(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0,const QString& a1)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "iN",a0,new QString(a1),sipType_QString,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

void sipVH_trikControl_2(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QString& a0,int a1)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "Ni",new QString(a0),sipType_QString,NULL,a1);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

QHostAddress sipVH_trikControl_3(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    QHostAddress sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_QHostAddress, &sipRes);

    return sipRes;
}

trikControl::GamepadInterface* sipVH_trikControl_4(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    trikControl::GamepadInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_GamepadInterface, &sipRes);

    return sipRes;
}

trikControl::EncoderInterface* sipVH_trikControl_5(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QString& a0)
{
    trikControl::EncoderInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QString(a0),sipType_QString,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_EncoderInterface, &sipRes);

    return sipRes;
}

trikControl::VectorSensorInterface* sipVH_trikControl_6(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    trikControl::VectorSensorInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_VectorSensorInterface, &sipRes);

    return sipRes;
}

trikControl::BatteryInterface* sipVH_trikControl_7(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    trikControl::BatteryInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_BatteryInterface, &sipRes);

    return sipRes;
}

trikControl::LedInterface* sipVH_trikControl_8(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    trikControl::LedInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_LedInterface, &sipRes);

    return sipRes;
}

trikControl::ObjectSensorInterface* sipVH_trikControl_9(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QString& a0)
{
    trikControl::ObjectSensorInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QString(a0),sipType_QString,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_ObjectSensorInterface, &sipRes);

    return sipRes;
}

trikControl::LineSensorInterface* sipVH_trikControl_10(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QString& a0)
{
    trikControl::LineSensorInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QString(a0),sipType_QString,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_LineSensorInterface, &sipRes);

    return sipRes;
}

trikControl::SensorInterface* sipVH_trikControl_11(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QString& a0)
{
    trikControl::SensorInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QString(a0),sipType_QString,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_SensorInterface, &sipRes);

    return sipRes;
}

trikControl::MotorInterface* sipVH_trikControl_12(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QString& a0)
{
    trikControl::MotorInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QString(a0),sipType_QString,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_MotorInterface, &sipRes);

    return sipRes;
}

trikControl::KeysInterface* sipVH_trikControl_13(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    trikControl::KeysInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_KeysInterface, &sipRes);

    return sipRes;
}

trikControl::DisplayInterface* sipVH_trikControl_14(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    trikControl::DisplayInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_DisplayInterface, &sipRes);

    return sipRes;
}

trikControl::DisplayWidgetInterface* sipVH_trikControl_15(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    trikControl::DisplayWidgetInterface* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H0", sipType_trikControl_DisplayWidgetInterface, &sipRes);

    return sipRes;
}

QVector<int> sipVH_trikControl_16(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    QVector<int> sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_QVector_1800, &sipRes);

    return sipRes;
}

float sipVH_trikControl_17(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    float sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "f", &sipRes);

    return sipRes;
}

int sipVH_trikControl_18(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, bool a0)
{
    int sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "b",a0);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "i", &sipRes);

    return sipRes;
}

void sipVH_trikControl_19(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0,bool a1)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "ib",a0,a1);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

void sipVH_trikControl_20(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0,int a1,int a2,int a3,int a4,int a5)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "iiiiii",a0,a1,a2,a3,a4,a5);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

void sipVH_trikControl_21(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0,int a1,int a2,int a3,bool a4)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "iiiib",a0,a1,a2,a3,a4);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

void sipVH_trikControl_22(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, int a0,int a1,int a2,int a3)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "iiii",a0,a1,a2,a3);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

void sipVH_trikControl_23(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QString& a0,int a1,int a2)
{
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "Nii",new QString(a0),sipType_QString,NULL,a1,a2);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "Z");
}

trikControl::DisplayWidgetInterface& sipVH_trikControl_24(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    trikControl::DisplayWidgetInterface *sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    int sipRc = sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H1", sipType_trikControl_DisplayWidgetInterface, &sipRes);

    if (sipRc < 0)
        return *new trikControl::DisplayWidgetInterface();

    return *sipRes;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_trikControl__SensorInterface__Type, {0}}, sipNameNr_Type, 14, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_trikControl__MotorInterface__Type, {0}}, sipNameNr_Type, 11, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_trikControl_trikControl.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_BatteryInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_BrickFactory.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_BrickInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_DisplayInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_DisplayWidgetInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_EncoderInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_GamepadInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_KeysInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_LedInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_LineSensorInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_MotorInterface.super.ctd_base,
    &enumTypes[1].etd_base,
    &sipTypeDef_trikControl_trikControl_ObjectSensorInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikControl_SensorInterface.super.ctd_base,
    &enumTypes[0].etd_base,
    &sipTypeDef_trikControl_trikControl_VectorSensorInterface.super.ctd_base,
    &sipTypeDef_trikControl_trikKernel.super.ctd_base,
    &sipTypeDef_trikControl_trikKernel_TimeVal.super.ctd_base,
    &sipTypeDef_trikControl_trikNetwork.super.ctd_base,
    &sipTypeDef_trikControl_trikNetwork_MailboxFactory.super.ctd_base,
    &sipTypeDef_trikControl_trikNetwork_MailboxInterface.super.ctd_base,
};


/*
 * This defines the virtual handlers that this module implements and can be
 * used by other modules.
 */
static sipVirtHandlerFunc virtHandlersTable[] = {
    (sipVirtHandlerFunc)sipVH_trikControl_0,
    (sipVirtHandlerFunc)sipVH_trikControl_1,
    (sipVirtHandlerFunc)sipVH_trikControl_2,
    (sipVirtHandlerFunc)sipVH_trikControl_3,
    (sipVirtHandlerFunc)sipVH_trikControl_4,
    (sipVirtHandlerFunc)sipVH_trikControl_5,
    (sipVirtHandlerFunc)sipVH_trikControl_6,
    (sipVirtHandlerFunc)sipVH_trikControl_7,
    (sipVirtHandlerFunc)sipVH_trikControl_8,
    (sipVirtHandlerFunc)sipVH_trikControl_9,
    (sipVirtHandlerFunc)sipVH_trikControl_10,
    (sipVirtHandlerFunc)sipVH_trikControl_11,
    (sipVirtHandlerFunc)sipVH_trikControl_12,
    (sipVirtHandlerFunc)sipVH_trikControl_13,
    (sipVirtHandlerFunc)sipVH_trikControl_14,
    (sipVirtHandlerFunc)sipVH_trikControl_15,
    (sipVirtHandlerFunc)sipVH_trikControl_16,
    (sipVirtHandlerFunc)sipVH_trikControl_17,
    (sipVirtHandlerFunc)sipVH_trikControl_18,
    (sipVirtHandlerFunc)sipVH_trikControl_19,
    (sipVirtHandlerFunc)sipVH_trikControl_20,
    (sipVirtHandlerFunc)sipVH_trikControl_21,
    (sipVirtHandlerFunc)sipVH_trikControl_22,
    (sipVirtHandlerFunc)sipVH_trikControl_23,
    (sipVirtHandlerFunc)sipVH_trikControl_24,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", 1, NULL},
    {"PyQt4.QtNetwork", -1, NULL},
    {"PyQt4.QtGui", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_trikControl = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_trikControl,
    0,
    -1,
    sipStrings_trikControl,
    importsTable,
    NULL,
    22,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    virtHandlersTable,
    NULL,
    NULL,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_trikControl;
const sipExportedModuleDef *sipModuleAPI_trikControl_QtCore;
const sipExportedModuleDef *sipModuleAPI_trikControl_QtNetwork;
const sipExportedModuleDef *sipModuleAPI_trikControl_QtGui;

sip_qt_metaobject_func sip_trikControl_qt_metaobject;
sip_qt_metacall_func sip_trikControl_qt_metacall;
sip_qt_metacast_func sip_trikControl_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_trikControl
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        inittrikControl
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "trikControl",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_trikControl, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_trikControl), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_trikControl = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_trikControl = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_trikControl == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_trikControl,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_trikControl_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_trikControl_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_trikControl_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_trikControl_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_trikControl,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_trikControl_QtCore = sipModuleAPI_trikControl.em_imports[0].im_module;
    sipModuleAPI_trikControl_QtNetwork = sipModuleAPI_trikControl.em_imports[1].im_module;
    sipModuleAPI_trikControl_QtGui = sipModuleAPI_trikControl.em_imports[2].im_module;

    SIP_MODULE_RETURN(sipModule);
}
