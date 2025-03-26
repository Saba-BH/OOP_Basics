#include "patient.hpp"
#include <iostream>
#include <fstream>
using namespace std;
Patient::Patient(string Name, float BodyTemperature, int HeartRate, int RespiratoryRate, int BloodPressure, bool check)
    : Name(Name), BodyTemperature(BodyTemperature), HeartRate(HeartRate), RespiratoryRate(RespiratoryRate), BloodPressure(BloodPressure), check(check)
{
    if (check)
    {
        if (BodyTemperature < 36 || BodyTemperature > 37.5)
        {
            cout << "!The " << Name << " body temperature is abnormal." << endl;
        }
        if (HeartRate < 60 || HeartRate > 100)
        {
            cout << "!The " << Name << " heart rate is abnormal." << endl;
        }
        if (RespiratoryRate < 16 || RespiratoryRate > 20)
        {
            cout << "!The " << Name << " respiratory rate is abnormal." << endl;
        }
        if (BloodPressure < 80 || BloodPressure > 120)
        {
            cout << "!The " << Name << " blood pressure is abnormal." << endl;
        }
    }
}
Patient::~Patient()
{
    if (check)
    {
        string info = Name + ' ' + to_string(BodyTemperature) + ' ' + to_string(HeartRate) + ' ' + to_string(RespiratoryRate) + ' ' + to_string(BloodPressure);
        string encryptedInfo = encryptInfo(info);
        ofstream MyFile("patientsInfo.txt", ios::app);
        if (MyFile.is_open())
        {
            MyFile << encryptedInfo << endl;
            MyFile.close();
        }
        check = false;
    }
}
string Patient::encryptInfo(const string &info) const
{
    string encrypted = info;
    char key = 'S';
    for (char &c : encrypted)
    {
        c ^= key;
    }
    return encrypted;
}
void Patient::displyInfo() const
{
    std::cout << "Name: " << Name << endl
              << "Temperature: "
              << BodyTemperature << endl
              << "Heart Rate: " << HeartRate << endl
              << "Respiratory Rate: " << RespiratoryRate << endl
              << "Blood Pressure: " << BloodPressure << endl;
}