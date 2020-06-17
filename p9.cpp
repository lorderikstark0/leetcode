#include <bits/stdc++.h>
using namespace std;


bool palindrome(int n)
{
    //divind the number and pushing them char by char and copy them into twp stacks and them compare them 
    if(n<0)
    {
        return false;
    }
    vector<int> arr1;
    while(n!=0)
    {
        int q=n%10;
        arr1.push_back(q);
        n=n/10;
    }
    vector<int> arr2=arr1;
    reverse(arr1.begin(),arr1.end());
    if(arr2==arr1)
    {
        return true;
    }
    return false;
}

int main()
{
    int n ;
    cin >> n;

    if(palindrome(n))
    {
        cout <<"true"<<endl;
    }
    else{
        cout <<"false"<<endl;
    }
    return 0;
}