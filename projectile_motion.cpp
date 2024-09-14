#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout << "******************************\n";
    cout << "***** Projectile Motion\n";
    cout << "******************************\n";

    const double g = 9.80665;
    double v;
    double starting_angle;
    const double pi =

    cout << "Enter in the initial velocity(in meters/sec): ";
    cin >> v;
    cout << v << endl;

    cout << "Enter in the starting angle(in degrees): ";
    cin >> starting_angle;
    cout << starting_angle << endl;

    // Convert angle to radians for trigonometric functions
    double starting_angle_rad = starting_angle * pi / 180.0;
    double t_h = (v * sin(starting_angle_rad)) / g;
    double t_d = (2 * v * sin(starting_angle_rad)) / g;
    double h = (pow(v, 2) * pow(sin(starting_angle_rad), 2)) / (2 * g);
    double d = (v * t_d * cos(starting_angle_rad));
    double d_horizontal = (pow(v, 2) * sin(2 * starting_angle_rad)) / g;

    cout << fixed << setprecision(3);

    cout << "\nTime to max height:      " << setw(10) << t_h << " seconds" << endl;
    cout << "Time to max distance:    " << setw(10) << t_d << " seconds" << endl;
    cout << "Maximum height:          " << setw(10) << h << " meters" << endl;
    cout << "Maximum distance:        " << setw(10) << d << " meters" << endl;
    cout << "Maximum range:           " << setw(10) << d_horizontal << " meters" << endl;

    return 0;
}
