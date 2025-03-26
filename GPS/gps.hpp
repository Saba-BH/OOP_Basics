#ifndef GPS_HPP
#define GPS_HPP
using namespace std;
class Gps
{
private:
    double latitude;
    double longitude;
    static Gps *lastLoation;

public:
    Gps(double, double);

    ~Gps();
};
#endif