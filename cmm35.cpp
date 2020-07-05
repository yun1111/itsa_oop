#include <iostream>

using namespace std;

int main()
{
    int year;
    int bis=0;//bissextile year=1,  common=0;
    cin>>year;
    if(year%400==0)
    {
        bis=1;
    }
    else if(year%100==0)
    {
        bis=0;
    }
    else if(year%4==0)
    {
        bis=1;
    }
    //output
    if(bis==1)
    {
        cout<<"Bissextile Year"<<endl;
    }
    else
    {
        cout<<"Common Year"<<endl;
    }
    return 0;
}
