//  3.  Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named "num" and a function named "foo".
//         The "foo" function in "Square" namespace, should return the square of an integer passed as an argument while the "foo" function in
//         "Cube" namespace, should return the cube of an integer passed as an argument. In the main function, set the integer variables "num"
//         of both the namespaces with different values. Then, compute and print the cube of the integer variable "num" of the "Square" namespace
//         using the "foo" function of the "Cube" namespace and the square of the integer variable "num" of the "Cube" namespace using the
//         "foo" function of the "Square" namespace.

#include <iostream>


namespace Square {
       int num;
       int foo(int n){

              return n*n;
       }
}

namespace Cube {
       int num;
       int foo(int n){
              
              return n*n*n;
       }
}

int main(){

       std::cout<<"Enter number for Squaring"<<std::endl;
       std::cin>>Cube::num;

       std::cout<<"Enter number for Cubing"<<std::endl;
       std::cin>>Square::num;

       std::cout<< "Squared Num = "<< Square::foo(Cube::num)<<std::endl;
       std::cout<< "Cubed Num = "<< Cube::foo(Square::num)<<std::endl;

return 0;
}