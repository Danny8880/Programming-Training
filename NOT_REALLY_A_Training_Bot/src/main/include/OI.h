/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "WPILib.h"
#pragma once
using namespace frc;
class OI {
private:
Joystick* XboxController;
JoystickButton* ControlX;
JoystickButton* ControlY;

 public:
  OI();
private: Joystick* XboxController;
JoystickButton* A;
JoystickButton* B;

};

