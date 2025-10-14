#include<iostream>
#include<algorithm>

// | Version | Syntax                          | Description                                   |
// | ------- | ------------------------------- | --------------------------------------------- |
// | 2 args  | `sort(begin, end);`             | Sorts ascending (default)                     |
// | 3 args  | `sort(begin, end, comparator);` | Sorts based on custom rule (e.g., descending) |



using namespace std ;

int main(){
    
    
    int arr[5]={25,46,87,41,14};
    int arr2[5];
    
    copy(arr , arr+5 , arr2);
  
    // sort(arr2,arr2+5); // ascending order sorting by default ascending order
    sort(arr2,arr2+5,greater<int>()); // descending order sorting
    
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }
    
    return 0;
}
