#include "Patient.h"

Patient::Patient(const std::string& id, char gender, const std::string& arrivalTime, bool isUrgent)
    : id(id), gender(gender), arrivalTime(arrivalTime), isUrgent(isUrgent) {}

bool Patient::operator<(const Patient& other) const {
    if (isUrgent != other.isUrgent) {
        return !isUrgent; // Urgent patients have higher priority
    }
    return arrivalTime > other.arrivalTime; // Earlier times have higher priority
}
