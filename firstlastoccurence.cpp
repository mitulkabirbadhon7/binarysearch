#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){

    int s= 0, e = n-1, ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e){
        if(arr[mid]==key){
            ans = mid;
            e = mid -1;
        }
        else if (arr[mid]<key){
            s = mid + 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        mid = s +(e - s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key){


    int s= 0, e = n-1, ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e){
        if(arr[mid]==key){
            ans = mid;
            s = mid +1;
        }
        else if (arr[mid]<key){
            s = mid + 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        mid = s +(e - s)/2;
    }
    return ans;
}

int main(){
    int arr[8]={1,2,3,3,3,4,6,7};

    cout <<"first occurrence of 3 is at index " <<firstOcc(arr,8,3) << endl;

        cout <<"last occurrence of 3 is at index " <<lastOcc(arr,8,3) << endl;

}