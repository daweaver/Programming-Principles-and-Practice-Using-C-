// Book class declarations
#include <iostream>
#include <string>

class Book
{
public:
    //=============================================================================
    // Constructor(s)
    //=============================================================================
    Book(){};
    Book(std::string i, std::string t, std::string a, std::string cr, bool co)
        : isbn{i}, title{t}, author{a}, copyright_date{cr}, checked_out{false} {};

    //=============================================================================
    // Member functions
    //=============================================================================
    // modifying operations
    void check_in()
    {
        checked_out = false;
    }

    void check_out()
    {
        checked_out = true;
    }

    // non-modifying operations
    bool is_checked_out()
    {
        return checked_out;
    }

    std::string get_isbn()
    {
        return isbn;
    }

    std::string get_title()
    {
        return title;
    }

    std::string get_author()
    {
        return author;
    }

    std::string get_copyright_date()
    {
        return copyright_date;
    }

private:
    std::string isbn{};
    std::string title{};
    std::string author{};
    std::string copyright_date{}; // may change type later
    bool checked_out{};
};