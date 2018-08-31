/*
print time and hours of a given input use basic to class type conversion
*/
#include<iostream>
using namespace std;
class time{

int hours,minutes;
public:
    time(){}
    time(int t){

       if(t<60){
            minutes=t;
            hours=0;
       }
      else{
            hours=t/60;
            minutes=t%60;
       }
    }
    void display(){
        cout << "\n Hours : " << hours << "\n Minutes : " << minutes;
    }
};
int main(){

        int duration;
        cout << "\n Enter total duration : ";
            cin >> duration;
            time T;
            T=duration;  // converts basic to class type and  calla constructor implicitly or you can write T=time(duration)
            T.display(); // displays the hours and minutes
            return 0;
}
