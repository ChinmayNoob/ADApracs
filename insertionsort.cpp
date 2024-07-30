// Insertion Sort

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

    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
        	swap(arr[j],arr[j-1]);
            j--;
        }
    }
	cout<<"After Swapping using Insertion Sort : "<<endl;

	for(auto it:arr){
		cout<<it<<" ";
	}
	cout<<endl;

}
