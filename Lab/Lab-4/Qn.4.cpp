// Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
#include <iostream>
using namespace std;

class Veichle{
    private:
       int num_vehicle;
       int hour;
       int rate;
    
    public:
        Veichle(int n, int h, int r): num_vehicle(n), hour(h), rate(r){}

        Veichle(Veichle& v){
            num_vehicle = v.num_vehicle;
            hour = v.hour;
            rate = v.rate;
        }

        void showTotalCharge(){
            if(num_vehicle>10){
                cout<< "Total Charge: "<<0.9*hour*rate<<endl; 
            }
            else{
                cout<< "Total Charge: "<<hour*rate<<endl; 
            }
        }
};

int main(){
    Veichle v1(14, 8, 20);

    v1.showTotalCharge();

    Veichle v2(v1);

    v2.showTotalCharge();
    return 0;
}