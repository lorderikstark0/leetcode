
#include <bits/stdc++.h>
using namespace std;


int maxScore(string s)
{
    //using the std::accumulate func
    //then iterate right to left to count the numbers of  1 in right partition and 
    //0s in the left partition 
    int sum =accumulate(begin(s),end(s),0,
    [](auto &a ,auto &b)
    {
        return a+(b=='1'?1:0);
    }
    );
    if(sum==0)return 1;
    if(sum==s.size())return sum-1;
    int res=0,right=0;
    for(int i=s.size()-1;i>0;--i)
    {
        right+=(s[i]=='1'?1:0);
        int score=(i-sum+right)+right;
        res=max(res,score);
    }
    return res;

}

int main()
{
    int t;
    cin >> t;
    
    while(t-->0)
    {
        string p;
        cin >> p;
        cout <<maxScore(p);
    }
return 0;
}
