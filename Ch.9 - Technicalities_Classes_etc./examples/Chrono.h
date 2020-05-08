// Chrono class declarations
//#include "../../std_lib_facilities.h"
namespace Chrono
{
    //=============================================================================
    // Class declaration
    //=============================================================================
    enum class Month
    {
        jan = 1,
        feb,
        mar,
        apr,
        may,
        jun,
        jul,
        aug,
        sep,
        oct,
        nov,
        dec
    };

    //enum class Day; // may need to remove later

    class Date
    {
    public:
        class Invalid
        {
        }; // to throw as exception

        Date(int y, Month m, int d); // 3-arg constructor, checks for valid input
        Date();                      // default constrcutor

        // nonmodifying operations:
        int day() const { return d; }
        Month month() const { return m; }
        int year() const { return y; }

        // modifying operations:
        void add_day(int n);
        void add_month(int n);
        void add_year(int n);

    private:
        int y;
        Month m;
        int d;
    };

    //=============================================================================
    // Helper function declarations
    //=============================================================================
    bool is_date(int y, Month m, int d); // true for valid date
    bool leapyear(int y);                // true if y is leap year

    bool operator==(const Date &a, const Date &b);
    bool operator!=(const Date &a, const Date &b);
    
    ostream &operator<<(ostream &os, const Date &d); // custom operators
    istream &operator>>(istream &is, Date &dd);
    
    Day day_of_week(const Date &d); // day of week of d
    Date next_Sunday(const Date d); // next Sunday after d
    Date next_weekday(const Date &d);  // next weekday after d
} // namespace Chrono