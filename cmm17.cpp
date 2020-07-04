#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int t;
    cin>>a>>b;
    while(b!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    cout << a<<endl;
    return 0;
}
