///String Task
///CodeForces
//Salman-Ahmedd

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int len = s.size();
    int i, j;

    for(i = 0; i < len; i++)
    {
        s[i] = tolower(s[i]);
    }

    for(i = 0; i < len; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            for(j = i; j < len; j++)
            {
                s[j] = s[j + 1];
            }
            i--;
            len--;
        }
    }

    for(i = 0; i < len; i++)
    {
        cout << "." << s[i];
    }

    return 0;
}
