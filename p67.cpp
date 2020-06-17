#include <bits/stdc++.h>
#include <string.h>
using namespace std;

string addBinary(string s1,string s2)
{
    int l1 =(unsigned)s1.length();
    char arr_1[l1+1];
    for(int i=0;i<l1;i++)
    {
        strcpy(arr_1,s1.c_str());
    }
    int l2 =(unsigned)s2.length();
    char arr_2[l2+1];
    for(int i=0;i<l2;i++)
    {
        strcpy(arr_2,s2.c_str());
    }
    int temp1=0;int temp2=0;
    //converting to int value 
    for(int i=0;i<l1;i++)
    {
        int p =(int)arr_1[i];
        temp1 = temp1+p*2;
    }
    for(int i=0;i<l2;i++)
    {
        int p =(int)arr_2[i];
        temp2 = temp2+p*2;
    }
    int ans =temp1+temp2;
    vector<char> arr3;
    int temp3=0;
    while(ans!=0)
    {
        int r = ans %2;
        temp3=temp3+r;
        r=r/10;
        arr3.push_back(temp3);
    }
 string p (arr3.begin(),arr3.end());
 return p;   
}

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << addBinary(s1,s2)<<endl;
    return 0;
}