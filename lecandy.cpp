#include <iostream>
using namespace std;
int main()
{
    int Ts, T, N, C, k = 1;
    int A[100];
    int sum[100];
    int result[100];
    int t;

    cin >> T;
    if (T < 1 || T > 1000)
    {
        exit(0);
    }
    Ts = T;
    while (T != 0)
    {
        sum[T] = 0;
        cin >> N >> C;
        if (N < 1 || N > 100 || C < 1 || C > 1000000000)
        {
            exit(0);
        }
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            if (A[i] < 1 || A[i] > 10000)
            {
                exit(0);
            }
        }
        t = C;
        for (int i = 0; i < N; i++)
        {
            t = t - A[i];
            if (t < 0)
            {
                cout << "No";
                break;
            }
        }
        if (t > 0)
        {
            cout << "Yes";
        }

        T = T - 1;
    }
}
