//
//  Basic_vocabulary.cpp
//  InstaTwit
//
//  Created by alimovlex on 26/08/2020.
//  Copyright (c) 2020 alimovlex. All rights reserved.
//

#include "basic_vocabulary.hpp"
#include "extensions.hpp"
using namespace std;

string BasicVocabulary::basic_first()
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

string BasicVocabulary::basic_second()
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

string BasicVocabulary::basic_third()
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

string BasicVocabulary::basic_fourth()
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

string BasicVocabulary::basic_fifth()
{
    string sentence;
    vector<string> personal_qualities {"complacent", "leery", "smug", "savvy", "obstinate",
                                       "peevish", "serene", "malevolent", "steadfast", "diligent",
                                       "placid", "impregnable"};
    vector<string> thoughts {"impending", "pastoral", "convoluted", "unseemly", "unprecedented",
                             "taxing", "aphoristic", "derogative"};
    vector<string> objects {"destitute", "foible", "tact", "rash", "ploy",
                            "reservation", "presumption", "credulity", "discord", "quip",
                            "candidness", "maxim", "collusion", "enmity"};
    vector<string> actions {"to eke out", "to squander", "to tout", "to travail", "to retract",
                            "to tarnish", "to embellish", "to goad", "to discord", "to exemplify",
                            "to elude", "to connive", "to devolve", "to exasperate", "to perturb",
                            "to irk"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string BasicVocabulary::basic_sixth()
{
    string sentence;
    vector<string> personal_qualities {"docile", "eccentic", "foolhardy", "rakish", "forthright",
                                       "presumptous", "cavalier", "industrious", "cerebral", "piquant",
                                       "irascible", "precarious", "uncanny", "lethargic", "incumbent"};
    vector<string> thoughts {"humdrum", "wanton", "cohesive", "analogous", "insipid",
                             "intermittent", "evenhanded"};
    vector<string> objects {"redress", "profusion", "veneer", "conundrum", "clemency",
                            "melancholy", "tribulation"};
    vector<string> actions {"to redress", "to coalesce", "to emulate", "to delegate", "to preempt",
                            "to implicate", "to concentrate", "to behoove", "to buttress", "to antedate",
                            "to glean", "to ascribe", "to deride", "to besmirch", "to incense",
                            "to fawn", "to rile", "to finagle", "to begrudge", "to belittle"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string BasicVocabulary::basic_seventh()
{
    string sentence;
    vector<string> personal_qualities {"discreet", "miscreant", "evasive", "carping", "obliging",
                                       "convivial", "chivalrous", "champion", "cosmopolitan", "boorish",
                                       "sordid", "cumbersome", "inarticulate"};
    vector<string> thoughts {"colossal", "dilapidated", "laborious", "antiquated", "malodorous",
                             "complementary", "futile", "constraint", "paradoxical", "excruciating",
                             "creditable", "provisional", "staid", "evasive"};
    vector<string> objects {"abysmal", "resignation", "decimation", "qualm", "inkling",
                            "aphorism", "perquisite"};
    vector<string> actions {"to vie", "to hamper", "to besiege", "to enumerate", "to compound",
                            "to morph", "to stymie", "to differentiate", "to dispatch", "to debunk",
                            "to deliberate", "to vanquish", "to balk", "to snub", "to relegate"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

