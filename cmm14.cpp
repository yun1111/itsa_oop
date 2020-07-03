#include <iostream>

using namespace std;

#define DAY 24
#define HOUR 60
#define MIN 60
int main()
{
    int time;
    cin >> time;
    int d,h,m,s;
    d = time/(DAY*HOUR*MIN);
    time = time - d* (DAY*HOUR*MIN);
    h = time/(HOUR*MIN);
    time = time - h* (HOUR*MIN);
    m = time/(MIN);
    time = time - m* (MIN);
    s=time;
    cout <<d<<" days"<<endl;
    cout <<h<<" hours"<<endl;
    cout <<m<<" minutes"<<endl;
    cout <<s<<" seconds"<<endl;
    return 0;
}
