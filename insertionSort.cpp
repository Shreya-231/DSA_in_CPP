#include <iostream>


using namespace std;

int main(){

    int a[] = {4,7,46,-1,49,198,24,284,-4};
    int n = *(&a + 1) - a;
    for(int i = 1; i<n; i++){
        int cur = a[i];
        int j = i-1;
        for(; j>=0 && a[j] > cur; j--){
                a[j+1] = a[j];
            }
            a[j+1] = cur;
    }

    for(int k : a){
        cout<<k<<" ";
    }

    return 0;
}