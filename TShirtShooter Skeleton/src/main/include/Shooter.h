#pragma once 
class Shooter
{
    private:
        WPI_talonSRX *comp1_talon;
        WPI_talonSRX *comp2_talon;
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