#include <iostream>
using namespace std;

int main(){
    int A, B;
    int temp;
    
    cout<<"A:";
    cin>>A;
    cout<<"B:";
    cin>>B;
    
    temp = A;
    A = B;
    B = temp;
    
    cout<<"value of A is:"<<A<<endl;
    cout<<"value of B is:"<<B<<endl;
}
