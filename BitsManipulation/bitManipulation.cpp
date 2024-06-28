#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{

    fast_io;
    int a=5;
    int b=7;
    int res;
    // Utilizando el operador AND
    cout<<"UTILIZANDO EL OPERADOR AND\n";
    res=a&b;
    cout<<res<<"\n";
    cout<<"UTILIZANDO EL OPERADOR OR\n";
    res=a|b;
    cout<<res<<'\n';
    cout<<"ULIZANDO EL OPERADOR XOR\n";
    res=a^b;
    cout<<res<<'\n';
    cout<<"UTILIZANDO EL OPERADOR (~)\n";
    res=~a;
    cout<<res<<'\n';

    return 0;
}