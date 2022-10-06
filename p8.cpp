///Helpful Maths
///CodeForces
//Salman-Ahmedd

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

#define MAX 100

using namespace std;

int main()
{
    string S;

    cin >> S;

    vector<int>vec;

    int len1 = S.size();
    int i;

    for (i = 0; i < len1; i += 2)
    {
        vec.push_back(S[i]);
    }

    sort(vec.begin(), vec.end());

    int len2 = vec.size();
    int len3 = vec.size() - 1;

    for (i = 0; i < len2; i++)
    {
        if(i != len3)
        {
            cout << vec[i] - 48 << "+";
        }
        else
        {
            cout << vec[i] - 48;
        }
    }


    return 0;
}

