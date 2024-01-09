#include<iostream>
using namespace std;

void count_sort(int *data, int size, int MAX){
    int count[MAX+1];
    int d[size];
    int i;
    //Initialization
    for(i=0;i<=MAX;i++)
        count[i]=0;

    //count the number
    for(i=0;i<size;i++)
        count[data[i]]++;

    //accumulating the number
    for(i=1;i<=MAX;i++)
        count[i]=count[i]+count[i-1];

    //sort in a new array, d
    for(i=size-1;i>=0;i--){
        d[count[data[i]]-1]=data[i];
        count[data[i]]--;
    }

    //copy d-value to data
    for(i=0;i<size;i++){
        data[i]=d[i];
    }

}

int main(){
    int arr[]={7,9, 5 ,5, 4,6,1,2,3,7,8,5};
    count_sort(arr, 12, 9);

    for(int i=0;i<12;i++)
        cout<<arr[i]<<"\t";
}
