#include "gps.hpp"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<Gps> Locations;
    while (true)
    {
        try
        {
            double lati;
            double longi;
            cout << "Enter latitude(-90 to 90) or type 666 to exit: ";
            cin >> lati;
            if (lati == 666)
            {
                break;
            }
            cout << "Enter longitude(-180 to 180): ";
            cin >> longi;
            Locations.emplace_back(lati, longi);
        }
        catch (const invalid_argument &e)
        {
            cout << e.what() << endl;
            cout << "Please try again." << endl;
        }
    }

    return 0;
}