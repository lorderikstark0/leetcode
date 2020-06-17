#include <bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int x){
   return x &&(!(x &(x-1)));
}

int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int p;
        cin >> p;
        if(isPowerofTwo(p))
        {
            cout <<"true"<<endl;
        }
        else{
            cout <<"false"<<endl;
        }
    }
    return 0;
}