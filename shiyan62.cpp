#include <iostream>
using namespace std;
int main()
{
    int a; cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b, c; cin >> b >> c; int* k = new int[b];
        for (int j = 0; j < c; j++)
        {
            k[j] = 0;
        }
        for (int j = 0; j < c; j++)
        {
            int d, e; cin >> d >> e;
            k[e]++;
        }
        for (int j = 0; j < c-1; j++)
        {
            if (k[j] > k[j + 1])
            {
                int temp = k[j];
                k[j] = k[j + 1];
                k[j + 1] = temp;
            }
        }
        cout << k[c - 1] << endl;
    }
}
