#include <bits/stdc++.h>
using namespace std;


int squareroot(int n)
{
   double ans = pow(n,0.5);
   return trunc(ans);
}

//p50  code peice also added here 
double myPow(double x ,int p)
{
    double ans =pow(x,p);
    return ans ;
}

int main()
{
    int n ;
    cin >> n;
    cout << squareroot(n)<<endl;
    double a;int b;
    cin >> a >> b;
    cout << myPow(a,b)<< setprecision(5)<<endl;
    return 0;
}