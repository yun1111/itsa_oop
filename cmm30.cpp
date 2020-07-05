#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int no=0;
    if(input==1)cout<<"NO"<<endl;
    else if(input==2)cout<<"YES"<<endl;
    else
    {
        for(int i=2;i<input;i++)
        {
            if(input%i==0)
            {
                no=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(no==0)
            cout<<"YES"<<endl;
    }
    return 0;
}
