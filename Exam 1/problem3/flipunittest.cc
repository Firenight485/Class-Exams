#include<problem3.h>
#include<iostream>

bool TestReverveGood1() {
    return Reverse(54321);
}
bool BadReverse1() {
    return !Reverse(021);
}

int main() {
    if ( TestReverveGood1() )
        std::cout << "passed test 1" << std::endl;
    else
        std::cout << "failed test 1" << std::endl;
    if ( BadReverse1() )
        std::cout << "passed bad values test 1" << std::endl;
    else
        std::cout << "failed bad values test 1";
}
