#inculde "Shooter.h"
Shooter::Shooter()
{
    comp1_talon = new WPI_talonSRX(0);
    comp2_talon = new WPI_talonSRX(0);
    valve = new frc::Solenoid(0);
}

void Shooter::GO() {
    comp1_talon->Set(1);
    comp2_talon->Set(1);
    valve->Set(False);
}
void Shooter::STOP() {
    comp1_talon->Set(0);
    comp2_talon->Set(0);
    valve->Set(False);
}
void Shooter::SHOOT() {
    comp1_talon->Set(0);
    comp2_talon->Set(0);
    valve->Set(True);
}