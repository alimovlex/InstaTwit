//
//  extensions.cpp
//  InstaTwit
//
//  Created by alimovlex on 26/08/2020.
//  Copyright (c) 2020 alimovlex. All rights reserved.
//

#include "extensions.hpp"

string sentence_shuffle(vector<string> &personal_qualities, vector<string> &thoughts, vector<string> &objects, vector<string> &actions)
{
    string speech;
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
                    speech ="I adore "+*ltr+ " as I'm "+*jtr+ " person and have " + *itr + " thoughts and ideas about "+*ktr+ ".";
    }
    return speech;
}

void dictionary_common()
{
    map<string,vector<string>> dictionary;
    dictionary ["common_first"]  = {"Aberration", "Restive", "Iconoclast", "Ambiguous", "Laconic",
        "Amalgam", "Profligate", "Qualify", "Chastise", "Impertinent",
        "Extant", "Venerate", "Harangue", "Venality", "Egregious",
        "Intimate", "Acrimony", "Calumny", "Ambivalent", "Undermine",
        "Veracious", "Parsimonious", "Auspicious", "Castigate", "Vindicate",
        "Innocuous", "Demur", "Mercurial", "Wanting", "Involved",
        "Galvanize", "Betray", "Maintain", "Censure", "Disinterested",
        "Equivocal", "Amorphous", "Amenable", "Belie", "Gregarious",
        "Parochial", "Prevaricate", "Enervate", "Commensurate", "Anomalous",
        "Ingenuous", "Frugal", "Upbraid", "Artful", "Prodigal"};
    
    dictionary ["common_second"] = {"Eschew", "Mitigate", "Prescience", "Perfidy", "Concede",
        "Vociferous", "Volubility", "Recondite", "Mawkish", "Frivolous",
        "Rustic", "Gainsay", "Obscure", "Incisive", "Reticent",
        "Impudent", "Banal", "Apathetic", "Superfluous", "Germane",
        "Gossamer", "Predilection", "Querulous", "Aesthete", "Engender",
        "Dogmatic", "Fortuitous", "Dictatorial", "Glut", "Didactic",
        "Decorous", "Audacious", "Preclude", "Entrenched", "Meticulous",
        "Inexorable", "Diffident", "Exacerbate", "Bucolic", "Chortle",
        "Deferential", "Gall", "Cryptic", "Culminate", "Platitude",
        "Torpor", "Lambaste", "Aesthetic", "Conspicuous", "Culpability"};
    
    dictionary ["common_third"] = {"Abstain", "Ameliorate", "Apathy", "Ascetic", "Avaricious",
        "Belligerent", "Circumvent", "Contrive", "Delineate", "Derivative",
        "Derive", "Disaffected", "Eclectic", "Elucidate", "Eminent",
        "Fallacious", "Forlorn", "Frustrate", "Guile", "Guileless",
        "Haughty", "Heretic", "Immutable", "Incongruous", "Insidious",
        "Itinerant", "Jingoism", "Jubilant", "Juxtapose", "Languid",
        "Magnanimous", "Mollify", "Negligible", "Panache", "Precocious",
        "Quotidian", "Refractory", "Spurious", "Staunch", "Subsume",
        "Supplant", "Tantamount", "Tenacious", "Travesty", "Treacherous",
        "Vehemence", "Vilify", "Rudimentary", "Unequivocal", "Denote"};
    
    dictionary ["common_fourth"] = {"Aberrant", "Abstruse", "Acerbic", "Adamant", "Admonitory",
        "Apocryphal", "Blatant", "Bumbling", "Burgeon", "Confound",
        "Construe", "Contingent", "Copious", "Decorum", "Denigrate",
        "Discrete", "Exalt", "Eradicate", "Espouse", "Exacting",
        "Pundit", "Exonerate", "Expound", "Forthcoming", "Hackneyed",
        "Iconoclastic", "Idiosyncrasy", "Ignoble", "Implacable", "Implausible",
        "Incorrigible", "Indifference", "Ingratiate", "Intransigent", "Largess",
        "Laudable", "Myopic", "Opaque", "Ostentatious", "Pedantic",
        "Pragmatic", "Provincial", "Reconcile", "Soporific", "Temperance",
        "Tortuous", "Underscore", "Unscrupulous", "Refute", "Petulant"};
    
    dictionary ["common_fifth"] = {"Accolade", "Admonish", "Antithetical", "Arcane", "Audacity",
        "Brazen", "Constituent", "Dilettante", "Foment", "Garrulous",
        "Haphazard", "Hegemony", "Inimical", "Inscrutable", "Insolent",
        "Intrepid", "Inveterate", "Irrevocable", "Munificent", "Obsequious",
        "Ostracize", "Pedestrian", "Pernicious", "Poignant", "Precipitous",
        "Prolific", "Propitious", "Ravenous", "Repudiate", "Rescind",
        "Resurgent", "Scrupulous", "Sporadic", "Subversive", "Sycophant",
        "Tempered", "Trite", "Winsome", "Reverent", "Vacillate",
        "Austere", "Gauche", "Taciturn", "Arbitrary", "Myriad",
        "Lionize", "Sanction", "Circumscribe", "Prodigious", "Tractable"};
    
    dictionary ["common_sixth"] = {"Arduous", "Askance", "Bolster", "Clumsy", "Contrition",
        "Craven", "Deleterious", "Duress", "Edifying", "Efficacious",
        "Elicit", "Flux", "Harried", "Ignominious", "Maladroit",
        "Maverick", "Mendacity", "Misconstrue", "Mundane", "Nonplussed",
        "Nuance", "Opulence", "Placate", "Posit", "Rebuke",
        "Specious", "Stringent", "Sullen", "Transient", "Fastidious",
        "Furtive", "Anomaly", "Timorous", "Pejorative", "Esoteric",
        "Imprudent", "Truncate", "Economical", "Dilatory", "Dispassionate",
        "Disseminate", "Jovial", "Capricious", "Polemic", "Reproach",
        "Impartial", "Indecorous", "Appease", "Erudite", "Banality"};
    
}

