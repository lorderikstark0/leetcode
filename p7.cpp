#include <bits/stdc++.h>
#include <cmath>
using namespace std;

//answer is correct but there is runtime error --improvise 
int reverse(int val)
{
    int temp=val;//handels for the negative sign 
    val=abs(val);
    int sum=0;
    while(val>0)
    {
        int p=val%10;
        sum=sum*10+p;
        val=val/10;
    }
    if(temp>0)
    {
     return 1*sum;   
    }
    else {
        return -1*sum;
    }
}

vector<int> reverse_arr(vector<int>&arr)
{
    vector<int> answer;
    for(size_t i=0;i<arr.size();i++)
    {
        answer.push_back(reverse(arr[i]));
    }
    return answer;
}

int main()
{
    int t;
    cin >> t;
    vector<int> arr;
    while(t-- >0)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    vector<int> result=reverse_arr(arr);
    for(size_t i=0;i<arr.size();i++)
    {
        cout << result[i]<<endl;
    }
    return 0;
}