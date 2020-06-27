#include <iostream>
#include "test.h"
int main() {
    char name[]="Amy";
    std::cout<<sizeof(name)<<std::endl;

    char *teacher=name;
    std::cout<<sizeof(teacher)<<std::endl;

    unsigned int numOfPeople=100;
    std::cout<<sizeof(numOfPeople)<<std::endl;

    test();
    return 0;
}