void dictionary_basic()
{
    map<string, vector<string>> dictionary;
    dictionary["basic_first"] = {"Indignant", "Acme", "Embroiled", "Indict", "Slapdash",
        "Demure", "Inundate", "Screed", "Macabre", "Inflammatory",
        "Voracious", "Remiss", "Peruse", "Insolvent", "Reprobate",
        "Dupe", "Pine", "Serendipity", "Affable", "Vindictive",
        "Telling", "Unnerve", "Profuse", "Bleak", "Summit",
        "Dog", "Amiable", "Thrifty", "Erratic", "Stipend",
        "Diabolical", "Candid", "Pinnacle", "Variance", "Tender",
        "Mesmerize", "Miser", "Underwrite", "Indigenous", "Err",
        "Retiring", "Hound", "Demean", "Telltale", "Thoroughgoing",
        "Spendthrift", "Tirade", "Censor", "Affluent", "Zenith"};
    
    dictionary["basic_second"] = {"Start", "Sanctimonious", "Avarice", "Catalyst", "Unconscionable",
        "Misanthrope", "Stem", "Aboveboard", "Heyday", "Immaterial",
        "Scintillating", "Badger", "Chauvinist", "Apex", "Corroborate",
        "Becoming", "Exhort", "Cardinal", "Errant", "Imponderable",
        "Bellicose", "Pugnacious", "Junta", "Pittance", "Check",
        "Desecrate", "Amuck", "Virago", "Melee", "Hodgepodge",
        "Animosity", "Checkered", "Cogent", "Ferret", "Moment",
        "Flush", "Replete", "Vicarious", "Powwow", "Contrite",
        "Beatific", "Preemptive", "Sanguine", "Cadaverous", "Disparate",
        "Raft", "Wax", "Extenuating", "Fleece", "Paucity"};
    
    dictionary["basic_third"] = {"Advocate", "Deter", "Thwart", "Boon", "Transitory",
        "Apprehension", "Renege", "Jocular", "Inclement", "Patronize",
        "Guffaw", "Avid", "Dearth", "Consummate", "Obdurate",
        "Moot", "Ornate", "Endemic", "Malady", "Archaic",
        "Resolve", "Disheartened", "Ascendancy", "Appreciable", "Impermeable",
        "Fledgling", "Stolid", "Raffish", "Discriminate", "Incessant",
        "Muted", "Robust", "Respite", "Impede", "Plodding",
        "Pithy", "Meander", "Morose", "Flounder", "Elusive",
        "Autonomously", "Quandary", "Fete", "Ingenuity", "Proponent",
        "Malleable", "Degrade", "Disenfranchise", "Snide", "Entice"};
    
    dictionary["basic_fourth"] = {"Altruism", "Genial", "Egotist", "Irresolute", "Pristine",
        "Contemptuous", "Perpetuate", "Jargon", "Spurn", "Precedent",
        "Impeccable", "Inadvertent", "Cornucopia", "Detrimental", "Fickle",
        "Unruly", "Lucid", "Smattering", "Perennial", "Elaborate",
        "Martial", "Illicit", "Glib", "Buck", "Vacuous",
        "Debase", "Grovel", "Urbane", "Hamstrung", "Benign",
        "Pertinent", "Sentimental", "Assuage", "Conducive", "Commendable",
        "Banish", "Genteel", "Surly", "Assail", "Empathetic",
        "Uncompromising", "Rankle", "Whimsical", "Euphoria", "Tawdry",
        "Augment", "Facetious", "Tumult", "Credence", "Derisive"};
    
    dictionary["basic_fifth"] = {"Retract", "Irk", "Presumption", "Foible", "Credulity",
        "Impending", "Tact", "Discord", "Brusquely", "Placid",
        "Destitute", "Tarnish", "Complacent", "Tout", "Connive",
        "Aphoristic", "Embellish", "Leery", "Derogative", "Goad",
        "Eke", "Rash", "Smug", "Savvy", "Travail",
        "Collusion", "Quip", "Exemplify", "Elude", "Devolve",
        "Pastoral", "Enmity", "Candidness", "Obstinate", "Convoluted",
        "Peevish", "Unseemly", "Serene", "Squander", "Unprecedented",
        "Impregnable", "Maxim", "Malevolent", "Steadfast", "Ploy",
        "Diligent", "Exasperate", "Perturb", "Reservation", "Taxing"};
    
    dictionary["basic_sixth"] = {"Redress", "Docile", "Incense", "Humdrum", "Eccentric",
        "Fawn", "Coalesce", "Preempt", "Ascribe", "Implicate",
        "Foolhardy", "Consecrate", "Veneer", "Evenhanded", "Tribulation",
        "Wanton", "Behoove", "Besmirch", "Conundrum", "Buttress",
        "Rakish", "Forthright", "Cohesive", "Rile", "Incumbent",
        "Presumptuous", "Clemency", "Emulate", "Finagle", "Begrudge",
        "Cavalier", "Lethargic", "Antedate", "Analogous", "Insipid",
        "Profusion", "Delegate", "Industrious", "Cerebral", "Precarious",
        "Prevail", "Deride", "Avert", "Uncanny", "Glean",
        "Melancholy", "Belittle", "Intermittent", "Piquant", "Irascible"};
    
    dictionary["basic_seventh"] = {"Discreet", "Hamper", "Dilapidated", "Laborious", "Cumbersome",
        "Miscreant", "Besiege", "Debunk", "Enumerate", "Abysmal",
        "Evasive", "Compound", "Antiquated", "Malodorous", "Complementary",
        "Carping", "Morph", "Stymie", "Futile", "Deliberate",
        "Qualm", "Vie", "Obliging", "Constraint", "Inkling",
        "Paradoxical", "Vanquish", "Convivial", "Excruciating", "Resignation",
        "Creditable", "Misogynist", "Colossal", "Balk", "Perquisite",
        "Provisional", "Chivalrous", "Decimation", "Champion", "Cosmopolitan",
        "Differentiate", "Boorish", "Sordid", "Staid", "Snub",
        "Aphorism", "Inarticulate", "Relegate", "Dispatch", "Amply"};
    
}

