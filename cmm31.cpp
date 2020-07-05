#include <iostream>

using namespace std;

int main()
{
    int in;
    int sum=0;
    cin>>in;
    for(int i=1;i<=in;i++)
    {
        if(i%12==0)
        {
            sum=sum;
        }
        else if(i%6==0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
