#include "iostream"
using namespace std;
bool search(int arr[][4],int target)
{
    int row= 3;
    int col=4;
    int start=0;
    int end= row*col;
    int mid= start +(end - start)/2;
    while(start<end)
    {
        int element = arr[mid/col][mid%col];
        if(target ==  element)
        {
            return true;
        }
        if(target>element)
        {
            start=mid+1;
        }
        else
        {
            end= mid-1;
        }
        mid= start +(end - start)/2;


    }
    return false;
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   // search(arr,10);
    if(search(arr,10))
    {
        cout<<"Yes, it is present";
    }
    else
    {
        cout<<"not present";
    }


}




















//
// Created by 91919 on 20-07-2023.
//
