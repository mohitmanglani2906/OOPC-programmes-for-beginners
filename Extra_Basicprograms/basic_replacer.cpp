#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


string Replace(string a,string b,string c)
{
     int pos = a.find(b);cout << pos;
    do
    {
        pos = a.find(b);// cout << endl << pos;
        if (pos!=-1) { a.replace(pos, b.length(), c);} //cout << endl << pos;}
    }
    while (pos!=-1);

    return a;
}

int main()

{
    std::cout << Replace("Hello World Hello","Hello","goodbye");

}
