#include <bits/stdc++.h>
using namespace std;

class Solution{
    int f(int n)
{
    int sum=0;
    while(n){
        int digit=n%10;
        n/=10;sum+=digit*digit;
    }
    return true;

    }
    public:
        bool isUpper(int n){
            while(n!=1)
            {
                n=f(n);
            }
            return true;
        }
};
