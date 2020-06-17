#include <bits/stdc++.h>
using namespace std;

int result(vector<int>& nums)
{
    int x=0;
    for(int a: nums){
        x^=a;
    }
    return x;
}
int main()
{
    int t;
    cin >> t;
    vector<int> nums;
    while(t-- >0)
    {
        int i;
        cin >> i;
        nums.push_back(i);
    }
    cout << result(nums)<<endl;
    return 0;
}