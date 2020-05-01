/*PP2: Ch.8 - Drill 2
  - Create a namespace(s) in a header file 
  that will get this main() to compile 
  and run.
*/

#include "namespace.h"

int main()
{
    X::var = 7;
    X::print(); // print X's var
    using namespace Y;
    var = 9;
    print(); // print Y's var
    {
        using Z::print;
        using Z::var;
        var = 11;
        print(); // print Z's var
    }
    print();    // print Y's var
    X::print(); // print X's var

    return 0;
}