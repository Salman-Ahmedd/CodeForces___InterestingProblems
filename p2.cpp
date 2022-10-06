///Way Too Long Words
///CodeForces
//Salman-Ahmedd

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while(n--)
    {
        int i;

        string s;

        cin >> s;

        int len;
        len = s.size();

        for (i = 0; i < len; i++)
        {
            if(len > 10)
            {
                cout << s[i] << (len - 2) << s[len - 1];
                cout << endl;
                break;
            }

            else
            {
                cout << s;
                cout << endl;
                break;
            }
        }
    }


    return 0;
}

