#include <iostream>
#include<string>
using namespace std;

int main(){
    float x,y;
    string city="Dharan";
    cout<<"Enter dividend: ";
    cin>>x;
    cout<<"Enter divisor: ";
    cin>>y;

    try{
        if(y==0){
            throw y;
        }
        else{
            cout<<"Result: "<<x/y<<endl;
        }

        for(int i=0; i<=20; i++){
            if(i>city.length()){
                throw city;
            }
            else{
                cout<<city[i]<<endl;
            }
        }
    }
    catch(...){
        cout<<"Exception caught"<<endl;
    }

}
