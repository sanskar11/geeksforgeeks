#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, p;
    cin >> n;
    string s;
    cin >> s;
    int a[7] = {0};
    if (n < 11)
    {
        cout << "0";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'h')
            {
                a[0]++;
            }
            else if (s[i] == 'a')
            {
                a[1]++;
            }
            else if (s[i] == 'c')
            {
                a[2]++;
            }
            else if (s[i] == 'k')
            {
                a[3]++;
            }
            else if (s[i] == 'e')
            {
                a[4]++;
            }
            else if (s[i] == 'r')
            {
                a[5]++;
            }
            else if (s[i] == 't')
            {
                a[6]++;
            }
        }
        a[0] = a[0] / 2;
        a[1] = a[1] / 2;
        a[4] = a[4] / 2;
        a[5] = a[5] / 2;
        p = a[0];
        for (int i = 0; i < 7; i++)
        {
            if (p > a[i])
            {
                p = a[i];
            }
        }
        cout << p << endl;
    }
    return 0;
}
