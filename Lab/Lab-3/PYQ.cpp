// WAP to create a class landmeasure that reads ropani, aana, paisa & dam as data members. Write a function to pass two objects of type land measure & return thier sum.(16 ana = 1ropani, 4 paisa = 1 ana, 4 dam = 1paisa)

#include<iostream>
using namespace std;

class Landmeasure{

public:
    int ropani;
    int aana;
    int paisa;
    int dam;

Landmeasure(int r = 0, int a = 0, int p = 0, int d = 0){
    ropani = r;
    aana = a;
    paisa = p;
    dam = d;

}

};

Landmeasure sum( Landmeasure l1, Landmeasure l2){
    Landmeasure l_sum;
    int total;

    total = (l1.dam + l2.dam) + (l1.paisa + l2.paisa)*4 + (l1.aana + l2.aana)*16 + (l1.ropani + l2.ropani)*256;
    l_sum.ropani = total/256;
    total %= 256;
    l_sum.aana = total/16;
    total %= 16;
    l_sum.paisa = total/4;
    total %= 4;
    l_sum.dam = total;

    return l_sum;
}

int main(){
    Landmeasure l1(2, 10, 4, 2), l2(2,8,2, 4);

    cout<< "Sum of Land Measure is:"<<endl
        <<"Ropani ="<<sum(l1, l2).ropani<<endl
        <<"Aana ="<<sum(l1, l2).aana<<endl
        <<"Paisa ="<<sum(l1, l2).paisa<<endl
        <<"Dam ="<<sum(l1, l2).dam<<endl;



    return 0;
}