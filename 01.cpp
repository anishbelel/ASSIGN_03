# include<iostream>
using namespace std;

void search(int *arr, int num, int size, int i){
    if(arr[i]==num){
        cout<<" "<<i;
    }
    if(i==(size-1)) return;
    search(arr,num,size,i+1);
    return;
}
    
int main(){
     
     int arr[]={2,3,2,3,5,2,2,6};

     search(arr,2,8,0);
     
return 0;
}