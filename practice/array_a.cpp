#include <bits/stdc++.h>
using namespace std;

int getmaxlength(bool arr[] ,int n)
{
    int count=0;
    int result=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            count=0;
        }
        else {
            count++;
            result=max(result,count);
        }
    }
    return result;
}


int main()
{

}