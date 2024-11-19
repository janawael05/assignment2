#include "PatientScheduler.h"

void PatientScheduler::addPatient(const Patient& patient) {
    if (patient.isUrgent) {
        urgentQueue.push(patient);
    } else {
        normalQueue.push(patient);
    }
}

void PatientScheduler::servePatients(int maxServeCount) {
    int served = 0;

    while (served < maxServeCount && !urgentQueue.empty()) {
        std::cout << "Serving Urgent Patient: " << urgentQueue.top().id << std::endl;
        urgentQueue.pop();
        totalUrgentServed++;
        served++;
    }

    while (served < maxServeCount && !normalQueue.empty()) {
        std::cout << "Serving Normal Patient: " << normalQueue.front().id << std::endl;
        normalQueue.pop();
        totalNormalServed++;
        served++;
    }

    if (served == 0) {
        std::cout << "No patients to serve this step." << std::endl;
    }
}

void PatientScheduler::displayQueue() const {
    std::cout << "Urgent Queue Size: " << urgentQueue.size() << std::endl;
    std::cout << "Normal Queue Size: " << normalQueue.size() << std::endl;
}

// Accessor Implementations
size_t PatientScheduler::getUrgentQueueSize() const {
    return urgentQueue.size();
}

size_t PatientScheduler::getNormalQueueSize() const {
    return normalQueue.size();
}

int PatientScheduler::getTotalUrgentServed() const {
    return totalUrgentServed;
}

int PatientScheduler::getTotalNormalServed() const {
    return totalNormalServed;
}

