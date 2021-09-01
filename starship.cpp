//Author:   Gregorics Tibor
//Date:     2018.09.23.
//Title:    Starships

#include "starship.h"

using namespace std;

//next() method for the second task
//Task: 	Reading the next angler with his ability
//Input:    ContestEnor tt  - the enumerator of contests
//Output:   Angler _cur     - the next angler
//          bool _end       - the end of the enumeration
//Activity:
void StarshipEnor::next()
{
    if( !(_end = _tt.end()) ){
        _cur.id = _tt.current().starship; // cur starshipid = 
        _cur.rogue = false;
        for( ; !_tt.end() && _tt.current().starship == _cur.id; _tt.next() ){
            _cur.rogue = _cur.rogue || (_tt.current().visited);
        }
    }
}
