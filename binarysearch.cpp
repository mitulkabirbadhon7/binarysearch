#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start )/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

         mid = start + (end - start )/2;
    }

    return -1;
}

int main(){

    int even[6] = {20,30,45,56,67,100};
    int odd[5]={1,2,3,4,5};

    int evenindex = BinarySearch(even,6,100);
    cout<<"the index of 100 is "<< evenindex << endl;
    int oddindex = BinarySearch(odd,5,3);
     cout<<"the index of 6 is "<< oddindex << endl;

    return 0;
}