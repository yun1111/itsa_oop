#include <iostream>

using namespace std;

int main()
{
    int num_shift;
    cin >> num_shift;
    int ans=1;
    if(num_shift==0)
    {
        ans=1;
        cout << ans<<endl;
    }
    else if(num_shift>31)
    {
        cout << "Value of more than 31"<<endl;
    }
    else
    {
        for(int i=0;i<num_shift;i++)
        {
            ans=ans<<1;
            //cout <<"ans "<<ans<<endl;
        }
        cout << ans<<endl;
    }

    return 0;
}
