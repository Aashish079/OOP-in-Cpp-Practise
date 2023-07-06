// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.

#include <iostream>
using namespace std;

class Celsius
{
    float temperature;    
public:
    Celsius(float temp){
        temperature = temp;
    }
    float getCelsius(){
        return temperature;
    }

    float toFarenheit(){

        return 1.8*temperature + 32;
    }
};

class Fahrenheit
{
    float temperature;    
public:
    Fahrenheit(float temp){
        temperature = temp;
    }

    float getFahrenheit(){
        return temperature;
    }

    float toCelsius(){

        return 5.0/9*(temperature-32);
    }
};

int main(){
    Celsius celsius(32);
    Fahrenheit fahrenheit(-40);

    cout<<celsius.getCelsius()<<" Degree Celsius = " << celsius.toFarenheit()<<" Degree Fahrenheit" <<endl;
    cout<<fahrenheit.getFahrenheit()<<" Degree Fahrenheit = " << fahrenheit.toCelsius()<<" Degree Celsius" <<endl;

    
    return 0;
}
