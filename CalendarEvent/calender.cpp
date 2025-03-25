#include <iostream>
#include "calendar.hpp"
#include <algorithm>
#include <chrono>

using namespace std;
void Calendar::add_event(const Event &event)
{
    if (!conflict(event))
    {
        events.reserve(100);
        events.push_back(event);
        cout << "Event " << event.getName() << " added successfully ." << endl;
    }
    else
    {
        cout << "Event " << event.getName() << " conflicts with exesting events and was not added." << endl;
    }
}

void Calendar::refresh()
{
    using namespace std::chrono;
    auto now = system_clock::now();
    size_t initialSize = events.size();

    for (size_t i = 0; i < initialSize;)
    {
        if (events[i].getEndTime() < now)
        {
            swap(events[i], events.back());
            events.back().DelItem();
            events.pop_back();
            initialSize--;
        }
        else
        {
            i++;
        }
    }
    if (events.size() < initialSize)
    {
        cout << "The refresh is over." << endl;
    }
}

bool Calendar::conflict(const Event &event) const
{
    for (const auto &existing_event : events)
    {
        if (event.getStartTime() < existing_event.getEndTime() && event.getEndTime() > existing_event.getStartTime())
        {
            return true;
        }
    }
    return false;
}
void Calendar::print_events() const
{
    if (events.empty())
    {
        cout << "No events in the calendar." << endl;
        return;
    }
    cout << "Events in the calendar : " << endl;
    for (const auto &event : events)
    {
        cout << "- " << event.getName() << endl;
    }
}