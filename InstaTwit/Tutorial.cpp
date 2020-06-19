//
//  Tutorial.cpp
//  InstaTwit
//
//  Created by robot on 12/06/2020.
//  Copyright © 2020 Element 84, LLC. All rights reserved.
//

#include "Tutorial.hpp"

using namespace std;

string CPPClass::getNumber()
{
    string a;
    vector<string> feelings {"awesome", "confident", "smart", "agile", "friendly",
        "savvy", "psyched", "hopeful", "efficient"};
    vector<string> activities {"networking", "coding", "tweeting", "wireframing",
        "working", "meeting", "pitching", "pivoting", "going mobile"};
    vector<string> :: iterator itr;
    vector<string> :: iterator jtr;
    srand((unsigned) time(NULL));
    random_shuffle(feelings.begin(), feelings.end());
    random_shuffle(activities.begin(), activities.end());
    for (itr = feelings.begin(); itr != feelings.end(); itr++)
    {
        for(jtr = activities.begin();jtr!=activities.end(); jtr++)
        a ="I'm "+*jtr+ " and feeling " + *itr + " about it!";
    }
    
    return a;
}
