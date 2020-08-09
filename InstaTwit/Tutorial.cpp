//
//  Tutorial.cpp
//  InstaTwit
//
//  Created by alimovlex on 12/06/2020.
//  Copyright © 2020 Element 84, LLC. All rights reserved.
//

#include "Tutorial.hpp"

using namespace std;

string CPPClass::getNumber()
{
    string a;
    vector<string> personal_qualities {//common 1 chapter
                             "restive", "impertinent", "egregious", "veracious", "mercurial",
                             "amenable", "gregarious", "parochial", "ingenious", "artful",
                             "involved", "disinterested", "frugal", "parsimonious", "iconoclast"
                             //common 2 chapter
    };
    vector<string> thoughts {//common 1 chapter
                             "ambiguous", "laconic", "vindicated", "equivocal", "anomalous",
                             "innocuous", "amorphous"
                             //common 2 chapter
    };
    vector<string> objects {//common 1 chapter
                            "amalgam", "harangue", "aberration", "venality", "calumny",
                            "acrimony"
                            //common 2 chapter
    };
    vector<string> actions {//common 1 chapter
                        "to venerate", "to betray", "to galvanize", "to demur", "to maintain"
                        "to enervate", "to intimate", "to undermine", "to vindicate", "to belie",
                        "to prevaricate", "to profligate", "to censure", "to upbraid", "to chastise",
                        "to castigate"
                        //common 2 chapter
    };
    vector<string> :: iterator itr;
    vector<string> :: iterator jtr;
    vector<string> :: iterator ktr;
    vector<string> :: iterator ltr;
    srand((unsigned) time(NULL));
    random_shuffle(personal_qualities.begin(), personal_qualities.end());
    random_shuffle(thoughts.begin(), thoughts.end());
    random_shuffle(objects.begin(), objects.end());
    random_shuffle(actions.begin(), actions.end());
    for (itr = thoughts.begin(); itr != thoughts.end(); itr++)
    {
    for(jtr = personal_qualities.begin();jtr!=personal_qualities.end(); jtr++)
    for(ktr = objects.begin();ktr!=objects.end(); ktr++)
    for(ltr = actions.begin();ltr!=actions.end(); ltr++)
        a ="I adore "+*ltr+ " as I'm "+*jtr+ " and have " + *itr + " thoughts and ideas about "+*ktr+ ".";
    }
    
    return a;
}
