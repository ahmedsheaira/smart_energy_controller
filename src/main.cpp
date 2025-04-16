// src/main.cpp
#include <ctime>
#include "controller.hpp"

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    SolarPanel panel;
    Battery battery(10.0);
    BasicStrategy strategy;

    EnergyController controller(panel, battery, &strategy);

    for (int itr=0 ; itr<5 ; itr++) {
        std::cout << "\n--- Time step " << itr + 1 << " ---\n";
        controller.simulate(4.0);   //Assume constant load demand: 4.0 KWh
        std::cout << "Battery: " << battery.getStoredEnergy() << " / " << battery.getCapacity() << " KWh\n";
    }

    return 0;
}
