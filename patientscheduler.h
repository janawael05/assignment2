#ifndef PATIENTSCHEDULER_H
#define PATIENTSCHEDULER_H

#include "Patient.h"
#include <queue>
#include <iostream>

class PatientScheduler {
private:
    std::priority_queue<Patient> urgentQueue; // Priority queue for urgent patients
    std::queue<Patient> normalQueue;          // FIFO queue for normal patients
    int totalUrgentServed = 0;                // Count of urgent patients served
    int totalNormalServed = 0;                // Count of normal patients served

public:
    void addPatient(const Patient& patient); // Add patient to the appropriate queue
    void servePatients(int maxServeCount);   // Serve patients based on priority
    void displayQueue() const;               // Display the current queue sizes

    // Accessors
    size_t getUrgentQueueSize() const;
    size_t getNormalQueueSize() const;
    int getTotalUrgentServed() const;
    int getTotalNormalServed() const;
};

#endif // PATIENTSCHEDULER_H


