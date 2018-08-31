#include<iostream>
#include<map>
using namespace std;
    int main(){
            map<int,string>m;
            m[100]="mohit";
            m[123]="parth";
            m[145]="chand";
            m[456]="raju";
            m[566]="aarav";
            map<int,string>::iterator p=m.begin();
            while(p!=m.end()){

                cout << p->first << " ";
                cout << p->second << endl;
                p++;

            }
            m.insert(pair<int,string>(233,"saurabh"));
         cout << m.at(233) << endl;
         m.clear();
         cout << m.empty(); // checks weather the map is empty or not
            return 0;
    }








