// src/energy_strategy.cpp
#include "energy_strategy.hpp"

void BasicStrategy::execute(SolarPanel& panel, Battery& battery, double loadDemand) {
    double solar = panel.getEnergy();

    std::cout << "Solar produced: " << solar << " KWh\n";

    if (solar >= loadDemand) {
        std::cout << "Load demand (" << loadDemand << " KWh) fully met by solar.\n";
        battery.charge(solar - loadDemand);
    } else {
        double batteryNeeded = loadDemand - solar;
        if (battery.getStoredEnergy() >= batteryNeeded) {
            std::cout << "Solar + battery covers the load.\n";
            battery.discharge(batteryNeeded);
        } else {
            std::cout << "Not enough energy! Load partially met.\n";
            battery.discharge(battery.getStoredEnergy());
        }
    }
}
