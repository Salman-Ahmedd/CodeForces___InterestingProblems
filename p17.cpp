///I Wanna Be the Guy
///CodeForces
//Salman-Ahmedd

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i;
    int arr;
    int n;
    cin >> n;

    int array[n] = {0};

    int p;
    cin >> p;

    for(i = 0; i < p; i++)
    {
        cin >> arr;
        array[arr - 1]++;
    }

    int q;
    cin >> q;

    for(i = 0; i < q; i++)
    {
        cin >> arr;
        array[arr - 1]++;
    }

    sort(array, array + n);

    if(array[0] == 0)
    {
        cout << "Oh, my keyboard!";
    }
    else
    {
        cout << "I become the guy.";
    }

    return 0;
}
