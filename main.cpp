#include "medium/2.1.h"
#include "easy/1.1.h"
#include "easy/1.2.h"
#include "easy/1.3.h"
#include "easy/1.4.h"


int main() {
    tests_1();
    tests_2();
    tests_3();
    std::cout << isValid("(){}}");
    return 0;
}
