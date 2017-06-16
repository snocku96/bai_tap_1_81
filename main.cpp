#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello OngHuy!" << endl;
    cout << "These are entire rylics of 99 bottles of beer ";
    int i=99;
    while (i>0&&i<100){
        cout <<i <<" bottle of beer on the wall" <<","<<""<<i<<" bottle of beer.";
        cout <<'\n';
        if(i>1){
        cout <<"Take one down and pass it around"<<","<<""<<i-1<<" bottle of beer on the wall.";
        cout <<'\n';
        }
        i--;
    }
        cout <<"Take one down and pass it around, no more bottle of beer on the wall."<<endl;
        cout <<"No more bottles of beer on the wall, no more bottles of beer. "<<endl;
        cout <<"Go to the store and buy some more, 99 bottles of beer on the wall.";
    return 0;
}
