#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
int main()
{
    cin >> n;

    for( int i = 1; i <= n; i++ )
        cin >> a[i];

    int k = 0;

    for( int i = 2; i <= n - 1; i++ )
        {
            if( a[i] == 0 && a[i - 1] == a[i + 1] && a[i - 1] == 1 )
                {
                    k++;
                    a[i + 1] = 0;
                }
        }
    cout << k;
    return 0;
}
