#ifndef SIMULATION_H
#define SIMULATION_H

#include "PatientScheduler.h"
#include <vector>
#include <string>

class Simulation {
private:
    PatientScheduler scheduler;         // Handles patient queues
    std::vector<Patient> patients;      // Stores all generated patients

    std::string generateID();           // Generate random patient ID
    std::string generateArrivalTime();  // Generate random arrival time

public:
    void populatePatients(int count);   // Populate patients with random data
    void startSimulation();             // Start the scheduling simulation
    void displayStatistics() const;     // Display simulation statistics
};

#endif // SIMULATION_H
