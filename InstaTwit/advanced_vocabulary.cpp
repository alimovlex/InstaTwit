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
    vector<string> personal_qualities {};
    vector<string> thoughts {};
    vector<string> objects {};
    vector<string> actions {};
    vector<string> :: iterator itr;
    vector<string> :: iterator jtr;
    vector<string> :: iterator ktr;
    vector<string> :: iterator ltr;
    sentence=sentence_shuffle(personal_qualities, thoughts, objects, actions);
    
    return sentence;
}
