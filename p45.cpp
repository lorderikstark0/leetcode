#include <bits/stdc++.h>
using namespace std;
/* wrong solution 
int jump(vector<int>& nums)
{
    int count=0;
    int jumps=nums.size();
    sort(nums.begin(),nums.end(),greater<int>());
    jumps =jumps-nums[0];
    if(jumps>0)
    {
        for(size_t i=1;i<nums.size();i++)
        {
            if (jumps-nums[i]==0)
            {
                count++;
            }
        }
    }
    return count+1;
}
*/
//o(n) solution --by Kruti_20
int jump(vector<int>& nums)
{
    int n = nums.size();
    int nextstep[n+1];
    int maxarr[n+1];
    for(int i=0;i<n;i++)
    {
        nextstep[i]=i+nums[i];
        maxarr[i]=max(nextstep[i],(i>0)? maxarr[i-1]:0);

    }
    int index=0;
    int count=0;
    while(index<n-1)
    {
        index=maxarr[index];
        count++;
    }
    return count;
}
 int main()
{
    int n ;
    cin >> n ;
    vector<int> arr;
    while(n-- >0)
    {
        int i;
        cin >> i;
        arr.push_back(i);
    }
    cout << jump(arr)<<endl;
    return 0;
}