#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double C,F;
    cin >>C;
    F=C*9/5+32;
    cout <<fixed<<setprecision(1)<< F<<endl;
    return 0;
}
