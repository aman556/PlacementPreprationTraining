#include <bits/stdc++.h>
using namespace std;

int main() {
    string repetation;
    cin>> repetation;
    int count=1, maxCount=1;
    
    for(int i=1; i<repetation.length();i++){
        if(repetation[i]==repetation[i-1]){
            count++;
        } else {
            maxCount = max(count, maxCount);
            count = 1;
        }
    }
    maxCount = max(count, maxCount);
    cout<<maxCount<<endl;
    return 0;
}
