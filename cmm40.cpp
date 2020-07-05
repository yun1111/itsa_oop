#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=1;
    cin>>n;
    cout<<"1";
    for(int i=2;i<=n;i++)
    {
        sum=sum+i;
        cout<<" + "<<i;
    }
    cout<<" = "<<sum<<endl;
    return 0;
}
