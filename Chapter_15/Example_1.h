#include "Head.h"

class Remote;

class Tv
{
    friend class Remote;

public:
    enum State
    {
        Off,
        On
    };
    enum
    {
        Minval,
        Maxval = 20
    };
    enum
    {
        Antenna,
        Cable
    };
    enum Display
    {
        TV,
        DVD
    };
    Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On) ? Off : On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    bool chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
    void set_input() { input = (input == TV) ? DVD : TV; }
    void settings() const;
    void change_mode(Remote &R);

private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int display;
    int input;
};

class Remote
{
    friend class Tv;

public:
    enum State
    {
        Off,
        On
    };
    enum
    {
        Minval,
        Maxval = 20
    };
    enum
    {
        Antenna,
        Cable
    };
    enum
    {
        TV,
        DVD
    };
    enum MODE
    {
        normal,
        cross
    };

private:
    int mode;

public:
    Remote(int m = TV) : mode(m) {}
    bool volup(Tv &t) { return t.volup(); }
    bool voldown(Tv &t) { return t.voldown(); }
    void onoff(Tv &t) { t.onoff(); }
    void chanup(Tv &t) { t.chanup(); }
    void chandown(Tv &t) { t.chandown(); }
    void set_mode(Tv &t) { t.set_mode(); }
    void set_input(Tv &t) { t.set_input(); }
    void set_chan(Tv &t, int c) { t.channel = c; }
    void show_mode() const
    {
        if (mode == normal)
            cout << "noremal mode\n";
        else
            cout << "cross mode\n";
    }
};