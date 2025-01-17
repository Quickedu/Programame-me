#include <iostream>
#include <string>
using namespace std;

string lletra (string input){
    
    if (input=="8")input="a";
    if (input=="7")input="b";
    if (input=="6")input="c";
    if (input=="5")input="d";
    if (input=="4")input="e";
    if (input=="3")input="f";
    if (input=="2")input="g";
    if (input=="1")input="h";
    return input;
}
int main (){
    string input;
    string input2;
    while (true){
        cin >> input;
        if (input == "0"){
            break;
        }
        cin >> input2;
        cout << lletra(input)<<input2 << endl;
    }
    return 0;
}