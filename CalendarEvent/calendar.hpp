#ifndef CALENDAR_HPP
#define CALENDAR_HPP

#include <iostream>
#include "event.hpp"
#include <vector>
using namespace std;
class Calendar {
    private:
    vector<Event> events;
    bool conflict(const Event& event) const;

    public:
    void add_event(const Event& event);
    void refresh();
    void print_events() const ;

  

};
#endif