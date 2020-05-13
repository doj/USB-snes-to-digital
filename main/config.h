#pragma once
#include <stdint.h>
#include "pins.h"

/*
 * pin 9-13 used by the USB host shield.
 * Don't use these for joystick 1 or 2.
 */

/// define to 1 if you want to use a serial output for debugging on PIN_D0 and PIN_D1.
/// You can't use those pins for control port pins.
#define USE_SERIAL 1
#if USE_SERIAL
#define SERIAL_BAUD 115200
#include <SPI.h>
#endif

///@name Joystick 1 configuration
///      to disable joystick one, remove these defines.
///@{
/// set the Arduino pin for Joystick 1 Up on DB9 pin 1
#define JOY1_UP    PIN_A0
/// set the Arduino pin for Joystick 1 Down on DB9 pin 2
#define JOY1_DOWN  PIN_A1
/// set the Arduino pin for Joystick 1 Left on DB9 pin 3
#define JOY1_LEFT  PIN_A2
/// set the Arduino pin for Joystick 1 Right on DB9 pin 4
#define JOY1_RIGHT PIN_A3
/// set the Arduino pin for Joystick 1 Fire on DB9 pin 6
#define JOY1_FIRE  PIN_A4
/// set the Arduino pin for Pot X 1 on DB9 pin 9, should be PIN_D2 or PIN_D3 if you plan to use the mouse.
#define JOY1_POTX  PIN_D2
/// set the Arduino pin for Pot Y 1 on DB9 pin 5
#define JOY1_POTY  PIN_A5
///@}


#if 1
///@name Joystick 2 configuration
///      to disable joystick one, remove these defines.
///@{
/// set the Arduino pin for Joystick 2 Up on DB9 pin 1
#define JOY2_UP    PIN_D4
/// set the Arduino pin for Joystick 2 Down on DB9 pin 2
#define JOY2_DOWN  PIN_D5
/// set the Arduino pin for Joystick 2 Left on DB9 pin 3
#define JOY2_LEFT  PIN_D6
/// set the Arduino pin for Joystick 2 Right on DB9 pin 4
#define JOY2_RIGHT PIN_D7
/// set the Arduino pin for Joystick 2 Fire on DB9 pin 6
#define JOY2_FIRE  PIN_D8
/// set the Arduino pin for Pot X 2 on DB9 pin 9, should be PIN_D2 or PIN_D3 if you plan to use the mouse.
#define JOY2_POTX  PIN_D3
/// set the Arduino pin for Pot Y 2 on DB9 pin 5
#define JOY2_POTY  PIN_D1
///@}
#else
#define JOY2_UP    JOY1_UP
#define JOY2_DOWN  JOY1_DOWN
#define JOY2_LEFT  JOY1_LEFT
#define JOY2_RIGHT JOY1_RIGHT
#define JOY2_FIRE  JOY1_FIRE
#define JOY2_POTX  JOY1_POTX
#define JOY2_POTY  JOY1_POTY
#endif

/// set the Arduino pin for Mouse 1 Up on DB9 pin 1
#define MOUSE1_UP    JOY1_UP
/// set the Arduino pin for Mouse 1 Down on DB9 pin 2
#define MOUSE1_DOWN  JOY1_DOWN
/// set the Arduino pin for Mouse 1 Left on DB9 pin 3
#define MOUSE1_LEFT  JOY1_LEFT
/// set the Arduino pin for Mouse 1 Right on DB9 pin 4
#define MOUSE1_RIGHT JOY1_RIGHT
/// set the Arduino pin for Mouse 1 Fire on DB9 pin 6
#define MOUSE1_FIRE  JOY1_FIRE
/// set the Arduino pin for Pot X 1 on DB9 pin 9
#define MOUSE1_POTX  JOY1_POTX
/// set the Arduino pin for Pot Y 1 on DB9 pin 5
#define MOUSE1_POTY  JOY1_POTY

/// set the Arduino pin for Mouse 1 Up on DB9 pin 1
#define MOUSE2_UP    JOY2_UP
/// set the Arduino pin for Mouse 1 Down on DB9 pin 2
#define MOUSE2_DOWN  JOY2_DOWN
/// set the Arduino pin for Mouse 1 Left on DB9 pin 3
#define MOUSE2_LEFT  JOY2_LEFT
/// set the Arduino pin for Mouse 1 Right on DB9 pin 4
#define MOUSE2_RIGHT JOY2_RIGHT
/// set the Arduino pin for Mouse 1 Fire on DB9 pin 6
#define MOUSE2_FIRE  JOY2_FIRE
/// set the Arduino pin for Pot X 1 on DB9 pin 9
#define MOUSE2_POTX  JOY2_POTX
/// set the Arduino pin for Pot Y 1 on DB9 pin 5
#define MOUSE2_POTY  JOY2_POTY

/// set the sensitivity of an axis event.
/// small values make the axis trigger early.
/// large values make the axis trigger late.
#define AXIS_SENSITIVITY 64
/// set the integer value for the center position of X/Y USB joystick axis.
#define AXIS_CENTER 0x7f

/// frequency in Hz of auto fire on button A
#define AUTO_FIRE_A_FREQ 5
/// frequency in Hz of auto fire on button Y
#define AUTO_FIRE_Y_FREQ 3
