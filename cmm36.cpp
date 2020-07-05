#include <iostream>

using namespace std;

int main()
{
    int month;
    cin>>month;
    if(month<=2||month==12)cout<<"Winter"<<endl;
    else if(month<=5)cout<<"Spring"<<endl;
    else if(month<=8)cout<<"Summer"<<endl;
    else if(month<=11)cout<<"Autumn"<<endl;
    return 0;
}
