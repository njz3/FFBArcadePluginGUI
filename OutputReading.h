/*This file is part of FFB Arcade Plugin GUI.
FFB Arcade Plugin GUI is free software : you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
FFB Arcade Plugin GUI is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with FFB Arcade Plugin GUI.If not, see < https://www.gnu.org/licenses/>.
*/

#pragma once
#include <Windows.h>
#include "Helper.h"

namespace FFBPluginGUI {

	public ref class OutputReading : Helper
	{
	public:
		OutputReading(MetroForm^ obj1)
		{
			this->obj = obj1;
			this->InitializeComponent();
		}

	private:
		void InitializeComponent(void)
		{
			this->SuspendLayout();

			this->AutoAddDevice1Selector();
			this->AutoAddDevice2Selector();
			this->AutoAddDevice3Selector();
			this->AutoAddComponent("FeedbackLength");

			this->AutoAddComponent("CommonOptions");
			this->AutoAddComponent("AlternativeFFB");
			this->AutoAddComponent("PowerMode");

			this->AutoAddComponent("EnableRumbleDevice2");
			this->AutoAddComponent("EnableRumbleDevice3");
			this->AutoAddComponent("ReverseRumbleDevice2");
			this->AutoAddComponent("ReverseRumbleDevice3");
			this->AutoAddComponent("AlternativeFFBDevice2");			
			this->AutoAddComponent("AlternativeFFBDevice3");

			this->AutoAddLongTextBox(L"Force Spring Effect", L"Force Spring effect over using default game spring");

			this->AutoAddShortCheckBox("EnableForceSpringEffect", L"Force Spring Effect", L"Forces spring effect to work all the time");
			this->AutoAddShortTrackBarBlock("ForceSpringStrength", L"Forced Spring Strength", 0, 100, L"How strong the spring effect is when forced on");

			this->AutoAddLongTextBox(L"Shaker Motor / Light Gun Games Only", L"For games which use shaker motor for effects");

			this->AutoAddShortTrackBarBlock("SinePeriod", L"Sine Period", 0, 100, L"Period of the sine wave");
			this->AutoAddShortTrackBarBlock("SineFadePeriod", L"Sine Fade Period", 0, 100, L"Duration of the sine fade");
			this->AutoAddShortTrackBarBlock("SineStrength", L"Sine Strength", 0, 100, L"strength of the sine effect");
			this->AutoAddShortTrackBarBlock("RumbleStrengthLeftMotor", L"L Rumble Motor Strength", 0, 100, L"Strength of Left Rumble Motor");
			this->AutoAddShortTrackBarBlock("RumbleStrengthRightMotor", L"R Rumble Motor Strength", 0, 100, L"Strength of Right Rumble Motor");		

			this->New2ColsPage();

			this->AutoAddComponent("GlobalForce");

			this->AutoAddComponent("AltGlobalForce");

			this->AutoAddComponent("GlobalForceDevice2");

			this->AutoAddComponent("AltGlobalForceDevice2");

			this->AutoAddComponent("GlobalForceDevice3");

			this->AutoAddComponent("AltGlobalForceDevice3");

			this->Init();
		}
	};
}