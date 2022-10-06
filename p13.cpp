///Word
///CodeForces
//Salman-Ahmedd

#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int len = s.size();
    int i;
    int upper = 0;
    int lower = 0;



    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
    }

    if(upper == lower)
    {
        for(i = 0; i < s.size(); i++)
        {
            s[i] = towlower(s[i]);
            cout << s[i];
        }
    }
    else if(upper > lower)
    {
        for(i = 0; i < s.size(); i++)
        {
            s[i] = towupper(s[i]);
            cout << s[i];
        }
    }
    else
    {
        for(i = 0; i < s.size(); i++)
        {
            s[i] = towlower(s[i]);
            cout << s[i];
        }
    }

    return 0;
}


