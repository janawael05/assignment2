#include "Simulation.h"
#include <random>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <iostream>

std::string Simulation::generateID() {
    std::mt19937 rng(time(0));
    std::uniform_int_distribution<int> dist(10000000, 99999999);
    return "2850101" + std::to_string(dist(rng));
}

std::string Simulation::generateArrivalTime() {
    std::mt19937 rng(time(0));
    std::uniform_int_distribution<int> hourDist(0, 23);
    std::uniform_int_distribution<int> minuteDist(0, 59);

    int hour = hourDist(rng);
    int minute = minuteDist(rng);

    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hour << ":"
        << std::setw(2) << std::setfill('0') << minute;

    return oss.str();
}

void Simulation::populatePatients(int count) {
    std::mt19937 rng(time(0));
    std::uniform_int_distribution<int> typeDist(0, 1);
    std::uniform_int_distribution<int> genderDist(0, 1);

    for (int i = 0; i < count; ++i) {
        std::string id = generateID();
        char gender = genderDist(rng) ? 'M' : 'F';
        std::string arrivalTime = generateArrivalTime();
        bool isUrgent = typeDist(rng);

        patients.emplace_back(id, gender, arrivalTime, isUrgent);
    }
}

void Simulation::startSimulation() {
    for (const auto& patient : patients) {
        scheduler.addPatient(patient);
    }

    int timeStep = 0;
    while (scheduler.getUrgentQueueSize() > 0 || scheduler.getNormalQueueSize() > 0) {
        std::cout << "=== Time Step: " << ++timeStep << " ===" << std::endl;

        int randomServeCount = 5 + (std::rand() % 6);
        scheduler.servePatients(randomServeCount);
        scheduler.displayQueue();

        std::cout << "Press Enter to advance simulation..." << std::endl;
        std::cin.get();
    }

    displayStatistics();
}

void Simulation::displayStatistics() const {
    std::cout << "Simulation Summary:" << std::endl;
    std::cout << "Total Urgent Patients Served: " << scheduler.getTotalUrgentServed() << std::endl;
    std::cout << "Total Normal Patients Served: " << scheduler.getTotalNormalServed() << std::endl;
}
