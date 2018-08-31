// class to basic to type conversion
/*
Write a program to create a class distance containing feet and inches.
Using operator keyword, convert an object of class distance into total meters which is a float data type. (1 meter=3.28 feet)
*/

#include<iostream>
using namespace std;
class distanc{

        float feet,inches;
    public:
        distanc(){};
        distanc(float f,float i){
                feet=f;
                inches=i;
        }
        operator float();
};
distanc::operator float()
{
    float meter;
    meter= (feet*.3048)+(inches*.0254);
    return meter;
}
int main(){
        float ft,in;
        cout << "\n Enter feet and inches : ";
            cin >> ft >> in;
            distanc d1;
            d1=distanc(ft,in);
            float meter=d1;
            cout << "\n And the total meter is   : "  <<  meter;
            return 0;
}
