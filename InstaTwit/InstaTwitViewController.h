//
//  ViewController.h
//  InstaTwit
//
//  Created by alimovlex on 26/08/2020.
//  Copyright (c) 2020 alimovlex. All rights reserved.
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
