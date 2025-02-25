#include <iostream>
#include <cstdlib>

using namespace std;
int main (){
    srand(time(0));
    int randomnum = rand() % 688 + 100;
    cout << "Numero random: " << randomnum << endl;
    return 0;
}