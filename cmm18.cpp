#include <iostream>

using namespace std;

int main()
{
    int iinput;
    int output[8];
    int i;
    int flag=0;

    cin>>iinput;
    //negative?
    if(iinput<0)
    {
        flag=1;
        iinput=iinput*(-1);
    }
    //turn to binary
    for(i=0;i<8;i++)
    {
        output[i]=iinput%2;
        iinput=iinput/2;
    }
    //converse
    if(flag==1)
    {
        //reverse 1->0  0->1
        for(i=0;i<8;i++)
        {
            if(output[i]==1)
                output[i]=0;
            else output[i]=1;
        }
        //+1
        i=0;
        while(output[i]!=0)
        {
            output[i]=0;
            i++;
        }
        output[i]=1;

    }
    for(i=7;i>=0;i--)
    {
        cout<<output[i];
    }
    cout<<"\n";

    return 0;
}
