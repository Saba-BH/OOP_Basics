#include <iostream>
#include "event.hpp"
using namespace std;
Event::Event(const string &name, const chrono::system_clock::time_point &start, const chrono::system_clock::time_point &end)
    : name(name), start_time(start), end_time(end), Del(false)
{
    if (start_time >= end_time)
    {
        throw invalid_argument("Error: Start time must be before end time.");
    }
}
Event::~Event()
{
    if (Del)
    {
        cout << "Event " << name << " has been deleted." << endl;
    }
}
string Event::getName() const
{
    return name;
}
chrono::system_clock::time_point Event::getStartTime() const
{
    return start_time;
}
chrono::system_clock::time_point Event::getEndTime() const
{
    return end_time;
}
void Event::DelItem()
{
    Del = true;
}