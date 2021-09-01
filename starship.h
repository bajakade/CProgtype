//Author:   Gregorics Tibor
//Date:     2018.09.23.
//Title:    Starships

#pragma once

#include "legion.h"
#include <string>


//Datatype of anglers
struct Starship {
    std::string id; // name
    bool rogue; // skillful
};


//Datatype of the enumerator of anglers for the second part
class StarshipEnor{
    private:
        LegionEnor _tt;
        Starship _cur;
        bool _end;
    public:
        StarshipEnor(const std::string &str): _tt(str) { }
        void first() { _tt.first(); next(); }
        void next();
        Starship current() const { return _cur; }
        bool end() const { return _end; }
};

