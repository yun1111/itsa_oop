#include <iostream>

using namespace std;

int prime(int n)
{
    int i;
    if(n==1)return 0;
    else
    {
        for(i=2;i<n;i++)
        {
            if((n%i)==0)return 0;
        }
    }
    return 1;
}

int main()
{
   int n;
   int i,j;
   int flag=0;
   cin>>n;
   for(i=n-1;i>0;i--)
   {
       if(prime(i)==1)
       {
           cout<<i<<endl;
            break;
       }
   }

    return 0;
}
