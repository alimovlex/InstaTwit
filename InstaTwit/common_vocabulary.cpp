//
//  Tutorial.cpp
//  InstaTwit
//
//  Created by alimovlex on 12/06/2020.
//  Copyright © 2020 Element 84, LLC. All rights reserved.
//

#include "common_vocabulary.hpp"
#include "extensions.hpp"
using namespace std;

string CPPClass::common_first()
{
    string sentence;
    vector<string> personal_qualities {"restive", "impertinent", "egregious", "veracious", "mercurial",
                             "amenable", "gregarious", "parochial", "ingenious", "artful",
                             "involved", "disinterested", "frugal", "parsimonious", "iconoclast"};
    vector<string> thoughts {"ambiguous", "laconic", "vindicated", "equivocal", "anomalous",
                             "innocuous", "amorphous"};
    vector<string> objects {"amalgam", "harangue", "aberration", "venality", "calumny", "acrimony"};
    vector<string> actions {"to venerate", "to betray", "to galvanize", "to demur", "to maintain",
                        "to enervate", "to intimate", "to undermine", "to vindicate", "to belie",
                        "to prevaricate", "to profligate", "to censure", "to upbraid", "to chastise",
                        "to castigate"};
    
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string CPPClass::common_second()
{
    string sentence;
    vector<string> personal_qualities {"rustic", "impudent", "apathetic", "frivolous", "reticent",
                                    "dogmatic", "dictatorial", "didactic", "decorous", "audacious",
                                    "meticulous", "inexorable", "diffident", "deferential", "fortuitous",
                                    "entrenched", "aesthetic"};
    vector<string> thoughts {"vociferous", "banal", "superfluous", "germane", "bucolic",
                             "recondite", "mawkish", "obscure", "incisive", "cryptic",
                             "conspicuous"};
    vector<string> objects {"perfidy", "volubility", "aesthetics", "chortle", "gall",
                            "torpor", "predilection", "glut", "prescience", "culpability"};
    vector<string> actions {"to eschew", "to mitigate", "to engender", "to preclude", "to culminate",
                            "to concede", "to gainsay", "to exacerbate", "to lambast"};
    
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string CPPClass::common_third()
{
    string sentence;
    vector<string> personal_qualities {"ascetic", "avaricious", "belligerent", "disaffected", "eminent",
                                       "forlorn", "guileless", "haughty", "itinerant", "magnanimous",
                                    "precocious", "refractory", "tenacious", "treacherous", "insidious",
                                    "languid", "heretic"};
    vector<string> thoughts {"elucidated", "fallacious", "spurious", "unequivocal", "eclectic",
                             "immutable", "negligible", "quotidian"};
    vector<string> objects {"tantamount", "apathy", "incongruity", "jingoism", "jubilant",
                            "travesty", "guile", "panache", "vehemence", "rudiments"};
    vector<string> actions {"to abstain", "to circumvent", "to frustrate", "to juxtapose", "to mollify",
                            "to vilify", "to ameliorate", "to contrive", "to delineate", "to derive",
                            "to elucidate", "to staunch", "to subsume", "to supplant", "to denote"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string CPPClass::common_fourth()
{
    string sentence;
    vector<string> personal_qualities {"Largess", "adamant", "bumbling", "exacting", "pundit",
                                "forthcoming", "ignoble", "implacable", "incorrigible", "intransigent",
                                "myopic", "ostentatious", "pedantic", "pragmatic", "provincial",
                                "unscrupulous", "petulant", "implausible", "discrete", "iconoclastic"};
    vector<string> thoughts {"abstruse", "acerbic", "blatant", "opaque", "apocryphal",
                             "aberrant", "copious", "hackneyed", "soporific", "tortuous"};
    vector<string> objects {"decorum", "idiosyncracy", "indifference", "admonitory", "contingent"};
    vector<string> actions {"to construe", "to confound", "to exalt", "to espouse", "to exonerate",
                            "to ingratiate", "to expound", "to underscore", "to refute", "to burgeon",
                            "to eradicate", "to denigrate"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string CPPClass::common_fifth()
{
    string sentence;
    vector<string> personal_qualities {"dilettante", "garrulous", "insolent", "intrepid", "inveterate",
                                       "munificent", "obsequious", "pedestrian", "prolific", "ravenous",
                                       "subversive", "sycophant", "tempered", "brazen", "arbitrary",
                                       "winsome", "reverent", "austere", "taciturn", "tractable",
            "inimical", "resurgent", "trite", "prodigious", "constituent", "precipitous"};
    vector<string> thoughts {"inscrutable", "antithetical", "propitious", "myriad", "sporadic",
                             "pernicious", "poignant", "haphazard", "irrevocable"};
    vector<string> objects {"accolade", "audacity", "arcane", "hegemony", "sanction", "gauche"};
    vector<string> actions {"to ostracize", "to lionize", "to vacillate", "to admonish", "to foment",
                            "to repudiate", "to rescind", "to circumscribe"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}

string CPPClass::common_sixth()
{
    string sentence;
    vector<string> personal_qualities {"clumsy", "craven", "harried", "maladroit", "maverick",
                                       "fastidious", "timorous", "pejorative", "imprudent", "economical",
                                       "dispassionate", "jovial", "capricious", "impartial", "erudite",
                            "sullen", "efficacious", "stringent", "furtive", "indecorous", "dilatory"};
    vector<string> thoughts {"edifying", "esoteric", "nonplussed", "specious", "arduous",
                             "deleterious", "flux", "ignominious", "mundane", "transient"};
    vector<string> objects {"contrition", "polemic", "mendacity", "duress", "nuance",
                            "opulence", "anomaly", "banality"};
    vector<string> actions {"to bolster", "to placate", "to posit", "to disseminate", "to elicit",
                            "to rebuke", "to reproach", "to truncate"};
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}
