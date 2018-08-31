     #include<iostream>
#include<vector>
using namespace std;
int main()
{
    int cnt=0;
    vector <int>v1 {10,20,30};
    vector <string>v2{3,"hello"};
                for(int i=0;i<v1.size();i++)
                {
                    cout << endl << v1[i];
                }
               vector <int>::iterator it=v1.begin();
               v1.insert(it+1,35);
               cout << "\n After insertion ";
               for(int i=0;i<v1.size();i++)
                {
                    cout << endl << v1[i];
                }


}
