// calculate Reynold number
// Re=rho*U*D/mu
#include<iostream>
#include<string>
#include<cmath>

using namespace std;
double Reynolds_calc(double rho, double U, double D, double mu);   //declare the Re function

int main()
{
    double rho,U,D,mu;
    cout << "We are now going to calculate the Reynold number:" << endl;

    cout << "Please input density in kg/m3" << endl;
    cin >> rho;

    cout << "Please input velocity in m/s" << endl;
    cin >> U;

    cout << "Please input characteristic length in m" << endl;
    cin >> D;

    cout << "Please input dynamic viscosity in SI units" << endl;
    cin >> mu;

    // calc Re
    cout << "Re = " << Reynolds_calc(rho,U,D,mu) << endl;
    return 0;
}

double Reynolds_calc(double rho, double U, double D, double mu)
{
    double Re=rho*U*D/mu;
    return Re;
}
