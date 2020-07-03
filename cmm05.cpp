#include <iostream>
#include<iomanip>
using namespace std;


int main()
{
    double x;
    double area;
    cin >> x;
    area=x*x;
    area=area*10;
    //area=round(area);
    area=area+0.5;
    area=(int)area;
    area=(double)area;
    area=area/10;
    cout << fixed <<  setprecision(1)<<area <<endl;
    return 0;
}
