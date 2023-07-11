#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    long long int n, val, sum = 0, sumOfNnumber = 0,answer = 0;
    cin>>n;

    
    for(int i=0; i<n-1; i++) {
        cin>>val;
        sum = sum + val;
    }

    sumOfNnumber = (n * (n+1))/2;

    answer = sumOfNnumber - sum;
    cout<<answer<<endl;
   
    
    return 0;
}
