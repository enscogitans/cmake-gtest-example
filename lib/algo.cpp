#include "algo.h"

#include <string>

#include <util/bar/bar.h>
#include <util/foo/foo.h>
#include <util/buzz.h>

std::string Message() {
    std::string result = Foo() + " " + Bar();
    for (auto&& s : Buzz()) {
        result += " " + s;
    }
    return result;
}
