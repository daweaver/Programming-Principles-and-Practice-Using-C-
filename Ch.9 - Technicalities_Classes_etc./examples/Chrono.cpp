// Definitions for Chrono
#include "Chrono.h"

namespace Chrono // member function definitions
{
    //=============================================================================
    // Date class constructors
    //=============================================================================
    Date::Date(int yy, Month mm, int dd) // 3-arg constructor for Date class
        : y{yy}, m{mm}, d{dd}
    {
        if (!is_date(yy, mm, dd))
            throw Invalid{};
    }

    const Date &default_date() // defines default date for default Date constructor
    {
        static Date dd{2001, Month::jan, 1}; // start of 21st century
        return dd;
    }

    Date::Date()                     // default Date class constructor
        : y{default_date().year()},  // set y to 2001
          m{default_date().month()}, // set m to Jan
          d{default_date().day()}    // set d to 1
    {
    }

    //=============================================================================
    // Date class function definitions
    //=============================================================================
    void Date::add_day(int n)
    {
        //...
    }

    void Date::add_month(int n)
    {
        //...
    }

    void Date::add_year(int n)
    {
        if (m == Month::feb && d == 29 && !leapyear(y + n))
        { // beware of leap years!
            m = Month::mar;
            d = 1;
        }
        y += n;
    }

    //=============================================================================
    // Helper functions
    //=============================================================================
    bool is_date(int y, Month m, int d) // check validity of date
    {
        if (d <= 0)
            return false; // d (day) must be positive
        if (m < Month::jan || Month::dec < m)
            return false; // month must be in range

        int days_in_month = 31; // most months have 31 days

        switch (m)
        {
        case Month::feb:
            days_in_month = (leapyear(y)) ? 29 : 28; // Feb varies
            break;
        case Month::apr:
        case Month::jun:
        case Month::sep:
        case Month::nov:
            days_in_month = 30; // months with 30 days
        }

        if (days_in_month < d)
            return false;

        return true;
    }

    bool leapyear(int y)     
    {
        // see exercise 10
    }

    bool operator==(const Date &a, const Date &b)       // compare if dates are the same
    {
        return a.year() == b.year() && a.month() == b.month() & a.day() == b.day();
    }  

    bool operator!=(const Date &a, const Date &b)
    {
        return !(a == b);
    }

    ostream &operator<<(ostream &os, const Date &d)
    {
        return os << '(' << d.year()
        << ',' << int(d.month())
        << ',' << d.day() << ')';
    }

    istream& operator >> (istream& is, Date& dd)
    {
        int y, m, d;
        char ch1, ch2, ch3, ch4;
        is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4;
        if(!is) return is;
        if (ch1!='(' || ch2 != ',' || ch3!=',' || ch4!=')') // format error
        {
            is.clear(ios_base::failbit);    // set the fail bit 
            return is;
        }

        dd = Date(y, Month(m), d);  // update dd

        return is;
    }

    enum class Day {
        sunday, monday, tuesday, wednesday, thursday, friday, saturday
    };

    //=============================================================================
    // Uncomment as you finish each exercise 
    //=============================================================================
    Day day_of_week(const Date& d)
    {
        //...
    }

    Date next_Sunday(const Date& d)
    {
        //...
    }

    Date next_weekday(const Date& d)
    {
        //...
    }
} // namespace Chrono