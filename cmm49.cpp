#include <iostream>

using namespace std;

int main()
{
    int time;
    int x;
    int fin=0;
    int ans=1;
    cin>>time;
    long long int eleven=1;
    for(int i=0;i<time;i++)
    {
        cin>>x;
        while(fin==0)
        {
            if(eleven%x==0)
            {
                cout<<ans<<endl;
                fin=1;
            }
            else
            {
                eleven=eleven%x;//[(ax+y)*10+1]%a  ==  [(ax*10)+10y+1]%a ==(10y+1)%a
                eleven=eleven*10+1;
                ans++;
            }
        }
        fin=0;
        eleven=1;
        ans=1;
    }
    return 0;
}
