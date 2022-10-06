///Boy or Girl
///CodeForces
//Salman-Ahmedd

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int len = s.size();

    int i, A;
    int count = 1;

    sort(s.begin(), s.end());

    for(i = 1; i < len; i++)
    {
        count++;
    }

    for(i = 1; i < len; i++)
    {
        if(s[i] == s[i - 1])
        {
            count--;
        }
    }


    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
