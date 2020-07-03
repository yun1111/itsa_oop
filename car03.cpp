#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int a[8];
    for(int cnt_i=0;cnt_i<6;cnt_i++)
    {
        cin >> a[cnt_i];
    }

    for(int cnt_i=0;cnt_i<6;cnt_i++)
    {
        sum = sum + a[cnt_i]*a[cnt_i]*a[cnt_i];
    }
    cout << sum <<endl;
    return 0;
}
