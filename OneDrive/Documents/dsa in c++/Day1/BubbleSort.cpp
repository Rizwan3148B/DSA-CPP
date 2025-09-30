#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main(){
     vector<int> arr;
     cout<<"Enter the array elements: "<<endl;
     for(int i = 0; i < 6; i++){
        int x;
        cin >> x;
        arr.push_back(x);
     }
    BubbleSort(arr);
    cout<<"The sorted array is: "<<endl;
     for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
     }
     //Done
     cout << endl;
     return 0;
}