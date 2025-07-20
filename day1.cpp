#include <iostream>
using namespace std;
int main()
{
    long long int t, a, b;
    cin >> t;
    while (t--)
    {
        long long int move = 0;
        cin >> a >> b;
        if (a % b == 0)
            cout << "0" << endl;
        else
        {
            while (a % b != 0)
            {
                a++;
                move++;
            }
            cout << move << endl;
        }
    }
}
