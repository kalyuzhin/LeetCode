#include "medium/2.1.h"
#include "easy/1.1.h"
#include "easy/1.2.h"
#include "easy/1.3.h"
#include "easy/1.4.h"
#include "easy/1.6.h"
#include "my-module/myfunctions.h"


int main() {
    tests_1();
    tests_2();
    tests_3();
    tests_4();
    std::vector<int> v{1, 1, 2};
    removeDuplicates(v);
    std::cout << v;
    return 0;
}
