#include <cassert>
#include "../src/data_validation.h"

int main() {
    assert(isValidEmail("user@test.com"));
    assert(!isValidEmail("invalid-email"));
    return 0;
}
