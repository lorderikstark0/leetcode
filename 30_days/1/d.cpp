#include <bits/stdc++.h>
using namespace std;

vector<int> move(vector<int>& nums)
{
    int n=nums.size();
    int next=0;
    for(int x: nums){
        if(x!=0)
        {
            nums[next]=x;
            next++;
        }
    }
    for(int i=next;i<n;i++)
    {
        nums[i]=0;
    }
    return nums;
}




int main()
{
    int n ;
    cin >>n ;
    vector<int> arr;
    while(n-- >0)
    {
        int p ;
        cin >> p;
        arr.push_back(p);
    }
}