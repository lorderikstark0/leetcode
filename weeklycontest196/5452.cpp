#include <bits/stdc++.h>
using namespace std;

bool checkisap(vector<int>& arr){
	if(arr.size()==1){
		return true;
	}
	sort(arr.begin(),arr.end());

	int d = arr[1]-arr[0];
	for(int i=2;i<arr.size();i++){
		if(arr[i] -arr[i-1]!=d){
			return false;
		}

	}
	return true;
}

int main(){
	vector<int> arr;
	int size;
	cin >> size;
	while(size--){
		int a ;
		cin >> a;
		arr.push_back(a);
	}

	(checkisap(arr))?(cout <<"Yes"<<"\n"):(cout <<"No"<<"\n");
	return 0;
	
	
	return 0;
}