#include <iostream>
using namespace std;

int fibonacci(int n);

int main(){
    int n;
    int *p;
    cout << "n: ";
    cin >> n;
    
    p = new int[n];
    
    for(int i=0; i < n; i++){
        *p = fibonacci(i);
        cout<<*p<<'\t';
    }
    cout<<endl;
    
    delete[] p;
    return 0;
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
