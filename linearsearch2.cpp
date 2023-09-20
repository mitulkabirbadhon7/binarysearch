#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){

        if(key == arr[i]){
            return 1;
        }
    }
 
    return 0;
}

int main(){
    int arr[10] = {1,2,3,-5,7,8,10,90,70,6};

    int key;
    cout<<"Enter a value for search"<< endl;

    cin>>key;

    bool found = search (arr,10,key);

    if(found){
        cout<<"Key is present"<< endl;
    }
    else {
        cout<< "Key is absent" <<endl;
    }
}