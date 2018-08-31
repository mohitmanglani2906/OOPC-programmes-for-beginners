#include<iostream>
using namespace std;
class student{
        string name;
        int age;
    public:
        void set_values(string s,int a){
                    name=s;
                    age=a;

        }
        void showdata(){
                cout << "\n name= " << name << endl << "\n age= " << age;
        }

};
int main(){

        pair<string,int>p1;
        pair<int,student>p2;
        p1=make_pair("rahul",12);
        cout << p1.first << endl;
        cout << p1.second << endl;
                student s1;
                s1.set_values("mohit",20);
                p2.make_pair(1,s1);
                    cout << endl << endl;
                    cout <<p2.first << endl;
                    student s2=p2.second;
                    s2.showdata();
                    return 0;







}
