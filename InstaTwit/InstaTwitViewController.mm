//
//  ViewController.m
//  InstaTwit
//
//  Created by Paul Pilone on 4/5/13.
//  Copyright (c) 2013 Element 84, LLC. All rights reserved.
//

#import "InstaTwitViewController.h"
#import <Social/Social.h>
#import "common_vocabulary.hpp"
#import "basic_vocabulary.hpp"
#import "advanced_vocabulary.hpp"
#import "extensions.hpp"

struct CPPMembers
{
    CPPClass member1;
    CXXClass member2;
    CPP_Class member3;
};

@interface InstaTwitViewController ()

@property (nonatomic, strong) NSArray *activities;
@property (nonatomic, strong) NSArray *feelings;

@end

@implementation InstaTwitViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    /*
    self.activities = @[@"networking", @"coding", @"tweeting", @"wireframing",
                        @"working", @"meeting", @"pitching", @"pivoting", @"going mobile"];
    self.feelings = @[@"awesome", @"confident", @"smart", @"agile", @"friendly",
                      @"savvy", @"psyched", @"hopeful", @"efficient"];
    */
}

#pragma mark -
#pragma mark Actions

- (IBAction)textFieldDoneEditing:(id)sender {
    [sender resignFirstResponder];
}

- (IBAction)tweetButtonTapped:(id)sender {
    _cppMembers = new CPPMembers;
    /*NSString *message = [NSString stringWithFormat:@"%@ I'm %@ and feeling %@ about it.",
                         self.notesField.text ? self.notesField.text : @"",
                         self.activities[[self.tweetPicker selectedRowInComponent:0]],
                         self.feelings[[self.tweetPicker selectedRowInComponent:1]]];*/
    NSString *msg = [NSString stringWithFormat:@"%s", _cppMembers->member1.common_first().c_str()];
    
    //NSLog(@"%@", message);
    NSLog(@"%s", msg);
   // printf("Using C++\n");
    SLComposeViewController *composeViewController = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeTwitter];
    [composeViewController setInitialText:msg];
    [self presentViewController:composeViewController animated:YES completion:nil];
}

#pragma mark -
#pragma mark UIPickerViewDataSource

- (NSInteger)numberOfComponentsInPickerView:(UIPickerView *)pickerView {
    return 2;
}

- (NSInteger)pickerView:(UIPickerView *)pickerView numberOfRowsInComponent:(NSInteger)component {
    if (component == 0) {
        return [self.activities count];
    }
    else {
        return [self.feelings count];
    }
}

#pragma mark -
#pragma mark UIPickerViewDelegate

- (NSString *)pickerView:(UIPickerView *)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component {
    if (component == 0) {
        return self.activities[row];
    }
    else {
        return self.feelings[row];
    }
}

#pragma mark -
#pragma mark Memory Management

- (void)dealloc
{
    //Free members even if ARC.
    delete _cppMembers;
    
    //If not ARC uncomment the following line
    //[super dealloc];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
//--------------------------------------------------------The C++ implementation

