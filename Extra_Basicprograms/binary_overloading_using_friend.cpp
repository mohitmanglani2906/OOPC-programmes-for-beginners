#include<iostream>
using namespace std;
class sum{
        int x,y;
    public:
        void get_x(int a){
                x=a;
        }
      /*  void get_y(int b){
            y=b;
        }*/
        void showdata(){
            cout  << x;
        }
        friend sum operator +(sum,sum);
};
sum operator +(sum s1,sum s2){

        sum s;
        s.x=s1.x+s2.x;
        return s;

}
int main(){

        sum s1,s2,s3;cout << "\n X= " ;
        s1.get_x(3); s1.showdata();
        cout << "\n X= ";
        s2.get_x(4);s2.showdata(); cout << "\n And the sum is : ";
        s3=s1+s2; s3.showdata();

return 0;
}
