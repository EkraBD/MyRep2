#include<iostream>
using namespace std;

void bubble_sort(int *data, int size){
    int i, temp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(data[i]>data[j]){
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
}

int main(){
    int arr[]={7,9, 5 ,5, 4,6,1,2,3,7,8,5};
    bubble_sort(arr, 12);
    for(int i=0;i<12;i++)
        printf("%d\t",arr[i]);
}
