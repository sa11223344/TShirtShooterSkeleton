#pragma once 
class Shooter
{
    private:
        WPI_talnoSRX *comp1_talon;
        WPI_talnoSRX *comp2_talon;
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