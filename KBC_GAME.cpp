#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<string.h>
using namespace std;
char getans(int);
char getans(int amt){
char i;
        DWORD start_time, check_time;
        start_time=GetTickCount();
        check_time=start_time+30000;

            while((check_time>GetTickCount()))
            {
                if (kbhit())
                {
                    i=getche();
                    cout<<"Data accepted"<<endl;
                    break;
                }

            }
            i=tolower(i);
            if(i=='a'||i=='b'||i=='c'||i=='d'){
                return i;
            }
            else{
                    cout << "\n You have won "<< amt <<" INR.";
                    exit(0);
                }



}
q1(char ch){
    cout << "************************Question 1: Which of these hindi idioms means 'falling in love' ********************" << endl;
    cout << "************************A. Aankh Pherna B. Aankh Tarerna C. Aankh Lagana D. Aankh Churan********************* ";

        char ans;
        cout << "\nYou are given a 30 seconds " ;
        cout << endl << "Enter your answer : ";
        int amt=0;
       ans=getans(amt);
            if(ans==ch){
                cout << "\n******************** You have won 20,000 INR.********************";
                getch();

            }
            else{
                cout << "********************Sorry you lost the question : ********************\n";
                cout << "\n ********************Your total amount is 0 INR.********************";
                exit(0);
            }


}
q2(char ch){
    cout << "************************Question 2: By which of these nicknames is Nagpur also known as?******************** " << endl;
    cout << "************************A. Diamond City B. Orange City C. Pink City D. City of Lakes ********************";
    char ans;
        cout << "\n You are given a 30 seconds " ;
        cout << endl << "Enter your answer : ";
            int amt=20000;

            ans=getans(amt);
            if(ans==ch){
                cout << "\n ********************You have won 40,000 INR.********************";
                getch();

            }
            else{
                cout << "********************Sorry you lost the question : ********************\n";
                cout << "\n******************** Your total amount is 20,000 INR.********************";
                exit(0);
            }


}
q3(char ch){
    cout << "************************Question 3: Which of these films has the tag line 'Every Child is Special'?********************" << endl;
    cout << "************************A. Paa B. Koi...Mil Gaya C. Taare Zameen Par D. Paathshaala******************** ";
    char ans;
        cout << "\n******************** You are given a 30 seconds ********************" ;
        cout << endl << "********************Enter your answer : ********************";
            int amt=40000;
            ans=getans(amt);
            if(ans==ch){
                cout << "\n******************** You have won 80,000 INR.********************";
                getch();

            }
            else{
                cout << "********************Sorry you lost the question : ********************\n";
                cout << "\n ********************Your total amount is 40,000 INR.********************";
                exit(0);
            }


}
q4(char ch){
    cout << "************************Question 4: What can you hear when a bell rings in a vaccum?******************** " << endl;
    cout << "************************A. Loud Sound B. Usual Sound C. No Sound D. Vibrating Sound ********************";
    char ans;
        cout << "\n********************You are given a 30 seconds ********************" ;
        cout << endl << "********************Enter your answer :******************** ";
            int amt=80000;
            ans=getans(amt);
            if(ans==ch){
                cout << "\n******************** You have won 160,000 INR.********************";
                getch();

            }
            else{
                cout << "********************Sorry you lost the question :********************\n";
                cout << "\n ********************Your total amount is 80,000 INR.********************";
                exit(0);
            }

}
q5(char ch){
    cout << "************************Question 5: Which of these cricketers holds the record for playing the highest number of test matches.********************" << endl;
    cout << "************************A. Stephen Flaming B. Alan Border C. Steve Waugh D. Sachin Tendular ********************" ;
     char ans;

        cout << endl << "********************Enter your answer : ********************";
        cin >> ans;
        if(ans==ch){
            cout << "\n********************You have won 320,000 INR******************** ";
        }
        else{
            cout << "********************Sorry you lost this question ********************\n";
            cout << "********************You have won 160,000********************";
            exit(0);
        }


}
q6(char ch){
        cout << "************************Question 6: Which among these never became President of Pakistan? ********************" << endl;
        cout << "************************A. Mohammad Ali Zinnah B. Iskander Mirza C. Asif Ali Zardari D. Zulfikar Ali Bhutto********************";
         char ans;

        cout << endl << "********************Enter your answer :******************** ";
        cin >> ans;
        if(ans==ch){
            cout << "\n********************You have won 640,000 INR ********************";
        }
        else{
            cout << "********************Sorry you lost this question ********************\n";
            cout << "********************You have won 320,000********************";
            exit(0);
        }


}
q7(char ch){
    cout << "************************Question 7: According to Hindi saying, /*‘*/'Doodh ka jala bhi phoonk phoonk ke peeta hai/*’*/'? ********************" << endl;
    cout << "************************A. Chhachh  B. Shahad C. Ghee D. Icecream******************** ";
     char ans;

        cout << endl << "********************Enter your answer :******************** ";
        cin >> ans;
        if(ans==ch){
            cout << "\n********************You have won 12,50,000 INR******************** ";
        }
        else{
            cout << "********************Sorry you lost this question ********************\n";
            cout << "********************You have won 640,000********************";
        }



}
q8(char ch){
    cout << "************************Question 8: What does ‘S’ stand for in a ‘SIM’ card used in mobile phones? ********************" << endl;
    cout << " ***********************A. Service  B. Smart C. Science D. Subscriber********************";
     char ans;

        cout << endl << "********************Enter your answer : ********************";
        cin >> ans;
        if(ans==ch){
            cout << "\n********************You have won 25,00,000 INR ********************";
        }
        else{
            cout << "********************Sorry you lost this question ********************\n";
            cout << "********************You have won 640,000********************";
            exit(0);
        }


}
q9(char ch){
    cout << "************************Question 9: Painter M.F. Hussain accepted the citizenship of which country in 2010?******************** " << endl;
    cout << "************************A. Oman B. Qatar C. UAE D. Bahrain********************";
     char ans;

        cout << endl << "********************Enter your answer : ********************";
        cin >> ans;
        if(ans==ch){
            cout << "\n********************You have won 50,00,000 INR ********************";
        }
        else{
            cout << "********************Sorry you lost this question ********************\n";
            cout << "********************You have won 25,00,000********************";
            exit(0);
        }


}
q10(char ch){
    cout << "************************Question 10: What is the color of octopus blood?******************** " << endl;
    cout << "************************A. Blue B. White C. Red D. Yellow ********************";
     char ans;

        cout << endl << "********************Enter your answer :******************** ";
        cin >> ans;
        if(ans==ch){
            cout << "\n********************You have won 100,00,000 INR******************** ";
        }
        else{
            cout << "********************Sorry you lost this question********************\n";
            cout << "********************You have won 50,00,000********************";
            exit(0);
        }


}

