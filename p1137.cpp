#include <bits/stdc++.h>
using namespace std;
//solved 
int tribonacci(int n)
{
    if(n<=1)
    return n;
    
    int previous0=0;
    int previous1=1;
    int previous2=1;

    for(int i=1;i<n-1;++i)
    {
        int temp_previous = previous0;
        previous0=previous1;
        previous1=previous2;
        previous2=temp_previous+previous1+previous0;
    }
    return previous2;
}

int main()
{
    int n ;
    cin >> n;
    cout << tribonacci(n)<<endl;
    return 0;
}