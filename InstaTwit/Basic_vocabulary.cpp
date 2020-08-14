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

string CPP_Class::basic_second()
{
    string a;
    vector<string> personal_qualities {"sanctimonious", "misanthrope", "chauvinist", "bellicose", "pugnacious", "virago", "sanguine", "cadaverous", "replete", "catalyst", "unconscionable",
        "aboveboard", "becoming", "cardinal", "errant", "beatific"};
    vector<string> thoughts {"immaterial", "scintillating", "checkered", "vicarious", "preemptive",
                             "disparate", "extenuating", "imponderable", "cogent"};
    vector<string> objects {"avarice", "pittance", "paucity", "animosity", "heyday",
                            "apex", "melee", "hodgepodge", "moment", "raft", "powwow", "junta"};
    vector<string> actions {"to check", "to start", "to stem", "to corroborate", "to flush",
                            "to wax", "to fleece", "to badger", "to exhort", "to ferret",
                            "to contrite", "to desecrate"};
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

string CPP_Class::basic_third()
{
    string a;
    vector<string> personal_qualities {"jocular", "avid", "obdurate", "fledgling", "stolid",
                                       "robust", "proponent", "malleable", "inclement", "endemic",
                                       "impermeable", "muted", "robust", "autonomous", "plodding",
                                       "malleable", "snide"};
    vector<string> thoughts {"disheartened", "raffish", "morose", "transitory", "archaic",
                             "appreciable", "incessant", "moot", "pithy", "elusive"};
    vector<string> objects {"dearth", "malady", "ascendancy", "fete", "ingenuity",
                            "boon", "ornate", "fete", "apprehension", "quandary"};
    vector<string> actions {"to patronize", "to advocate", "to guffaw", "to meander", "to flounder",
                            "to fete", "to thwart", "to consummate", "to resolve", "to discriminate",
                            "to impede", "to fete", "to degrade", "to deter", "to entice",
                            "to disenfranchise", "to renege"};
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

string CPP_Class::basic_fourth()
{
    string a;
    vector<string> personal_qualities {};
    vector<string> thoughts {};
    vector<string> objects {};
    vector<string> actions {};
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
