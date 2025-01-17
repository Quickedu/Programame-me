#include <iostream>
#include <random>

using namespace std;
int main (){
    random_device rnd;
    mt19937 gen(rnd());
    uniform_int_distribution<int> dis(100, 787);
    int randomnum = dis(gen);
    cout << "Numero random: " << randomnum << endl;
    return 0;
}