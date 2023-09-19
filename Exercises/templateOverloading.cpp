#include <iostream>
using namespace std;

template <class T>
void display(T data){
    cout<<data<<endl;
}

template <class T>
void display(T data1, int n){
    for(int i=0; i<n; i++){
        // cout<<typeid(T).name()<<endl;
        cout<<data1<<endl;
    }
}

int main(){
    display(10);
    display(10.5);
    display("Aashish");
    display("Aashish", 5);
    return 0;}