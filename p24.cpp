///Gravity Flip
///CodeForces
//Salman-Ahmedd

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i, n;
    cin >> n;

    int array[n];

    for(i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for(i = 0; i < n - 1; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            if(array[i] > array[j + 1])
            {
                int swap;

                swap = array[i];
                array[i] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
