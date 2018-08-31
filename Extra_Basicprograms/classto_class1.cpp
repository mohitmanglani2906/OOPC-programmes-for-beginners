#include<iostream>
#include<conio.h>
using namespace std;
class X;
class X {
public:
    int x;
    void display(){
        cout << "\n X= " << x;
    }
};
class Y{
        int y;
    public:
        Y(){}
        Y(int a){
            y=a;
        }
        operator X(){ // conversion takes place in source class that's why operator function is used in class y
            X temp;
            temp.x=y;
            return temp;
        }
        void display(){
                cout << "\n Y= " << y;
        }
};
int main(){

        Y objy(12); // constructor calling
        X objx;
        objx=objy; // object Y is converted into object x
        objx.display();
        objy.display();
        return 0;
}