void dictionary_advanced()
{
    map<string, vector<string>> dictionary;
    dictionary["advanced_first"] = {"Beg", "Conciliate", "Fractious", "Sedulous", "Apogee",
        "Jingoist", "Choleric", "Penurious", "Hector", "Attenuate",
        "Catholic", "Turpitude", "Prosaic", "Diatribe", "Nadir",
        "Vicissitude", "Artless", "Churlish", "Alacrity", "Apostate",
        "Cow", "Contentious", "Lascivious", "Indigent", "Zeitgeist",
        "Supercilious", "Anathema", "Chary", "Equivocate", "Malfeasance",
        "Byzantine", "Pariah", "Kowtow", "Base", "Expansive",
        "Imbibe", "Untoward", "Exegesis", "Saturnine", "Insufferable",
        "Ponderous", "Perfunctory", "Arrant", "Factious", "Truculent",
        "Feckless", "Expunge", "Defray", "Overweening", "Precipitate"};
    
    dictionary["advanced_second"] = {"Jaundiced", "Phantasmagorical", "Blinkered", "Tendentious", "Sybarite",
        "Gerrymander", "Invective", "Apotheosis", "Excoriate", "Malapropism",
        "Schadenfreude", "Benighted", "Parvenu", "Sartorial", "Histrionic",
        "Remonstrate", "Cupidity", "Sangfroid", "Maudlin", "Sententious",
        "Propitiate", "Vituperate", "Peremptory", "Martinet", "Execrate",
        "Impecunious", "Juggernaut", "Arch", "Imbroglio", "Hedge",
        "Quisling", "Venial", "Fell", "Arriviste", "Mellifluous",
        "Bilious", "Jejune", "Mulct", "Protean", "Disabuse",
        "Palimpsest", "Curmudgeon", "Pollyannaish", "Quixotic", "Mettlesome",
        "Picayune", "Pyrrhic", "Expurgate", "Limpid", "Factitious"};
    
    dictionary["advanced_third"] = {"Perspicacious", "Litany", "Prolixity", "Solecism", "Semblance",
        "Importune", "Probity", "Vitriolic", "Plucky", "Bowdlerize",
        "Punctilious", "Quail", "Unforthcoming", "Umbrage", "Enthrall",
        "Epiphany", "Mordant", "Portentous", "Maunder", "Duplicity",
        "Artlessness", "Lugubrious", "Anodyne", "Enjoin", "Effrontery",
        "Raconteur", "Pecuniary", "Redoubtable", "Hagiographic", "Moribund",
        "Lampoon", "Cede", "Grandiloquent", "Gaffe", "Charlatan",
        "Sinecure", "Temerity", "Insouciance", "Derelict", "Approbatory",
        "Recapitulation", "Anemic", "Provident", "Hail", "Impute",
        "Flummox", "Prognostication", "Sagacious", "Primacy", "Illustrious"};
    
    dictionary["advanced_fourth"] = {"Lacerate", "Subterfuge", "Unpropitious", "Stalwart", "Nonchalant",
        "Inviolate", "Peripatetic", "Rarefied", "Puissant", "Flippant",
        "Encumber", "Incontrovertible", "Hobble", "Patent", "Invidious",
        "Machinate", "Imperious", "Obstreperous", "Spartan", "Unviable",
        "Ossify", "Hubris", "Equitable", "Denouement", "Firebrand",
        "Ribald", "Apposite", "Puerile", "Inure", "Dispensation",
        "Dovetail", "Surreptitious", "Irrefutable", "Impetuous", "Presentiment",
        "Cosseted", "Decry", "Unflappable", "Magisterial", "Asperity",
        "Crestfallen", "Immure", "Crystallize", "Untenable", "Recrimination",
        "Celerity", "Tempestuous", "Improvident", "Corollary", "Intimation"};
    
    dictionary["advanced_fifth"] = {"Browbeat", "Inanity", "Effervescent", "Ersatz", "Apothegm",
        "Arrogate", "Atavism", "Vitriol", "Unprepossessing", "Besotted",
        "Artifice", "Hoary", "Meteoric", "Reprisal", "Empiricism",
        "Gambit", "Anachronism", "Philistine", "Epigram", "Paragon",
        "Pith", "Deign", "Disingenuous", "Untrammeled", "Phlegmatic",
        "Doleful", "Percipient", "Exemplar", "Solicitude", "Truculence",
        "Appurtenant", "Squelch", "Bemoan", "Ineffable", "Inchoate",
        "Languish", "Baleful", "Recrudesce", "Objurgate", "Unstinting",
        "Debonair", "Antic", "Embryonic", "Nettlesome", "Broadside",
        "Rapprochement", "Brook", "Bristle", "Chagrin", "Chimera"};
    
    dictionary["advanced_sixth"] = {"Panegyric", "Gumption", "Bromide", "Coterminous", "Enormity",
        "Pontificate", "Transmute", "Bridle", "Impervious", "Ethereal",
        "Inviolable", "Vaunted", "Inequity", "Autocratic", "Tyro",
        "Stultify", "Complicit", "Noisome", "Afford", "Elegiac",
        "Malingerer", "Abjure", "Pellucid", "Facile", "Impugn",
        "Conflate", "Complaisant", "Unimpeachable", "Discursive", "Internecine",
        "Callow", "Dolorous", "Desideratum", "Assiduously", "Proscribe",
        "Obtuse", "Desiccated", "Appropriate", "Fecund", "Aplomb",
        "Conflagration", "Hauteur", "Unassailable", "Mendicant", "Doughty",
        "Proselytize", "Solicitous", "Palatable", "Self-effacing", "Turgid"};
    
    dictionary["advanced_seventh"] = {"Trenchant", "Extrapolate", "Evanescent", "Row", "Exiguity",
        "Obtain", "Bastardization", "Concomitant", "Modicum", "Veritable",
        "Pillory", "Bereft", "Enamored", "Halcyon", "Capitulate",
        "Chauvinism", "Demonstrative", "Officious", "Infelicitous", "Diminutive",
        "Hoodwink", "Adjudicate", "Graft", "Dissemble", "Panacea",
        "Raillery", "Oblique", "Cataclysm", "Palaver", "Lachrymose",
        "Abrogate", "Dissolution", "Countermand", "Loath", "Dissipate",
        "Misattribute", "Ineluctable", "Despot", "Surfeit", "Simulacrum",
        "Verisimilitude", "Sardonic", "Exorbitant", "Splenetic", "Ebullient",
        "Flag", "Promulgate", "Eponym", "Canard", "Estimable"};
}

