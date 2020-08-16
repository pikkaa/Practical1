#include<bits/stdc++.h>
using namespace std;

void leftrotatebyone(int arr[],int n){
	int i, temp=arr[0];
	for(i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[i]=temp;
}
void leftrotate(int arr[],int d,int n){
	for(int i=0;i<d;i++)
		leftrotatebyone(arr,n);
}
void printarray(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"enter the no of ratations"<<endl;
	int d;
	cin>>d;
	leftrotate(arr,d,n);
	printarray(arr,n);
	
	return 0;
}
