// Selection Sort

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"Before Swapping : "<<endl;
	for(auto it:arr){
		cout<<it<<" ";
	}
	cout<<endl;

	for(int i=0;i<n-1;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		swap(arr[i],arr[minIndex]);
	}

	cout<<"After Swapping using Selection Sort : "<<endl;

	for(auto it:arr){
		cout<<it<<" ";
	}
	cout<<endl;

}
