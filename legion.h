//Author:   Gregorics Tibor
//Date:     2018.09.23.
//Title:    Legion

#pragma once

#include <fstream>
#include <sstream>
#include <string>

//Datatype of contests
struct Legion {
    std::string name;
    std::string starship;
    bool visited; // planets
};

//Datatype of the enumerator of contests
//This is the enumerator for the first part
class LegionEnor{
    private:
        std::ifstream _f;
        Legion _cur;
        bool _end;
    public:
        enum FileError{MissingInputFile};
        LegionEnor(const std::string &str) throw (FileError);
        void first() { next(); }
        void next();
        Legion current() const { return _cur; }
        bool end() const { return _end; }
};
