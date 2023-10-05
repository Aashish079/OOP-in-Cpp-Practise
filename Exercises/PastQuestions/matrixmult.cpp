#include <iostream>
using namespace std;

class Matrix{
    private:
        int a[3][3];
    public:
        Matrix(){
            for(int i=0; i<3;i++){
                for(int j=0; j<3; j++){
                    a[i][j]=0;
                }
            }
        }
        void setMatrix(){
            cout<<"Enter a 3x3 Matrix:"<<endl;
            for(int i=0; i<3;i++){
                for(int j=0; j<3; j++){
                    cout<<"a["<<i<<"]"<<"["<<j<<"]";
                    cin>>a[i][j];
                }
            }

        }
        Matrix operator*(Matrix b){
            Matrix c;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    c.a[i][j]=0;
                    for(int k=0; k<3; k++){
                        c.a[i][j]+=a[i][k]*b.a[k][j];
                    }
                }
            }
            return c;
        }
        void showMatrix(){
            for(int i=0; i<3;i++){
                for(int j=0; j<3; j++){
                    cout<<a[i]<<"\t";
                }
                cout<<endl;
            }
        }
};

int main(){
    Matrix a, b, c;

    a.setMatrix();
    b.setMatrix();
    c = a*b;

    c.showMatrix();

}