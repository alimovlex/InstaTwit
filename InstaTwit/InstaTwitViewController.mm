//
//  ViewController.m
//  InstaTwit
//
//  Created by alimovlex on 26/08/2020.
//  Copyright (c) 2020 alimovlex. All rights reserved.
//

#import "InstaTwitViewController.h"
#import <Social/Social.h>
#import "common_vocabulary.hpp"
#import "basic_vocabulary.hpp"
#import "advanced_vocabulary.hpp"
#import "extensions.hpp"

struct GRE_Vocabulary
{
    CommonVocabulary member1;
    AdvancedVocabulary member2;
    BasicVocabulary member3;
};

@interface InstaTwitViewController ()

@end

@implementation InstaTwitViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
}

#pragma mark -
#pragma mark Actions
- (IBAction)tweetButtonTapped:(id)sender {
    dictionaryPtr = new GRE_Vocabulary;
    
    NSString *msg = [NSString stringWithFormat:@"%s", dictionaryPtr->member1.common_first().c_str()];
    
    //NSLog(@"%@", message);
    NSLog(@"%@", msg);
   // printf("Using C++\n");
    SLComposeViewController *composeViewController = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeFacebook];
    [composeViewController setInitialText:msg];
    [self presentViewController:composeViewController animated:YES completion:nil];
}

#pragma mark -
#pragma mark Memory Management

- (void)dealloc
{
    //Free members even if ARC.
    delete dictionaryPtr;
    
    //If not ARC uncomment the following line
    //[super dealloc];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
//--------------------------------------------------------The C++ implementation

