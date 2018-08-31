/*
overload a binary plus operator
*/
#include<iostream>
using namespace std;
class binary{
        int x,y;
    public:
        void get_x(int a){
                x=a;
        }
        void get_y(int b){
            y=b;
        }
        void showdata1(){
                cout << "\n X=" << x ;
        }
        void showdata2(){
                cout << "\n Y= " << y;
        }
        binary operator +(binary);

};
binary binary::operator +(binary obj){
        binary temp;
        temp.y=obj.x+y;
        return temp;
}
int main(){


        binary b1,b2,b3;
        int a,b;
        cout << "\n Enter the value of a and b : ";
            cin >> a >> b;
           b1.get_x(a);
           b2.get_y(b);
           b1.showdata1();
           b2.showdata2();
                b3=b2+b1; // here b2 goes directly and b1 is passed as  a argument
                b3.showdata2();
                return 0;

}
