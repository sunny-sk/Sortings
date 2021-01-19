#include<iostream>
#include<conio.h>

using namespace std;



void swap(int *a, int *b){
	int temp =  *a;
	*a = *b;
	*b = temp;
}



void selection_sort(int arr[], int n){
	for(int i=0;i<n-1;++i){
		int k = i;
		for(int j=i;j<n;j++){
			if(arr[j]<arr[k]){
				k = j;
			}
		}
		swap(arr[i], arr[k]);
	}
}

void display(int arr[], int n){
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int arr[] = {8,6,3,2,5,4};
	int n = 6;
	
	//before sort
	display(arr, n);
	
	//sort
	selection_sort(arr, n);
	
	//after display
	display(arr, n);
	
}
