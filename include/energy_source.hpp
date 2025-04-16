/// @file energy_source.hpp
/// @brief Define energy-producing and energy-storage components.

#ifndef ENERGY_SOURCE_HPP_
#define ENERGY_SOURCE_HPP_

#pragma onece
#include <cstdlib>

/**
 * @brief Abstract base class for energy source.
 */
class EnergySource {
public:
    virtual ~EnergySource() = default;

    /**
     * @brief Gets the amount of energy produced.
     * @return Energy in kilowatt-hours (KWh).
     */
    virtual double getEnergy() const = 0;

    /**
     * @brief Updates teh internal state of the energy source (e.g., simulate new values).
     */
    virtual void update() = 0;
};

/**
 * @brief Represents a solar panal as an energy source.
 */
class SolarPanel : public EnergySource {
private:
    double energyGenerated; ///< Energy generated in the current cycle
public:
    SolarPanel();

    /**
     * @brief Simulate solar energy production
     */
    void update() override;

    /**
     * @brief Returns the amount of energy generated
     */
    double getEnergy() const override;
};

/**
 * @brief Represent a battery that stores energy.
 */
class Battery {
private:
    double capacity;        ///< Maximum storage capacity in KWh.
    double storedEnergy;    ///< Current stored energy in KWh.
public:
    /**
     * @brief Constructs a battery with the specified capacity.
     * @param cap Maximum capacity in KWh.
     */
    Battery(double cap);

    /**
     * @brief Gets current stored energy.
     */
    double getStoredEnergy() const;

    /**
     * @brief Gets battery capacity.
     */
    double getCapacity() const;

    /**
     * @brief Charges the battery with the given energy amount.
     */
    void charge(double amount);

    /**
     * @brief Discharges the battery by the given energy amount.
     */
    void discharge(double amount);
};

#endif
