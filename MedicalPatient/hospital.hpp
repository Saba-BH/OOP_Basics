#ifndef HOSPITAL_HPP
#define HOSPITAL_HPP
#include "patient.hpp"
#include <vector>
class Hospital{
    private:

    vector<Patient> patients;

    public:

    void addPatient(const Patient &patient);
    string decrypt(const string& , char);
    vector<string> split(const string& , char );
    void loadFromFile();
    void displyPatients() const;


};
#endif