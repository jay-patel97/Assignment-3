#include <iostream>
#include <string>

#include "parent.h"
#include "child.h"

int main(){
Child child;
Parent &cParent = child;
std::cout << "cParent is a " << cParent.getName() << std::endl;
return 0;
}
