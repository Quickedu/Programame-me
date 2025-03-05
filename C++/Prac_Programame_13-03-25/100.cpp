#include <iostream> 
#include <cstdlib>
#include <algorithm>

using namespace std;

int numgran(int *num){
    return num[3]*1000 + num[2]*100 + num[1]*10 + num[0];
}

int numpeq(int *num){
    return num[0]*1000 + num[1]*100 + num[2]*10 + num[3];
}

int entranum(int n){
    
    if (n==6174){
        return 0;
    }
    int num[4];
    int iter = 0;
    while (n!=6174){
        if (n==0){
            return 8;
        }
        iter++;
        for (int i = 0; i < 4; i++){
            num [i] = n%10;
            n/=10;
        }
        sort(num, num+4);
        int major = numgran(num);
        int menor = numpeq(num);
        n = major - menor;

    }
    return iter;
}

int main (){
    int repes, n;
    cin >> repes;
    for (int i = 0; i < repes ; i++){
        cin >> n;
        cout << entranum(n) << endl;
    }
    return 0;
}