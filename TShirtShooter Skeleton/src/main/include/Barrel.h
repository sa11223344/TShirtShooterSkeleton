#pragma once


#include <ctre/Phoenix.h>
#include <frc/Joystick.h>

class Barrel {
private:
    WPI_TalonSRX *elevation_talon;
    frc::Joystick *controller;

public:
    enum States{
        STOP, UP, DOWN, SLOW, INIT
    };

    States current_state;

    Barrel();
        void Init();
        void Stop();
        void Down();
        void Up();
        void Slow();
        void StateMachine();
};