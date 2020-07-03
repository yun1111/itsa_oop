#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int dis;
    cin >> x >> y;
    dis=x*x+y*y;
    if(dis<=10000)cout<<"inside"<<endl;
    else cout<<"outside"<<endl;
    return 0;
}
