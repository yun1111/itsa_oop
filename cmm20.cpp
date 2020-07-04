#include <iostream>

using namespace std;

int main()
{
    int input;
    int x[10];
    int i=0;
    cin>>input;

    while(input!=0)
    {

        x[i]=input%16;
        input=input/16;
        i++;

    }



    for(int j=(i-1);j>=0;j--)
    {
        if(x[j]==10)
        {
            cout<<"A";
        }
        else if(x[j]==11)
        {
            cout<<"B";
        }
         else if(x[j]==12)
        {
            cout<<"C";
        }
         else if(x[j]==13)
        {
            cout<<"D";
        }
         else if(x[j]==14)
        {
            cout<<"E";
        }
         else if(x[j]==15)
        {
            cout<<"F";
        }
        else
        {
            cout<<x[j];
        }
    }
    cout<<"\n";
    return 0;
}
