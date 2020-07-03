#include <iostream>

using namespace std;

int main()
{
    int value;
    int ten,five,one;
    cin >> value;
    ten=value/10;
    value=value-ten*10;
    five=value/5;
    value-=five*5;
    one=value/1;
    cout << "NT10="<<ten<<endl;
    cout << "NT5="<<five<<endl;
    cout << "NT1="<<one<<endl;
    return 0;
}
