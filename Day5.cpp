#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int n, int arr[]) {
        int lead=arr[n-1];
        vector<int>leaders;
        for(int i=0;i<n;i++){
              bool islead=true;
            for(int j=i;j<n;j++){
                if(arr[j]>arr[i]){
                    islead=false;
                    break;
                }
            }
            if(islead==true){
                lead=arr[i];
                leaders.push_back(lead);
            }
        }
        return leaders;
    }
    
int main() {
    int arr[]={16,17,4,3,5,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int> result= leaders(n,arr);
    cout<<"Leaders :";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;   
}