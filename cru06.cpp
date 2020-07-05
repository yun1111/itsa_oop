#include <iostream>
#include<math.h>

using namespace std;

int cal(int n)
{
    if(n==1||n==0)
    {
        return n+1;
    }
    else
    {
        int a,b;
        a=n-1;
        b=floor(n/2);
        return cal(a)+cal(b);
    }
}

int main()
{
    int in;
    int ans;
    cin >> in;
    ans=cal(in);
    cout << ans << endl;
    return 0;
}
