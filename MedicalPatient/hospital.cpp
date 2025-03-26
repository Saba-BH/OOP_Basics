#include "hospital.hpp"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
void Hospital::addPatient(const Patient &patient){
    patients.push_back(patient);

}
void Hospital::loadFromFile(){
    ifstream MyFile("patientsInfo.txt");
    if(!MyFile.is_open()){
        cerr << "Error to open file." << endl ;
        return;

    }
    string line ;
    while(getline(MyFile , line)){
        try{
            string decryptedLine = decrypt(line , 'S');
            vector<string> info = split(decryptedLine , ' ');

            if(info.size() != 5){
                cerr << "Invild data format, skipping line." << endl ;
                continue;
            }
            string name = info[0];
            float BT = stof(info[1]);
            int HR = stoi(info[2]);
            int RR = stoi(info[3]);
            int BP = stoi(info[4]);

            Patient p(name , BT , HR , RR , BP , false);
            addPatient(p);

        }
        catch (const exception& e){
            cerr << "Skipped invalid data: " << e.what() << endl ;
        }
    }
    MyFile.close();
}
string Hospital::decrypt(const string& text , char key){
    string result = text ;
    for(char& c : result){
        c ^= key ;
    }
    return result;
}
vector<string> Hospital::split(const string& str , char delimiter){
    vector<string> info;
    stringstream ss(str);
    string infoo;
    while(ss >> infoo){
        info.push_back(infoo);
    }
    return info;
}
void Hospital::displyPatients() const{
     for (const auto &patient : patients)
    {
        patient.displyInfo();
        cout << "--------------------------" << endl ;
    }

}