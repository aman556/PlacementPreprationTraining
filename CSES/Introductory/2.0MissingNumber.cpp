#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n-1];
    bool found=false;
    
    for(int i=0; i<n-1; i++) {
        cin>>arr[i];
    }

    sort(arr, arr+(n-1));
    for(int i=0; i<n-1; i++) {
        if(i+1 != arr[i]){
            cout<<i+1;
            found = true;
            break;
        }
    }
    if(!found) {
        cout<<n;
    }
    
    return 0;
}
