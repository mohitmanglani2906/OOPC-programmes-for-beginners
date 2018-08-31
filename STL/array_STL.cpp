#include<iostream>
#include<array>
using namespace std;
int main(){
        array<int,5>data_array={1,23,44,53,56};
        array<int,5>data_array2={34,65,78,21,2};
        cout << data_array.at(4); cout << endl;
        for(int i=0;i<=4;i++){
            cout << data_array[i] << endl;
        }
        cout << endl;
        cout << data_array.front(); cout << endl;
        cout << data_array.back();
        cout << endl;
        /* data_array.fill(11);
            cout << endl;                  // to fill the elements with the same value
            for(int i=0;i<=4;i++){
                cout << data_array[i] << endl;

            }*/
            cout << "swapping of two arrays : " << endl;
            data_array.swap(data_array2);
            for(int i=0;i<data_array.size();i++){
               cout <<  data_array[i] << endl;
            }
            cout << "\n Size of the array : " << endl;
                    cout << data_array.size();
        return 0;



}
