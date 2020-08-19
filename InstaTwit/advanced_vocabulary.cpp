//
//  Advanced_vocabulary.cpp
//  InstaTwit
//
//  Created by robot on 09/08/2020.
//  Copyright © 2020 Element 84, LLC. All rights reserved.
//

#include "advanced_vocabulary.hpp"
#include "extensions.hpp"
using namespace std;

string CXXClass::advanced_first()
{
    string sentence;
    vector<string> personal_qualities {"penurious", "indigent", "fractious", "sedulous", "jingoist",
                                       "choleric", "prosaic", "artless", "churlish", "apostate",
                                       "contentious", "lascivious", "supercilious", "chary", "pariah",
                                       "base", "saturnine", "ponderous", "perfunctory", "arrant",
                                       "truculent", "feckless", "overweening", "untoward", "catholic"};
    vector<string> thoughts {"byzantine", "expansive", "insufferable", "factious"};
    vector<string> objects {"alacrity", "malfeasance", "exegesis", "apogee", "nadir",
                            "vicissitude", "turpitude", "diatribe", "zeitgeist", "anathema"};
    vector<string> actions {"to defray", "to hector", "to kowtow", "to base", "to attenuate",
                            "to cow", "to imbibe", "to expunge", "to beg", "to conciliate",
                            "to equivocate", "to precipitate"};
    vector<string> :: iterator itr;
    vector<string> :: iterator jtr;
    vector<string> :: iterator ktr;
    vector<string> :: iterator ltr;
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string CXXClass::advanced_second()
{
    string sentence;
    vector<string> personal_qualities {"sybarite", "parvenu", "impecunious", "arriviste", "blinkered",
                                       "schadenfreude", "benighted", "martinet", "quisling", "bilious",
                                       "jejune", "protean", "curmudgeon", "pollyannaish", "quixotic",
                                       "mettlesome", "sartorial", "histrionic"};
    vector<string> thoughts {"maudlin", "venial", "fell", "picayune", "Pyrrhic",
                             "limpid", "factitious", "jaundiced", "phantasmagorical", "tendentious",
                             "invective", "sententious", "peremptory", "arch", "mellifluous"};
    vector<string> objects {"cupidity", "mulct", "sangfroid", "apotheosis", "juggernaut",
                            "palimpsest", "malapropism", "imbroglio"};
    vector<string> actions {"to hedge", "to propitiate", "to disabuse","to expurgate","to gerrymander",
                            "to excoriate", "to remonstrate", "to vituperate", "to execrate"};
    vector<string> :: iterator itr;
    vector<string> :: iterator jtr;
    vector<string> :: iterator ktr;
    vector<string> :: iterator ltr;
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}
