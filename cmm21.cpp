#include <iostream>

using namespace std;

int main()
{
    int n,i;
    long long int ans=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    cout << ans<<endl;
    return 0;
}
