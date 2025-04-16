# ⚡ Smart Energy Controller Simulation

A simulation system in Modern C++ that models the flow of energy in a smart microgrid, using components like solar panels and batteries. It demonstrates how different strategies manage power distribution between sources and loads in an energy-efficient way.

---

## 🚀 Features

- 🌞 Solar energy simulation
- 🔋 Battery storage and capacity handling
- ⚙️ Pluggable energy strategies (e.g., Basic Strategy)
- 🧪 Easy to extend and simulate new strategies
- 📄 Well-structured code with **Doxygen documentation**
- 🧱 Built using **CMake**

---

## 📂 Project Structure

├── CMakeLists.txt
├── Doxyfile
├── include
│   ├── controller.hpp      # Solar panel and battery classes
│   ├── energy_source.hpp   # Main simulation controller
│   └── energy_strategy.hpp # Strategy pattern for energy logic
├── README.md
└── src
    ├── controller.cpp
    ├── energy_source.cpp
    ├── energy_strategy.cpp
    └── main.cpp

---

## 🛠️ Build Instructions

### 🔧 Requirements:
- C++17 compatible compiler (e.g., `g++`, `clang++`)
- CMake 3.10+

### 📦 Build and Run:

```bash
# Clone the repo
git clone git@github.com:ahmedsheaira/smart_energy_controller.git
cd smart_energy_controller

# Build
mkdir build
cd build
cmake ..
make

# Run
./SmartEnergyController
```

### 📊 Sample Output

```text
--- Time step 1 ---
Solar produced: 1.9 KWh
Not enough energy! Load partially met.
Battery: 0 / 10 KWh

--- Time step 2 ---
Solar produced: 0 KWh
Not enough energy! Load partially met.
Battery: 0 / 10 KWh

--- Time step 3 ---
Solar produced: 1.5 KWh
Not enough energy! Load partially met.
Battery: 0 / 10 KWh

--- Time step 4 ---
Solar produced: 1.5 KWh
Not enough energy! Load partially met.
Battery: 0 / 10 KWh

--- Time step 5 ---
Solar produced: 2 KWh
Not enough energy! Load partially met.
Battery: 0 / 10 KWh
```

### 📘 Documentation

```bash
doxygen Doxyfile
# Open docs/html/index.html in your browser
```
