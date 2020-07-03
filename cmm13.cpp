#include <iostream>

using namespace std;

int main()
{
    int start_h,start_m;
    int fin_h,fin_m;

    int minu;
    int money;
    cin >> start_h >> start_m >> fin_h >>fin_m;

    //how long?
    minu=(fin_h*60+fin_m)-(start_h*60+start_m);
    if(minu>240)
    {
        money=280+(minu-240)/30*60;
    }
    else if(minu>120)
    {
        money=120+(minu-120)/30*40;
    }
    else if(minu<30)
    {
        money=0;
    }
    else
    {
        money=minu/30*30;
    }
    cout << money <<endl;
    return 0;
}
