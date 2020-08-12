//
//  Basic_vocabulary.cpp
//  InstaTwit
//
//  Created by robot on 09/08/2020.
//  Copyright © 2020 Element 84, LLC. All rights reserved.
//

#include "Basic_vocabulary.hpp"

using namespace std;

string CPP_Class::basic_first()
{
    string a;
    vector<string> personal_qualities {"insolvent", "thrifty", "spendthrift", "affluent", "indignant",
                                       "embroiled", "demure", "voracious", "affable", "vindictive",
                                       "dog", "amiable", "candid", "tender", "miser", "retiring",
                                       "inflammatory", "telling", "erratic", "diabolical", "indigenous",
                                       "telltale", "thoroughgoing", "reprobate"};
    vector<string> thoughts {"macabre", "bleak"};
    vector<string> objects {"stipend", "censors", "acme", "slapdash", "summit",
                            "pinnacle", "variance", "zenith", "tirade", "serendipity", "dupe"};
    vector<string> actions {"to profuse", "to underwrite", "to indict", "to inundate", "to remiss",
                            "to peruse", "to err", "to mesmerize", "to hound", "to reprobate",
                            "to dupe", "to pine", "to unnerve", "to demean"};
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
                    a ="I adore "+*ltr+ " as I'm "+*jtr+ " person and have " + *itr + " thoughts and ideas about "+*ktr+ ".";
    }
    
    return a;
}
