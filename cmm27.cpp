#include <iostream>

using namespace std;

int main()
{
    int i,x,y;
    int t;
    int ans=0;
    cin>>x>>y;
    if((y-x)<0)
    {
        t=x;
        x=y;
        y=t;
    }
    for(i=x;i<=y;i++)
    {
        ans+=i;
    }
    cout<<ans<<endl;
    return 0;

}
