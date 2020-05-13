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

    std::string get_isbn() const // need to add const for const references
    {
        return isbn;
    }

    std::string get_title() const
    {
        return title;
    }

    std::string get_author() const
    {
        return author;
    }

    std::string get_copyright_date() const
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

//=============================================================================
// Helper functions
//=============================================================================
bool operator==(const Book &a, const Book &b) // test is ISBNs are the same
{
    return a.get_isbn() == b.get_isbn();
}

bool operator!=(const Book &a, const Book &b)
{
    return a.get_isbn() != b.get_isbn();
}

std::ostream &operator<<(std::ostream &os, const Book &a)   // format Book 
{
    return os << "ISBN: " << a.get_isbn() << '\n'
              << "Title: " << a.get_title() << '\n'
              << "Author: " << a.get_author() << '\n';
}