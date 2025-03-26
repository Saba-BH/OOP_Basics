#include "gps.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
Gps *Gps::lastLoation = nullptr;
Gps::Gps(double lat, double lon)
{
    if (lat > 90 || lat < -90 || lon > 180 || lon < -180)
    {
        throw invalid_argument("Error: Latitude or longitude is out of range.");
    }

    latitude = lat;
    longitude = lon;
    lastLoation = this;
}
Gps::~Gps()
{
    if (lastLoation == this)
    {

        cout << "Latitude: " << latitude << " Longitude: " << longitude << endl;
    }
}