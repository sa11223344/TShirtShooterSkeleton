#inculde "Shooter.h"
Shooter::Shooter()
{
    comp1_talon = new WPI_talonSRX(0);
    comp2_talon = new WPI_talonSRX(0);
    valve = new frc::Solenoid(0);
}

void Shooter::Go() {
    comp1_talon->Set(1);
    comp2_talon->Set(1);
    valve->Set(False);
}
void Shooter::Stop() {
    comp1_talon->Set(0);
    comp2_talon->Set(0);
    valve->Set(False);
}
void Shooter::Shoot() {
    comp1_talon->Set(0);
    comp2_talon->Set(0);
    valve->Set(True);
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

}