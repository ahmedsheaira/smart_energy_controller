// src/controller.cpp
#include "controller.hpp"

EnergyController::EnergyController(SolarPanel& p, Battery& b, EnergyStrategy* s)
    : panel(p), battery(b), strategy(s) {}

void EnergyController::simulate(double loadDemand) {
    panel.update();
    strategy->execute(panel, battery, loadDemand);
}
