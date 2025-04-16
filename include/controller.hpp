/// @file controller.hpp
/// @brief Defines the EnergyController class for managing energy flow.

#ifndef CONTROLLER_HPP_
#define CONTROLLER_HPP_

#pragma once
#include "energy_source.hpp"
#include "energy_strategy.hpp"

/**
 * @brief Controls the simulation of energy sources using a selected strategy.
 */
class EnergyController {
private:
    SolarPanel& panel;
    Battery& battery;
    EnergyStrategy* strategy;
public:
    /**
     * @brief Constructor for the energy controller.
     * @param p Reference to the soler panel.
     * @param b Reference to the battery.
     * @param s pointer to the energy management strategy.
     */
    EnergyController(SolarPanel& p, Battery& b, EnergyStrategy* s);

    /**
     * @brief Simulates a single time step with a given energy demand.
     * @param loadDemand The amount of energy required by the load in KWh.
     */
    void simulate(double loadDemand);
};

#endif
