// calculate the length of a vector
// 
#include<iostream>
#include<string>
#include<cmath>

using namespace std;
double vector_length(double x, double y, double z);

int main()
{
    double x,y,z;
    cout << "We are now going to calculate the length of a vector:" << endl;

    cout << "Please input x" << endl;
    cin >> x;

    cout << "Please input y" << endl;
    cin >> y;

    cout << "Please input z" << endl;
    cin >> z;

    // calc length
    cout << "l = " << vector_length(x,y,z) << endl;
    return 0;
}

double vector_length(double x, double y, double z)
{
    double l=sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
    return l;
}
