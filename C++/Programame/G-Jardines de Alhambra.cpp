#include <iostream>
#include <string>
using namespace std;

void comprovar (string jardi [x,y]){
    int X=0;
    int Y=0;
    int podadora = 1;
    string input;
    for (Y=0; Y<y ; Y++){
        for (X=0 ; X<x ; X++){
            if (jardi[Y,X] != "#" && jardi[Y,X] != "."){
                if (podadora>jardi[Y,X]){
                    jardi[Y,X];
                }
            }
            if (jardi[Y,X] == "#"){
                jardi [Y,X] = podadora;
                continue;
            }
            if (jardi[Y,X]=="."){
                continue;
            }
        }
    podadora++;
    }
}

int main() {
    unsigned int x;
    unsigned int y;
    cin >> y;
    cin >> x;
    string jardi [y,x];
    for (int i=0 ; i<y ; i++){
        for (int ii=0 ; ii<x ; ii++){
            cin >> jardi [ii,i];
        }
    }  
    comprovar(jardi);
    return 0;
}