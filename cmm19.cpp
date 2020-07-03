#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int minu;
    double cost;
    cin >> minu;
    if(minu<=800)
    {
        cost=minu*0.9;
    }
    else if(minu<1500)
    {
        cost=minu*0.9*0.9;
    }
    else
    {
        cost=minu*0.9*0.79;
    }
    cout<<fixed<<setprecision(1)<<cost<<endl;
    return 0;
}
