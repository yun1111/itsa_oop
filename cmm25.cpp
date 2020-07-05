#include <iostream>

using namespace std;

int main()
{
    int input;
    int sum=0;
    cin>>input;
    for(int i=0;i<=input;i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
