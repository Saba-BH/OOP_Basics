#ifndef EVENT_HPP
#define EVENT_HPP 

#include <iostream>
#include <string>
#include <chrono>
using namespace std ;
class Event {
     private:
    string name ;
    chrono::system_clock::time_point start_time ;
    chrono::system_clock::time_point end_time ;
    bool Del;

    public:
    Event(const string& name , const chrono::system_clock::time_point& start , const chrono::system_clock::time_point& end);
    ~Event();

    string getName() const ;
    chrono::system_clock::time_point getStartTime() const ;
    chrono::system_clock::time_point getEndTime() const ;
    void DelItem() ;
    
};
#endif
