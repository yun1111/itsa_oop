#include <iostream>

using namespace std;

int main()
{
    int n;
    int input;
    int a[3];
    int i,ans=0;
    cin>>n;
    input=n;
    //printf("n=%d\n",n);
    for(i=2;i>=0;i--)
    {
        a[i]=n%10;
        n=n/10;
    }
    /*for(i=0;i<;i--)
    {
        printf("a=%d\n",a[i]);
    }*/
    for(i=0;i<3;i++)
    {
        //printf("%d\n",ans);
        ans=ans+a[i]*a[i]*a[i];
    }
    //printf("ans=%d\n",ans);
    if(ans==input)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
