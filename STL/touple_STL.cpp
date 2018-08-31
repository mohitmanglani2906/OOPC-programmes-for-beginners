#include<iostream>
#include<tuple>
using namespace std;
int main(){
        tuple<string,int,int>t1;
        t1=make_tuple("mohit",12,34);
        cout << get<0>(t1) << " ";
        cout << get<1>(t1) << " ";
        cout << get<2>(t1) << " ";
        tuple<string,int,float>t2;
        t2=make_tuple("mohit",12,34);
                if(t1==t2){
                    cout << "\n true ";
                }
                else{
                    cout << "\n false ";
                }
        return 0;





}
