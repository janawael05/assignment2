#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
public:
    std::string id;
    char gender; // 'M' or 'F'
    std::string arrivalTime; // "HH:MM"
    bool isUrgent; // True for urgent, false for normal

    Patient(const std::string& id, char gender, const std::string& arrivalTime, bool isUrgent);

    // Compare patients for priority queue (urgent first, then earlier times)
    bool operator<(const Patient& other) const;
};

#endif // PATIENT_H
