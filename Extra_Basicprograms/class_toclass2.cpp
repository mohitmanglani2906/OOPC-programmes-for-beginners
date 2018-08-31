// conversion from one class to another class using constructor
#include<iostream>
using namespace std;
class Y;
class Y{

    public:
        int y;
        Y(){}
        Y(int b){
            y=b;
        }
        void display(){
        cout << "\n Y= " << y;
        }
};
class X{
    public:
        int x;
        X(){}
        X(Y objy){

            x=objy.y;

        }
        void display(){
            cout << "\n X= " << x;
        }

};
int main(){
    X objx;
    Y objy;
    objy=Y(12);
    objx=objy;
    objx.display();
    objy.display();
    return 0;
}
