#include<iostream>
#include<conio.h>


using namespace std;

// it will swap 2 elements
void swap(int *a, int *b){
	int x = *a;
	*a = *b;
	*b = x;
}

// bubble sort
void bubble_sort(int arr[], int n){
	for(int i=0;i<n-1;++i){
		for(int j=0;j<n-1-i;++j){
			if(arr[j] > arr[j+1]){
				//swap element
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

// it will display all the elements from array
void display(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}




int main(){
	int arr[] = {8, 5, 7, 3, 2};
	int n = 5;
	bubble_sort(arr, n);
	display(arr,n);    
	return 0;
}
