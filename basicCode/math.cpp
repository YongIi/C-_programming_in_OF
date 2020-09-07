// math in c++
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    double m,v;
    cout << "now we're going to calculate KE=1/2*m*v^2" << endl;
    cout << "please state a value for mass (kg): ";
    cin >> m;
    cout << "please state a value for velocity (m/s): ";
    cin >> v;
    cout << "KE=" << 1.0/2.0*m*pow(v,2) << endl;
    return 0;
}
