///CodeForces
//Salman-Ahmedd

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int i, n;
        cin >> n;

        string s;
        cin >> s;

        int cntT == 0, cnti == 0, cntm = 0, cntu = 0, cntr = 0;

        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == 'T')cntT++;
            else if(s[i] == 'i')cnti++;
            else if(s[i] == 'm')cntm++;
            else if(s[i] == 'u')cntu++;
            else if(s[i] == 'r')cntr++;
        }
        if(s.size() == 5 && cntT == 1 && cnti == 1 && cntm == 1 && cntu == 1 && cntr == 1)
        {
            cout << "YES";
            cout << endl;
        }
        else
        {
            cout << "NO";
            cout << endl;
        }
    }


    return 0;
}
