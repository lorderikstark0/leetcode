#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
 if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n ; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }
     return previous;
}



int main()
{
    int n ;
    cin >> n;
    cout << fibo(n)<<endl;
    return 0;
}