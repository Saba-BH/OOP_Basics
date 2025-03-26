#include "hospital.hpp"
#include <iostream>
using namespace std;
int main()
{

    Hospital hospital;
    hospital.loadFromFile();
    Patient p1("Saba", 36.0, 84, 17, 99, true);
    Patient p2("Hana", 38.2, 93, 19, 122, true);
    hospital.addPatient(p1);
    hospital.addPatient(p2);
    cout << "Patient List : " << endl;
    hospital.displyPatients();
}