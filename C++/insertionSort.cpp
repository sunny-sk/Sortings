#include<conio.h>
#include<iostream>

using namespace std;


  void insertionSort(int arr[], int n){
  	for(int i=1;i<n;++i){
  		int j = i-1;
  		int x = arr[i];
  		while(j>-1 && arr[j]> x){
  			arr[j+1] = arr[j];
  			j--;
		}
		arr[j+1] = x;
	  }
  }

  void display(int arr[], int n){
   	   for(int i=0;i<n;++i){
    		cout<<arr[i]<<" ";
    	}
	    cout<<endl;
  }

int main(){
	int arr[] = {8,7,5,3,2};
	int n=5;
	
	//before sort
	cout<<"befor? sort"<<endl;
	display(arr,5);
	
	insertionSort(arr, n);
	
	// after sort
		cout<<"after sort"<<endl;
	display(arr, n);
 }
