// Linear Search Algorithm 

#include<bits/stdc++.h>
using namespace std;

int linerSearch(vector<int> &arr,int target,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}

int main(){
	int n,target;
	cin>>n>>target;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int ans=linerSearch(arr,target,n);

	cout<<"The position of"<<" "<<target<<" "<<"is"<<" "<<ans<<endl;

}