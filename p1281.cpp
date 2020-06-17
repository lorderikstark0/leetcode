#include<bits/stdc++.h>
using namespace std;

int product(int n)
{
    int temp;
    int product=1;
    while(n!=0)
    {
        temp=n%10;
        product=product*temp;
        n=n/10;
    }
    return product;
}
int sumofdigs(int n)
{
    int temp;
    int sum=0;
    while(n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    return sum;
}

int main()
{
    int n ;
    cin >> n;
    int p =product(n);
    int q =sumofdigs(n);
    cout << p-q <<endl;
}