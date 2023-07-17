#include<iostream>
#include<string>
using namespace std;

class Roman{
private:
    string roman;
public:
    Roman(string s):roman(s){};

    int to_integer(){
    int val=0;
    
    for(int i=0 ; i<=roman.length(); i++){
        if(roman[i]=='X'){
            val += 10;
        }
        else if(roman[i]=='V'){
            val += 5;
        }
        else if(roman[i]=='I'){
            val += 1;
        }
    }
        

    return val;
    }

};

int main(){
    Roman r1("XXXXIX");
    int result;
    result = r1.to_integer();

    return 0;
}