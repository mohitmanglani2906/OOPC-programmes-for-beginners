#include<iostream>
using namespace std;
class unary{
        int x,y;
    public:
        void setdata(int a,int b){
                x=a;
                y=b;
        }
        void display(){
            cout << "x= " << x << endl << "y= " << y;
        }
        friend void operator -(unary &);
};
void operator -(unary &o){
        o.x=-o.x;
        o.y=-o.y;
        /*
                --o.x;
                --o.y; // decrement the value of data member
        */

}
int main(){

unary u;
u.setdata(3,4);
u.display();
-u; // unary minus operator function is called
cout << endl << "After unary minus operator ; ";
u.display();
return 0;

}
