///Petya and Strings
///CodeForces
//Salman-Ahmedd

#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    string b;

    cin >> a;
    cin >> b;

    int i;

    for(i = 0; i < a.size(); i++)
    {
        a[i] = towlower(a[i]);
        b[i] = towlower(b[i]);
    }

    if(a == b)
    {
        cout << "0";
    }
    else
    {
        for(i = 0; i < a.size(); i++)
        {
            if (a < b)
            {
                cout << "-1";
                cout <<endl;
                break;
            }
            else
            {
                cout << "1";
                cout <<endl;
                break;
            }
        }
    }

    return 0;
}