class rules{
public:
    void showrules(){
cout << "*******************Welcome to Kaun Banega Crorepati***************************************************************" << endl << endl;
cout << "*******************These are the Rules of the game*****************************************************************"<< endl << endl;
cout << "*******************1.On each and every question you will be asked to play a game or note*************************" << endl << endl;
cout << "*******************2.You can quit before the question is asked****************************************************" << endl << endl;
cout << "*******************3.There are mainly 10 questions*****************************************************************"<< endl << endl;
cout << "*******************4.You can maximum win  1 crore INR.*************************************************************" << endl << endl;
cout << "*******************5.You will be given 45 seconds upto 4 questions :***********************************************" << endl << endl;

cout << "*******************There is  an amount on each question you can win with correct answer given below******************"<< endl;
cout << "1.  20000" << endl ;
cout << "2.  40000" << endl ;
cout << "3.  80000" << endl;
cout << "4.  160000"<< endl;
cout << "5.  320000" << endl;
cout << "6.  6400000" << endl;
cout << "7.  12500000"<< endl;
cout << "8.  2500000"<< endl;
cout << "9.  5000000"<< endl;
cout << "10. 10000000\n ";
cout << "\nPress Any key to continue.....";
    }
};
int main(){
char permission;
rules r;
r.showrules();
getch();
cout << "\nLet's Play Kaun Banega Crorepati " << endl;
cout << "\nThis is the First Question of the Game " << endl;
q1('c');
        cout << "\n\n\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q2('b');
    else return 0;
        cout << "\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q3('c');
    else return 0;
        cout << "\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q4('c');
    else return 0;
        cout << "\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q5('d');
    else return 0;
        cout << "\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q6('a');
    else return 0;
        cout << "\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q7('a');
    else return 0;
        cout << "\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q8('d');
    else return 0;
        cout << "\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q9('b');
    else return 0;
        cout << "\n Do you want to play : Say Y or n ";
        cin >> permission;
    if(permission=='y'||permission=='Y')q10('a');
    else return 0;



 return 0;

}