int vocabulary()
{
    string search;
    vector<string> vocab {"Aberration", "Restive", "Iconoclast", "Ambiguous", "Laconic",
        "Amalgam", "Profligate", "Qualify", "Chastise", "Impertinent",
        "Extant", "Venerate", "Harangue", "Venality", "Egregious",
        "Intimate", "Acrimony", "Calumny", "Ambivalent", "Undermine",
        "Veracious", "Parsimonious", "Auspicious", "Castigate", "Vindicate",
        "Innocuous", "Demur", "Mercurial", "Wanting", "Involved",
        "Galvanize", "Betray", "Maintain", "Censure", "Disinterested",
        "Equivocal", "Amorphous", "Amenable", "Belie", "Gregarious",
        "Parochial", "Prevaricate", "Enervate", "Commensurate", "Anomalous",
        "Ingenuous", "Frugal", "Upbraid", "Artful", "Prodigal",
        "Eschew", "Mitigate", "Prescience", "Perfidy", "Concede",
        "Vociferous", "Volubility", "Recondite", "Mawkish", "Frivolous",
        "Rustic", "Gainsay", "Obscure", "Incisive", "Reticent",
        "Impudent", "Banal", "Apathetic", "Superfluous", "Germane",
        "Gossamer", "Predilection", "Querulous", "Aesthete", "Engender",
        "Dogmatic", "Fortuitous", "Dictatorial", "Glut", "Didactic",
        "Decorous", "Audacious", "Preclude", "Entrenched", "Meticulous",
        "Inexorable", "Diffident", "Exacerbate", "Bucolic", "Chortle",
        "Deferential", "Gall", "Cryptic", "Culminate", "Platitude",
        "Torpor", "Lambast", "Aesthetic", "Conspicuous", "Culpability",
        "Abstain", "Ameliorate", "Apathy", "Ascetic", "Avaricious",
        "Belligerent", "Circumvent", "Contrive", "Delineate", "Derivative",
        "Derive", "Disaffected", "Eclectic", "Elucidate", "Eminent",
        "Fallacious", "Forlorn", "Frustrate", "Guile", "Guileless",
        "Haughty", "Heretic", "Immutable", "Incongruous", "Insidious",
        "Itinerant", "Jingoism", "Jubilant", "Juxtapose", "Languid",
        "Magnanimous", "Mollify", "Negligible", "Panache", "Precocious",
        "Quotidian", "Refractory", "Spurious", "Staunch", "Subsume",
        "Supplant", "Tantamount", "Tenacious", "Travesty", "Treacherous",
        "Vehemence", "Vilify", "Rudimentary", "Unequivocal", "Denote",
        "Aberrant", "Abstruse", "Acerbic", "Adamant", "Admonitory",
        "Apocryphal", "Blatant", "Bumbling", "Burgeon", "Confound",
        "Construe", "Contingent", "Copious", "Decorum", "Denigrate",
        "Discrete", "Exalt", "Eradicate", "Espouse", "Exacting",
        "Pundit", "Exonerate", "Expound", "Forthcoming", "Hackneyed",
        "Iconoclastic", "Idiosyncrasy", "Ignoble", "Implacable", "Implausible",
        "Incorrigible", "Indifference", "Ingratiate", "Intransigent", "Largess",
        "Laudable", "Myopic", "Opaque", "Ostentatious", "Pedantic",
        "Pragmatic", "Provincial", "Reconcile", "Soporific", "Temperance",
        "Tortuous", "Underscore", "Unscrupulous", "Refute", "Petulant",
        "Accolade", "Admonish", "Antithetical", "Arcane", "Audacity",
        "Brazen", "Constituent", "Dilettante", "Foment", "Garrulous",
        "Haphazard", "Hegemony", "Inimical", "Inscrutable", "Insolent",
        "Intrepid", "Inveterate", "Irrevocable", "Munificent", "Obsequious",
        "Ostracize", "Pedestrian", "Pernicious", "Poignant", "Precipitous",
        "Prolific", "Propitious", "Ravenous", "Repudiate", "Rescind",
        "Resurgent", "Scrupulous", "Sporadic", "Subversive", "Sycophant",
        "Tempered", "Trite", "Winsome", "Reverent", "Vacillate",
        "Austere", "Gauche", "Taciturn", "Arbitrary", "Myriad",
        "Lionize", "Sanction", "Circumscribe", "Prodigious", "Tractable",
        "Arduous", "Askance", "Bolster", "Clumsy", "Contrition",
        "Craven", "Deleterious", "Duress", "Edifying", "Efficacious",
        "Elicit", "Flux", "Harried", "Ignominious", "Maladroit",
        "Maverick", "Mendacity", "Misconstrue", "Mundane", "Nonplussed",
        "Nuance", "Opulence", "Placate", "Posit", "Rebuke",
        "Specious", "Stringent", "Sullen", "Transient", "Fastidious",
        "Furtive", "Anomaly", "Timorous", "Pejorative", "Esoteric",
        "Imprudent", "Truncate", "Economical", "Dilatory", "Dispassionate",
        "Disseminate", "Jovial", "Capricious", "Polemic", "Reproach",
        "Impartial", "Indecorous", "Appease", "Erudite", "Banality",
        "Indignant", "Acme", "Embroiled", "Indict", "Slapdash",
        "Demure", "Inundate", "Screed", "Macabre", "Inflammatory",
        "Voracious", "Remiss", "Peruse", "Insolvent", "Reprobate",
        "Dupe", "Pine", "Serendipity", "Affable", "Vindictive",
        "Telling", "Unnerve", "Profuse", "Bleak", "Summit",
        "Dog", "Amiable", "Thrifty", "Erratic", "Stipend",
        "Diabolical", "Candid", "Pinnacle", "Variance", "Tender",
        "Mesmerize", "Miser", "Underwrite", "Indigenous", "Err",
        "Retiring", "Hound", "Demean", "Telltale", "Thoroughgoing",
        "Spendthrift", "Tirade", "Censor", "Affluent", "Zenith",
        "Start", "Sanctimonious", "Avarice", "Catalyst", "Unconscionable",
        "Misanthrope", "Stem", "Aboveboard", "Heyday", "Immaterial",
        "Scintillating", "Badger", "Chauvinist", "Apex", "Corroborate",
        "Becoming", "Exhort", "Cardinal", "Errant", "Imponderable",
        "Bellicose", "Pugnacious", "Junta", "Pittance", "Check",
        "Desecrate", "Amuck", "Virago", "Melee", "Hodgepodge",
        "Animosity", "Checkered", "Cogent", "Ferret", "Moment",
        "Flush", "Replete", "Vicarious", "Powwow", "Contrite",
        "Beatific", "Preemptive", "Sanguine", "Cadaverous", "Disparate",
        "Raft", "Wax", "Extenuating", "Fleece", "Paucity",
        "Advocate", "Deter", "Thwart", "Boon", "Transitory",
        "Apprehension", "Renege", "Jocular", "Inclement", "Patronize",
        "Guffaw", "Avid", "Dearth", "Consummate", "Obdurate",
        "Moot", "Ornate", "Endemic", "Malady", "Archaic",
        "Resolve", "Disheartened", "Ascendancy", "Appreciable", "Impermeable",
        "Fledgling", "Stolid", "Raffish", "Discriminate", "Incessant",
        "Muted", "Robust", "Respite", "Impede", "Plodding",
        "Pithy", "Meander", "Morose", "Flounder", "Elusive",
        "Autonomously", "Quandary", "Fete", "Ingenuity", "Proponent",
        "Malleable", "Degrade", "Disenfranchise", "Snide", "Entice",
        "Altruism", "Genial", "Egotist", "Irresolute", "Pristine",
        "Contemptuous", "Perpetuate", "Jargon", "Spurn", "Precedent",
        "Impeccable", "Inadvertent", "Cornucopia", "Detrimental", "Fickle",
        "Unruly", "Lucid", "Smattering", "Perennial", "Elaborate",
        "Martial", "Illicit", "Glib", "Buck", "Vacuous",
        "Debase", "Grovel", "Urbane", "Hamstrung", "Benign",
        "Pertinent", "Sentimental", "Assuage", "Conducive", "Commendable",
        "Banish", "Genteel", "Surly", "Assail", "Empathetic",
        "Uncompromising", "Rankle", "Whimsical", "Euphoria", "Tawdry",
        "Augment", "Facetious", "Tumult", "Credence", "Derisive",
        "Retract", "Irk", "Presumption", "Foible", "Credulity",
        "Impending", "Tact", "Discord", "Brusquely", "Placid",
        "Destitute", "Tarnish", "Complacent", "Tout", "Connive",
        "Aphoristic", "Embellish", "Leery", "Derogative", "Goad",
        "Eke", "Rash", "Smug", "Savvy", "Travail",
        "Collusion", "Quip", "Exemplify", "Elude", "Devolve",
        "Pastoral", "Enmity", "Candidness", "Obstinate", "Convoluted",
        "Peevish", "Unseemly", "Serene", "Squander", "Unprecedented",
        "Impregnable", "Maxim", "Malevolent", "Steadfast", "Ploy",
        "Diligent", "Exasperate", "Perturb", "Reservation", "Taxing",
        "Redress", "Docile", "Incense", "Humdrum", "Eccentric",
        "Fawn", "Coalesce", "Preempt", "Ascribe", "Implicate",
        "Foolhardy", "Consecrate", "Veneer", "Evenhanded", "Tribulation",
        "Wanton", "Behoove", "Besmirch", "Conundrum", "Buttress",
        "Rakish", "Forthright", "Cohesive", "Rile", "Incumbent",
        "Presumptuous", "Clemency", "Emulate", "Finagle", "Begrudge",
        "Cavalier", "Lethargic", "Antedate", "Analogous", "Insipid",
        "Profusion", "Delegate", "Industrious", "Cerebral", "Precarious",
        "Prevail", "Deride", "Avert", "Uncanny", "Glean",
        "Melancholy", "Belittle", "Intermittent", "Piquant", "Irascible",
        "Discreet", "Hamper", "Dilapidated", "Laborious", "Cumbersome",
        "Miscreant", "Besiege", "Debunk", "Enumerate", "Abysmal",
        "Evasive", "Compound", "Antiquated", "Malodorous", "Complementary",
        "Carping", "Morph", "Stymie", "Futile", "Deliberate",
        "Qualm", "Vie", "Obliging", "Constraint", "Inkling",
        "Paradoxical", "Vanquish", "Convivial", "Excruciating", "Resignation",
        "Creditable", "Misogynist", "Colossal", "Balk", "Perquisite",
        "Provisional", "Chivalrous", "Decimation", "Champion", "Cosmopolitan",
        "Differentiate", "Boorish", "Sordid", "Staid", "Snub",
        "Aphorism", "Inarticulate", "Relegate", "Dispatch", "Amply",
        "Beg", "Conciliate", "Fractious", "Sedulous", "Apogee",
        "Jingoist", "Choleric", "Penurious", "Hector", "Attenuate",
        "Catholic", "Turpitude", "Prosaic", "Diatribe", "Nadir",
        "Vicissitude", "Artless", "Churlish", "Alacrity", "Apostate",
        "Cow", "Contentious", "Lascivious", "Indigent", "Zeitgeist",
        "Supercilious", "Anathema", "Chary", "Equivocate", "Malfeasance",
        "Byzantine", "Pariah", "Kowtow", "Base", "Expansive",
        "Imbibe", "Untoward", "Exegesis", "Saturnine", "Insufferable",
        "Ponderous", "Perfunctory", "Arrant", "Factious", "Truculent",
        "Feckless", "Expunge", "Defray", "Overweening", "Precipitate",
        "Jaundiced", "Phantasmagorical", "Blinkered", "Tendentious", "Sybarite",
        "Gerrymander", "Invective", "Apotheosis", "Excoriate", "Malapropism",
        "Schadenfreude", "Benighted", "Parvenu", "Sartorial", "Histrionic",
        "Remonstrate", "Cupidity", "Sangfroid", "Maudlin", "Sententious",
        "Propitiate", "Vituperate", "Peremptory", "Martinet", "Execrate",
        "Impecunious", "Juggernaut", "Arch", "Imbroglio", "Hedge",
        "Quisling", "Venial", "Fell", "Arriviste", "Mellifluous",
        "Bilious", "Jejune", "Mulct", "Protean", "Disabuse",
        "Palimpsest", "Curmudgeon", "Pollyannaish", "Quixotic", "Mettlesome",
        "Picayune", "Pyrrhic", "Expurgate", "Limpid", "Factitious",
        "Perspicacious", "Litany", "Prolixity", "Solecism", "Semblance",
        "Importune", "Probity", "Vitriolic", "Plucky", "Bowdlerize",
        "Punctilious", "Quail", "Unforthcoming", "Umbrage", "Enthrall",
        "Epiphany", "Mordant", "Portentous", "Maunder", "Duplicity",
        "Artlessness", "Lugubrious", "Anodyne", "Enjoin", "Effrontery",
        "Raconteur", "Pecuniary", "Redoubtable", "Hagiographic", "Moribund",
        "Lampoon", "Cede", "Grandiloquent", "Gaffe", "Charlatan",
        "Sinecure", "Temerity", "Insouciance", "Derelict", "Approbatory",
        "Recapitulation", "Anemic", "Provident", "Hail", "Impute",
        "Flummox", "Prognostication", "Sagacious", "Primacy", "Illustrious",
        "Lacerate", "Subterfuge", "Unpropitious", "Stalwart", "Nonchalant",
        "Inviolate", "Peripatetic", "Rarefied", "Puissant", "Flippant",
        "Encumber", "Incontrovertible", "Hobble", "Patent", "Invidious",
        "Machinate", "Imperious", "Obstreperous", "Spartan", "Unviable",
        "Ossify", "Hubris", "Equitable", "Denouement", "Firebrand",
        "Ribald", "Apposite", "Puerile", "Inure", "Dispensation",
        "Dovetail", "Surreptitious", "Irrefutable", "Impetuous", "Presentiment",
        "Cosseted", "Decry", "Unflappable", "Magisterial", "Asperity",
        "Crestfallen", "Immure", "Crystallize", "Untenable", "Recrimination",
        "Celerity", "Tempestuous", "Improvident", "Corollary", "Intimation",
        "Browbeat", "Inanity", "Effervescent", "Ersatz", "Apothegm",
        "Arrogate", "Atavism", "Vitriol", "Unprepossessing", "Besotted",
        "Artifice", "Hoary", "Meteoric", "Reprisal", "Empiricism",
        "Gambit", "Anachronism", "Philistine", "Epigram", "Paragon",
        "Pith", "Deign", "Disingenuous", "Untrammeled", "Phlegmatic",
        "Doleful", "Percipient", "Exemplar", "Solicitude", "Truculence",
        "Appurtenant", "Squelch", "Bemoan", "Ineffable", "Inchoate",
        "Languish", "Baleful", "Recrudesce", "Objurgate", "Unstinting",
        "Debonair", "Antic", "Embryonic", "Nettlesome", "Broadside",
        "Rapprochement", "Brook", "Bristle", "Chagrin", "Chimera",
        "Panegyric", "Gumption", "Bromide", "Coterminous", "Enormity",
        "Pontificate", "Transmute", "Bridle", "Impervious", "Ethereal",
        "Inviolable", "Vaunted", "Inequity", "Autocratic", "Tyro",
        "Stultify", "Complicit", "Noisome", "Afford", "Elegiac",
        "Malingerer", "Abjure", "Pellucid", "Facile", "Impugn",
        "Conflate", "Complaisant", "Unimpeachable", "Discursive", "Internecine",
        "Callow", "Dolorous", "Desideratum", "Assiduously", "Proscribe",
        "Obtuse", "Desiccated", "Appropriate", "Fecund", "Aplomb",
        "Conflagration", "Hauteur", "Unassailable", "Mendicant", "Doughty",
        "Proselytize", "Solicitous", "Palatable", "Self-effacing", "Turgid",
        "Trenchant", "Extrapolate", "Evanescent", "Row", "Exiguity",
        "Obtain", "Bastardization", "Concomitant", "Modicum", "Veritable",
        "Pillory", "Bereft", "Enamored", "Halcyon", "Capitulate",
        "Chauvinism", "Demonstrative", "Officious", "Infelicitous", "Diminutive",
        "Hoodwink", "Adjudicate", "Graft", "Dissemble", "Panacea",
        "Raillery", "Oblique", "Cataclysm", "Palaver", "Lachrymose",
        "Abrogate", "Dissolution", "Countermand", "Loath", "Dissipate",
        "Misattribute", "Ineluctable", "Despot", "Surfeit", "Simulacrum",
        "Verisimilitude", "Sardonic", "Exorbitant", "Splenetic", "Ebullient",
        "Flag", "Promulgate", "Eponym", "Canard", "Estimable"};
    
    cout<<"Please enter the desired part of the word "<<endl;
    cin>>search;
    find(vocab.begin(), vocab.end(), search) != vocab.end() ? cout << "Element found\n" : cout << "\nElement not found"<<endl;
    return 0;
}
