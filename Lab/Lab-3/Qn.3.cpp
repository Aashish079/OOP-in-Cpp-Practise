// Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.

#include <iostream>
using namespace std;

class CarPark{
private:
    int carId;
    int chargePerHour;
    float parkedTime;

public:
    void setCar(int carId){
        this->carId = carId;
    }
    void setChargePerHour(int chargePerHour){
        this->chargePerHour = chargePerHour; 
    }
    void setParkedTime(int parkedTime){
        this->parkedTime = parkedTime;
    }
    int getChargePerHour(){
        return chargePerHour;
    }
    int getParkedTime(){
        return parkedTime;
    }

    void showChargePerHour(){
        cout<< "Charge Per hour:"<<"Rs."<< getChargePerHour()<<endl;
    }

    void showParkedTime(){
        cout<<"Parked time: "<< getParkedTime()<<" hours"<<endl;
    }

    void showTotalCharge(){
        cout<<"Total Charge: Rs. "<<getChargePerHour()*getParkedTime()<< endl;
    }
};

int main(){
    CarPark c1;

    c1.setCar(004);
    c1.setParkedTime(6);
    c1.setChargePerHour(100);

    c1.showParkedTime();
    c1.showChargePerHour();
    c1.showTotalCharge();

    return 0;
}