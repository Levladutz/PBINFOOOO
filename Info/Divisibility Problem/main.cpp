#include <bits/stdc++.h>
#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
ifstream fin( "xxx.in" );
ofstream fout( "xxx.in" );
void fast()
{
    cin.tie( 0 );
    ios_base::sync_with_stdio( 0 );
}
int t;
int main()
{
    fast();
    cin >> t;

    while( t-- )
        {
            ll a, b;
            cin >> a >> b;

            if( a % b == 0 )
                cout << 0 << '\n';
            else
                cout << ( a / b + 1LL )*b - a << '\n';
        }

    return 0;
}
