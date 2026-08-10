#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (k >= 2)
            cout << "YES\n";
        else
        {
            vector<int> v1 = v;
            sort(v.begin(), v.end());
            if (v1 == v)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}