// src/energy_source.cpp
#include "energy_source.hpp"

SolarPanel::SolarPanel() : energyGenerated(0.0) {}

void SolarPanel::update() {
    // Simulate sun: energy from 0 to 5 KWh
    energyGenerated = (std::rand() % 60) / 10.0;    // 0.0 to 6.0 KWh 
}

double SolarPanel::getEnergy() const {
    return energyGenerated;
}

Battery::Battery(double cap) : capacity(cap), storedEnergy(0.0) {}

double Battery::getStoredEnergy() const {
    return storedEnergy;
}

double Battery::getCapacity() const {
    return capacity;
}

void Battery::charge(double amount) {
    storedEnergy += amount;
    if (storedEnergy > capacity)
        storedEnergy = capacity;
}

void Battery::discharge(double amount) {
    storedEnergy -= amount;
    if (storedEnergy < 0)
        storedEnergy = 0;
}
