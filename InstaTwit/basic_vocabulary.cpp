//
//  Basic_vocabulary.cpp
//  InstaTwit
//
//  Created by robot on 09/08/2020.
//  Copyright © 2020 Element 84, LLC. All rights reserved.
//

#include "basic_vocabulary.hpp"
#include "extensions.hpp"
using namespace std;

string CPP_Class::basic_first()
{
    string sentence;
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
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string CPP_Class::basic_second()
{
    string sentence;
    vector<string> personal_qualities {"sanctimonious", "misanthrope", "chauvinist", "bellicose", "pugnacious", "virago", "sanguine", "cadaverous", "replete", "catalyst", "unconscionable",
        "aboveboard", "becoming", "cardinal", "errant", "beatific"};
    vector<string> thoughts {"immaterial", "scintillating", "checkered", "vicarious", "preemptive",
                             "disparate", "extenuating", "imponderable", "cogent"};
    vector<string> objects {"avarice", "pittance", "paucity", "animosity", "heyday",
                            "apex", "melee", "hodgepodge", "moment", "raft", "powwow", "junta"};
    vector<string> actions {"to check", "to start", "to stem", "to corroborate", "to flush",
                            "to wax", "to fleece", "to badger", "to exhort", "to ferret",
                            "to contrite", "to desecrate"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string CPP_Class::basic_third()
{
    string sentence;
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
    
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    return sentence;
}

string CPP_Class::basic_fourth()
{
    string sentence;
    vector<string> personal_qualities {"genial", "egotist", "irresolute", "contemptous", "fickle",
                                       "glib", "urbane", "benign", "sentimental", "genteel",
                                       "surly", "empathetic", "uncompromising", "whimsical", "tawdry",
                                       "pristine", "impeccable", "unruly", "martial"};
    vector<string> thoughts {"impeccable", "derisive", "inadvertent", "detrimental", "perennial",
                             "vacuous", "pertinent", "conducive", "commendable", "lucid",
                             "facetious", "illicit"};
    vector<string> objects {"cornucopia", "smattering", "altruism", "precedent", "jargon",
                            "euphoria", "tumult", "credence"};
    vector<string> actions {"to buck", "to augment", "to grovel", "to hamstring", "to assuage",
                            "to perpetuate", "to elaborate", "to buck", "to rankle", "to spurn",
                            "to debase", "to banish", "to assail"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}
