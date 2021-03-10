#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>
#include <algorithm>
using namespace std;

TEST_CASE("Good snowman code") {
    CHECK(snowman(42133241) == string("  _  \n (*) \n (..O)/\n/(   ) \n ( : ) \n")); 
    CHECK(snowman(12341424) == string("      \n _===_\n (O.-) \n<(] [) \n (   )"));
    CHECK(snowman(22413124) == string("  ___  \n ..... \n (-..) \n/(] [)>\n (   ) \n")); 
    CHECK(snowman(44123211) == string("  ___  \n (_*_) \n (. o)/\n/( : ) \n ( : ) \n")); 
    CHECK(snowman(12341111) == string("      \n _===_\n (O.-) \n<( : )>\n ( : )"));
    CHECK(snowman(13412143) == string("       \n _===_ \n\\(-_.) \n (   )>\n (___) \n")); 
    CHECK(snowman(33414214) == string("   _   \n  /_\\ \n (-_.)/\n ( : ) \n (   ) \n")); 
    CHECK(snowman(13412143) == string("       \n _===_ \n\\(-_.) \n (   )>\n (___) \n")); 
    CHECK(snowman(34211342) == string("   _   \n  /_\\ \n (o .) \n<(   )\\\n (\" \") \n")); 
    CHECK(snowman(24114324) == string("  ___  \n ..... \n (. .) \n (] [)\\\n (   ) \n"));
    CHECK(snowman(31241321) == string("   _   \n  /_\\ \n (o,-) \n<(] [)\\\n ( : ) \n")); 
    CHECK(snowman(13412143) == string("       \n === \n\\(-.) \n (   )>\n (__) \n")); 
    CHECK(snowman(34211342) == string("   _   \n  /_\\ \n (o .) \n<(   )\\\n (\" \") \n")); 
    CHECK(snowman(24114324) == string("  _  \n ..... \n (. .) \n (] [)\\\n (   ) \n")); 
    CHECK(snowman(34344122) == string("   _   \n  /_\\ \n (O -) \n (] [)>\n (\" \") \n")); 
    CHECK(snowman(14224132) == string("       \n === \n (o o) \n (> <)>\n (\" \") \n")); 
    CHECK(snowman(12442234) == string("       \n === \n\\(-.-)/\n (> <) \n (   ) \n"));     
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(-1));
    CHECK_THROWS(snowman(22));
    CHECK_THROWS(snowman(333));
    CHECK_THROWS(snowman(444));
    CHECK_THROWS(snowman(5555));
    CHECK_THROWS(snowman(66666));
    CHECK_THROWS(snowman(777777));
}