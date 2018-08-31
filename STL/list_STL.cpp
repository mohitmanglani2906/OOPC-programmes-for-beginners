#include<iostream>
#include<list>
using namespace std;
int main(){
list<int>l{12,4,1,45,85};
        list<int>::iterator p=l.begin();
                while(p!=l.end()){
                    cout << *p;
                    cout << " ";
                    p++;
                }
                cout << "\n Size is : "<< l.size();
                //l.push_back(60);
                l.pop_back();
                list<int>::iterator it=l.begin();
                cout << endl;
                while(it!=l.end()){
                    cout << *it << " ";
                    it++;
                }
                cout << endl;
                l.reverse();
                list<int>::iterator i=l.begin();
                while(i!=l.end()){
                    cout << *i << " ";
                    i++;
                }
                cout << "\n Sorting is : " ;
                l.sort();
                list<int>::iterator q=l.begin();
                while(q!=l.end()){
                    cout << *q << " ";
                    q++;
                }


return 0;






}
