
#include <iostream>
#include<vector>
using namespace std;


void int_to_binary(int num){
    vector <int> output;
     int j=0;
 while(num != 0)
    {
        j =  (num&1);
        num = num>>1;
        output.push_back(j);
    }
    for(auto p1= output.end()-1; p1 >= output.begin(); p1--)
    {
       cout<< *p1;
    }
}
int main()
{

    int_to_binary(69);
    /*int liczba= 10;
    int bytes =5;
    int wynik [5];
    int j=0;
    while(bytes>0)
    {
        j =  (liczba&1);
        liczba = liczba>>1;

         wynik[bytes-1] = j;
        bytes--;

    }

    for(int i=0; i<5; i++)
    {
        cout <<wynik[i];
    }*/


    return 0;
}
