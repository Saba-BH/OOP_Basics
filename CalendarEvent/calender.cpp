#include <iostream>
#include "calendar.hpp"
#include <algorithm>
#include <chrono>

using namespace std ;
void Calendar::add_event(const Event& event){
    if(!conflict(event)){
        events.reserve(100);
        events.push_back(event);
        cout << "Event " << event.getName() << " added successfully ." << endl ;
    }
    else{
        cout << "Event " << event.getName() << " conflicts with exesting events and was not added." << endl;
    }
}

void Calendar::refresh() {
    auto now = chrono::system_clock::now();
    vector<Event*> events_to_delete;
    for (auto it = events.begin(); it != events.end(); ) {
        if (it->getEndTime() < now) {
            it->DelItem();
            events_to_delete.push_back(&(*it));
            it = events.erase(it);
        } else {
            ++it;
        }
    }
    
    for (auto event : events_to_delete) {
        
        cout << "Event " << event->getName() << " has been deleted." << endl;
    }
}

bool Calendar::conflict(const Event& event) const {
    for(const auto& existing_event : events){
        if(event.getStartTime() <existing_event.getEndTime() && event.getEndTime() > existing_event.getStartTime()){
            return true;
        }
    }
    return false;
}
void Calendar::print_events() const{
if(events.empty()){
    cout << "No events in the calendar." << endl ;
    return;
}
cout << "Events in the calendar : " << endl ;
for(const auto& event : events){
    cout << "- " << event.getName() << endl ;
}
}