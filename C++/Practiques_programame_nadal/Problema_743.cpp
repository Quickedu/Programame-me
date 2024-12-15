#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int calculpags (int npages){
    int resultat;
    if (npages%2 != 0){
        npages = npages-1;
    }
    resultat = npages/2;
    return resultat;
}

int main () {
    vector <int> docs;
    long ndoc = 1;
    long documents = 0;
    int npag;
    string linea;
    while (ndoc!=0){
        cin >> ndoc;
        if (ndoc!=0){
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,linea);
            stringstream ss (linea);
            while (ss >> npag){
                documents += calculpags(npag);
            }
            docs.push_back(documents);
            documents = 0;
        }
    }
    for (int i=0 ; i<docs.size();i++){
        cout << docs[i] << endl;
    }
}