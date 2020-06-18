//
//  ViewController.h
//  InstaTwit
//
//  Created by Paul Pilone on 4/5/13.
//  Copyright (c) 2013 Element 84, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InstaTwitViewController : UIViewController < UIPickerViewDataSource, UIPickerViewDelegate >
{
    struct CPPMembers *_cppMembers;
}
@property (weak, nonatomic) IBOutlet UIPickerView *tweetPicker;
@property (weak, nonatomic) IBOutlet UITextField *notesField;

- (IBAction)textFieldDoneEditing:(id)sender;
- (IBAction)tweetButtonTapped:(id)sender;

@end
