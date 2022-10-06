///Chat room
///CodeForces
//Salman-Ahmedd

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    string s1 = "hello";

    int j = 0, k = 0;

    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == s1[j])
        {
            k++;
            j++;
            if(k == 5)
            {
                break;
            }
        }
    }

    k == 5 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}

