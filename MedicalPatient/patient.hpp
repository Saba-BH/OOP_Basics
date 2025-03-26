#ifndef PATIENT_HPP
#define PATIENT_HPP
#include <iostream>
using namespace std;
class Patient
{

private:
    string Name;
    float BodyTemperature;
    int HeartRate;
    int RespiratoryRate;
    int BloodPressure;
    bool check = true;
    string encryptInfo(const string &info) const;

public:
    Patient(string, float, int, int, int, bool);
    void displyInfo() const;
    ~Patient();
};
#endif