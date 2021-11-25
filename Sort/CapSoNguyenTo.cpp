#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

typedef long long ll;

bool a[1000000];

void speedup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void sangNT()
{
    a[0] = a[1] = false;
    for(ll i = 2; i < 1000000; i++) a[i] = true;
    for (ll i = 2; i <= sqrt(1000000); i++)
    {
        if (a[i] == true)
        {
            for (ll j = i * i; j < 1000000; j += i)
            {
                a[j] = false;
            }
        }
    }
}

void process()
{
    sangNT();
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        bool f = false;
        for (ll i = 2; i <= m; i++)
        {
            if (a[i] == true && a[m - i] == true)
            {
                f = true;
                cout << i << " " << m - i << endl;
                break;
            }
        }

        if (f == false)
            cout << -1 << endl;
    }
}

int main()
{
    speedup();
    process();

    return 0;
}
