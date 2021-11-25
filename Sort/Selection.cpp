#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

void process(int n, int a[])
{
    int dem = 1;

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
           swap(a[min], a[i]); 
        }
        
        cout << "Buoc " << dem << ':' << ' ';
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        dem++;
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    process(n, a);

    return 0;
}