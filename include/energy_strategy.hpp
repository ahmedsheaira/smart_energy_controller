/// @file energy_strategy.hpp
/// @brief Declares energy flow management strategies.

#ifndef ENERGY_STRATEGY_HPP_
#define ENERGY_STRATEGY_HPP_

#pragma once
#include <iostream>
#include "energy_source.hpp"

/**
 * @brief Interface for energy management strategies.
 */
class EnergyStrategy {
public:
    virtual ~EnergyStrategy() = default;

    /**
     * @brief Executes the strategy to manage energy flow.
     * @param panel Reference to the solar panel.
     * @param battery Reference to the battery.
     * @param loadDemand The required load demand in KWh.
     */
    virtual void execute(SolarPanel& panel, Battery& battery, double loadDemand) = 0;
};

/**
 * @brief A basic energy management strategy implementation.
 */
class BasicStrategy : public EnergyStrategy {
public:
    /**
     * @brief Basic strategy implementation: prioritize solar, then battery.
     */
    void execute(SolarPanel& panel, Battery& battery, double loadDemand) override;
};

#endif
