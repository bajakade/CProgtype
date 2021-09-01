//Author:   Gregorics Tibor
//Date:     2018.09.23.
//Title:    Anglers
#include <iostream>
#include "legion.h" //this is not necessary when we use the next include (only for the first task)
#include "starship.h"

using namespace std;



bool rogue_starship_search(const string &name, int& counter)
{
    LegionEnor t(name);
    bool l = false;
    for(t.first(); !t.end(); t.next()){
        l = l || t.current().visited;
        //elem = t.current();
        if(t.current().visited){
            cout<<"("<<++counter<<") "<<t.current().starship<<endl;
        }
            
    }
    return l;
}




//Activity:
//First: Looking for the first angler, who has caught at least two catfishes on a contest
//Second: Looking for a skillful angler who has caught at least two catfishes on each his contests
int main()
{

    string filename;
    cout<<"Enter the name of the input file, please: "; cin>>filename;

    //First task
    cout<<"Starship with potential traitors\n";
    try{
        int total=0;
        if(rogue_starship_search(filename, total)){
            cout<<"Total: "<<total<<endl;
        }else{
            cout<<"There is no sharship who visited Chondox.\n";
        }
    }catch(LegionEnor::FileError err)
    {
        cerr<<"Can't find input file "<<filename<<"!"<<endl;
    }


    return 0;
}

