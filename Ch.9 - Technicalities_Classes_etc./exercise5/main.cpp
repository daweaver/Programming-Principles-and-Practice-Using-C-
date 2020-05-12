#include "Book.h"

using namespace std;

int main()
{
    // TO DO: add the ability for user to input 

    Book pp2("1-2-3-4", "Programming:Principles and Practice Using C++", "Bjarne Stroustrup", "1963", false);

    std::cout << std::boolalpha;    // print out true/false instead of 1/0

    // test functions
    cout << "ISBN: " << pp2.get_isbn() << endl;
    cout << "Title: " << pp2.get_title() << endl;
    cout << "Author: " << pp2.get_author() << endl;
    cout << "Copyright Date: " << pp2.get_copyright_date() << endl;
    cout << "Checked out: " << pp2.is_checked_out() << endl;
    cout << "\nNow checking out..." << endl;
    pp2.check_out();
    cout << "Checked out: " << pp2.is_checked_out() << endl;

    return 0;
}