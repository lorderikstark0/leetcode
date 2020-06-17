#include <bits/stdc++.h>
using namespace std;
#define pb push_back 

/*
this also giving tle --> use a better algorithm now 
*/

vector<int> divisors(int n){
	vector<int> arr;
	for(int i=1;i<n;i++){
		if(n%i==0){
			arr.pb(i);
		}
	}
	return arr;
}


bool checkPerfectNumber(int num){
	if(num<0){
		return false;
	}
	else{
		vector<int> ans= divisors(num);
		int sum1 =num;
		int sum2=0;
		for(size_t i=0;i<ans.size();i++){
			sum2+=ans[i];
		}
		if(sum1==sum2){
			return true;
		}
		else{
			return false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cout <<"Enter number to check";
		cin >> n ;
		if(checkPerfectNumber(n)){
			cout <<"True"<<"\n";
		}
		else{
			cout <<"False"<<"\n";
		}
	}
	return 0;
}