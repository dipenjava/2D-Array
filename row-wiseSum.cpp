#include "iostream"
using namespace std;
void printSum(int arr[][4], int row, int col)
{
    for( row=0;row<3;row++)
    {
        int sum=0;
        for( col=0;col<4;col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}
void colsum(int arr[][4], int row , int col)
{
    for(col=0;col<4;col++)
    {
        int sum=0;
        for(row=0;row<3;row++)
        {
            sum+=arr[row][col];

        }
        cout<<sum<<" ";
    }
}
int largestRowSum(int arr[][4], int row, int col)
{
    int maxi=INT_MIN;
    int index=-1;
    for(row=0;row<3;row++)
    {

        int sum=0;
        for(col=0;col<4;col++)
        {
            sum+=arr[row][col];

        }
        if(sum>maxi)
        {
            maxi=sum;
            index=row;
        }




    }
    cout<<"Maximum sum of rows is: "<<maxi<<endl;
    return index;
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout<<arr[row][col]<<"  ";

        }
        cout<<endl;

    }
    cout<<"printing Sum Row-Wise: ";
    printSum(arr,3,4);
    cout<<endl<<"printing Sum Column-Wise: ";
    colsum(arr,3,4);
    cout<<endl<<"Largest row sum is at index: ";
    cout<<largestRowSum(arr,3,4);

}













//
// Created by 91919 on 19-07-2023.
//
