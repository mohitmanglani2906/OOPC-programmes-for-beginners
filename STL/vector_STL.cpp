#include<iostream>
#include<vector>
using namespace std;
int main(){

        vector<int>v1; // zero length vector
        vector<char>cv(5); //creates a 5 elements char vector
        vector<char>v4(4,'a'); //initialize 4 elemnts vector with char 'a'
                cout << v4[0] << endl;



                cout  << endl << v1.capacity() << endl;
                for(int i=0;i<=9;i++){
                    v1.push_back(10*(i+1));
                    cout << "\n current capacity is : " << v1.capacity();
                }
                cout << endl;
                for(int i=0;i<=9;i++){
                    cout << v1[i] << endl; // [] is a operator
                }
                cout << "\n Total numbers of elements in the array is : " << v1.size();
                v1.pop_back();
                v1.pop_back();
                v1.pop_back();
                v1.pop_back();
                v1.pop_back();
                v1.pop_back();
                 cout << "\n Total numbers of elements in the array is : " << v1.size();
                for(int i=0;i<=9;i++){
                    cout << "\n" << v1[i];
                }
                vector<int>::iterator it=v1.begin();
                v1.insert(it+4,35);
                cout << "\n After using iterator : " ;
                for(int i=0;i<v1.size();i++){
                    cout << "\n" << v1[i];
                }
                cout << endl;
               // v1.clear();
                cout << "\n Capacity is : "<< v1.capacity();
                cout << "\n Size of the vector is : " << v1.size();
                cout << "\n value at index is : " << v1.at(3);
                cout << "\n First value is : " << v1.front();
                cout << "\n last value is : "<< v1.back();
                return 0;


}
