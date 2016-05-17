#include <iostream>
#include <string>

#include "citrusfruit.h"
#include "orange.h"
#include "lemon.h"

using namespace std;
void PrintTheFruits(CitrusFruit &fruit){
cout << "fruit is a " << fruit.getName()
<< " and has a pH " << fruit.getPh() << endl;
};
int main(){
Lemon lemon(2.0);
Orange orange(0.5);
//This is perfectly legal!
CitrusFruit &rlemon = lemon;
CitrusFruit *plemon = &lemon;
PrintTheFruits(lemon);
PrintTheFruits(orange);

Lemon le1(1.4), le2(1.5), le3(1.234);
Orange or1(0.4), or2(0.3), or3(0.5);
CitrusFruit *cfruits[] = {&le1, &le2, &le3, &or1, &or2, &or3};
for(int i = 0; i < 6; i++)
cout << cfruits[i]->getName() << " has a pH "
<< cfruits[i]->getPh() << endl;
}
