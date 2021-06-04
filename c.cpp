/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void sumOfProducts(int arr1[],int arr2[],int n){
    int arr[n];
    int j=n-1;
    int sum=0;
    for(int i=0;i<n;i++){
        arr[i]=(arr1[i]*arr2[j]);
        // cout<<arr1[i]<<" "<<arr2[n-1-i]<<" ";
        // cout<<arr[i]<<" ";
        j--;
    }
    cout<<endl;
    for(int k=0;k<n;k++){
        sum=sum+arr[k];
    }
    cout<<sum;
}
int main()
{
    int arr1[]={22,7,1-5,5,-2};
    int arr2[]={4,-1,21,12,10,-3};
    //  int arr1[]={1,2,3};
    // int arr2[]={1,2,3};
    sumOfProducts(arr1,arr2,6);

    return 0;
}
