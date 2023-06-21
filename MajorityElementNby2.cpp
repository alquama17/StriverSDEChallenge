#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int v=-1;
	unordered_map<int,int> ans;
	for(int i=0;i<n;i++){
		ans[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		if(ans[arr[i]]>n/2){
			v=arr[i];
		}
	}
	return v;
}