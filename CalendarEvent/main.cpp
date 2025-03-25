#include <iostream>
#include <chrono>
#include <thread>
#include "calendar.hpp"

using namespace std;
int main(){
    Calendar calen;
    auto now = chrono::system_clock::now();

    Event event1("Appointment" , now + chrono::seconds(5) , now + chrono::seconds(20));
    calen.add_event(event1);

    Event event2("Birthday" , now + chrono::seconds(10) , now + chrono::seconds(30));
    calen.add_event(event2);

    Event event3("Game" , now + chrono::seconds(25) , now + chrono::seconds(40));
    calen.add_event(event3);

    cout << "* Events before refresh * " << endl ;
    calen.print_events();

    this_thread::sleep_for(chrono::seconds(20));

    calen.refresh();

    cout << "* Events after refresh * " << endl ;
    calen.print_events();
    return 0 ; 
}