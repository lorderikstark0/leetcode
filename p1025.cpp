#include <bits/stdc++.h>
using namespace std;

bool divisorGame(int n)
{   bool status=false;
    for(float x=0;x<n;x++)
    {
        while(n%x==0)
        {
            n=n-x;
            if(n==0)
            {
                status=true;
                break;
            }
        }
    }
    return status;
}

int main()
{
    int n ;
    cin >> n;
    cout << divisorGame(n)<<endl;
    return 0;
}