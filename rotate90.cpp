#include "iostream"
using namespace std;
void rotate(int arr[][3], int row, int col)
{
    //transpose
    int start=0;
    int end= row*col-1;

        for(int i=0;i<row;i++)
        {
            for(int j=i+1;j<col;j++)
            {
                swap(arr[i][j],arr[j][i]);
            }


        }
    //column reverse
    for(int i=0;i<row;i++)
    {

            swap(arr[i][0],arr[i][col-1]);



    }

}
void printArray(int arr[][3], int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;

    }


}
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9,};
    printArray(arr,3,3);
    rotate(arr,3,3);
    cout<<endl<<"After 90 degree rotate is: "<<endl;
    printArray(arr,3,3);




}









//
// Created by 91919 on 20-07-2023.
//
