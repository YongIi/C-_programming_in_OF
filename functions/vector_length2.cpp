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
    double vector[3][1];
    cout << "We are now going to calculate the length of a vector:" << endl;

    cout << "Please input x" << endl;
    cin >> vector[0][0];

    cout << "Please input y" << endl;
    cin >> vector[1][0];

    cout << "Please input z" << endl;
    cin >> vector[2][0];

    // calc length
    cout << "l = " << vector_length(vector[0][0],vector[1][0],vector[2][0]) << endl;
    return 0;
}

double vector_length(double x, double y, double z)
{
    double l=sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
    return l;
}
