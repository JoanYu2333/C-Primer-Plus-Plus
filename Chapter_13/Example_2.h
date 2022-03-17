#ifndef EXAMPLE2_H_
#define EXAMPLE2_H_

#include "head.h"
void Example_2();
namespace EXAMPLE2
{
    class Cd
    {
    private:
        char *performers;
        char *label;
        int selections;
        double playtime;

    public:
        Cd(char *s1, char *s2, int n, double x);
        Cd(const Cd &d);
        Cd();
        virtual ~Cd();
        virtual void Report() const;
        virtual Cd &operator=(const Cd &d);
    };

    class Classic : public Cd
    {
    private:
        char *str;

    public:
        Classic();
        Classic(char *s1, char *s2, char *s3, int n, double x);
        ~Classic();
        void Report() const;
        Classic &operator=(const Classic &d);
    };
}
#endif