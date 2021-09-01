//Author:   Gregorics Tibor
//Date:     2018.09.23.
//Title:    Legions

#include "legion.h"

using namespace std;

//Input:    string str  - the test file's name
//Activity: tries to open the given file. If the opening fails, it throws a "FileError" exception.
LegionEnor::LegionEnor(const std::string &str) throw (FileError)
{
    _f.open(str);
    if(_f.fail()) throw MissingInputFile;
}

//Task: 	Reading the next row of the input file
//Input:    ifstream _f  - the test file
//Output:   Legion _cur - the next contest
//          bool _end    - the end of the enumeration
//Activity:
void LegionEnor::next()
{
    string line;
    getline(_f , line, '\n');
    if( !(_end = _f.fail()) ){
        istringstream is(line);
        is >> _cur.name >> _cur.starship; // legion_name, sharship_name
        _cur.visited = false;
        string planet;
        int size;
        for( is >> planet ; !is.fail(); is >> planet ){
            if(planet == "Chondax") _cur.visited=true;
        }
    }
}
