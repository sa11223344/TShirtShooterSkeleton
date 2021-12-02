#pragma once 
#include <ctre/Phoenix.h>
class Shooter
{
    private:
        WPI_TalonSRX *comp1_talon;
        WPI_TalonSRX *comp2_talon;
        frc::Solenoid *valve;
    public:
        enum States{
            GO, STOP, SHOOT
        };
        
        States current_state;

        Shooter();
        void Go();
        void Stop();
        void Shoot();
    
}