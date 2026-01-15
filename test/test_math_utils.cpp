#include <cassert>
#include "../src/math_utils.h"

int main() {
    assert(addNumbers(2, 3) == 5);
    assert(addNumbers(-1, 1) == 0);
    return 0;
}
