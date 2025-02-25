#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

void program (){
    long magenta = 0;
    long amarillo = 0;
    long cian = 0;
    string prova;
    char color;

    cin >> magenta;
    cin >> amarillo;
    cin >> cian;
    getline (cin, prova);
    for (int i = 0; i<prova.length()-1;i++) {
        color = prova[i+1];
        switch (color){
            case 'M':
            magenta--;
            break;
            case 'A':
            amarillo--;
            break;
            case 'C':
            cian--;
            break;
            case 'R':
            amarillo--;
            magenta--;
            break;
            case 'N':
            amarillo--;
            cian--;
            magenta--;
            break;
            case 'V':
            cian--;
            amarillo--;
            break;
            case 'L':
            magenta--;
            cian--;
            break;
            default:
            break;
        }
        if (magenta == -1 || amarillo == -1 || cian == -1){
            cout << "NO" << endl;
            return;
        }
    }
    printf ("SI %lu %lu %lu\n", magenta, amarillo, cian);
}

int main(){
    int input;
    cin >> input;
    for (int i=0; i<input ; i++){
        program();
    }
    return 0;
}