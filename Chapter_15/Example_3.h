#include "Head.h"

namespace EXAMPLE3
{
    void Example_3();
    double hmean(double a, double b);
    double gmean(double a, double b);

    class bad_hmean : public std::logic_error
    {
    private:
        double v1;
        double v2;

    public:
        bad_hmean(double a = 0, double b = 0) : v1(a), v2(b), logic_error("The function is bad_hmean\n") {}
        void what();
    };

    inline void bad_hmean::what()
    {
        cout << "invalid arguments: a = -b\n";
        cout << std::logic_error::what();
    }

    class bad_gmean : public std::logic_error
    {
    public:
        double v1;
        double v2;
        bad_gmean(double a = 0, double b = 0) : v1(a), v2(b), logic_error("The function is bag_gmean") {}
        void what();
    };

    inline void bad_gmean::what()
    {
        cout << "gmean() arguments should be >=0\n";
        cout << std::logic_error::what();
    }
}