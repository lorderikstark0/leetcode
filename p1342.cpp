#include <bits/stdc++.h>
using namespace std;
//solved 
int numberofSteps(int n)
{
    int count=0;
   while(n!=0){
    if(n%2==0)
    {
        n/=2;
        count++;
    }
    else {
        n=n-1;
        count++;
    }
   }
    return count;
}


int main()
{
    int n ;
    cin >> n;
    cout << numberofSteps(n)<<endl;
    return 0;
}