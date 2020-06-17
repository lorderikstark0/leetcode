#include <bits/stdc++.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int maxvalue(int *arr ,int n)
{
    int oddsum,evensum;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            evensum+=arr[i];
        }
        else{
            oddsum+=arr[i];
        }
    }
    if(evensum >oddsum)
    {
        return evensum;
    }
    return oddsum;
}

int main()
{
    int n;
    cin >> n;
    int *arr =(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int max =maxvalue(arr,n);
    cout << max << endl;
return 0;
}