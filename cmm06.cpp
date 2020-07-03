#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int mile;
    double kmeter;
    cin >> mile;
    kmeter=mile*1.6;
    cout << fixed <<  setprecision(1)<<kmeter <<endl;

    return 0;
}
