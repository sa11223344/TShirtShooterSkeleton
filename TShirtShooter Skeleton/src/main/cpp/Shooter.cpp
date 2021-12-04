#include "Shooter.h"

Shooter::Shooter()
{
    comp1_talon = new WPI_TalonSRX(1);
    comp2_talon = new WPI_TalonSRX(11);
    valve = new frc::Solenoid(0,2);
    current_state = States::STOP;
}

void Shooter::Go() {
    comp1_talon->Set(1);
    comp2_talon->Set(1);
    valve->Set(false);
}
void Shooter::Stop() {
    comp1_talon->Set(0);
    comp2_talon->Set(0);
    valve->Set(false);
}
void Shooter::Shoot() {
    comp1_talon->Set(0);
    comp2_talon->Set(0);
    valve->Set(true);
}
void Shooter::StateMachine() {

    switch (current_state)
    {
        case States::GO:
            Go();
            break;
        
        case States::STOP:
            Stop();
            break;
        case States::SHOOT:
            Shoot();
            break;
    }
    frc::SmartDashboard::PutNumber("Shoot" ,(int) current_state);

}