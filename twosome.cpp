#include<iostream>
#include<vector>
using namespace std;
bool twosum (vector<int> &arr,int target )
{
int n = arr.size();
for(int i=0; i<n ; i++ )
{
 for(int j = i + 1; j < n; j++)
 {
    if(arr[i] + arr[j] == target){
        return true;
    }
 }
}
}
return false;
}
int main()
{
    vector<int> arr = {2,3,4,3,8};
    int target = 6;
    if(twosum(arr,target))
    
        cout << "true";
    else
      cout << "false";

    return 0;

}
