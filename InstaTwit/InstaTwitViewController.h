//
//  ViewController.h
//  InstaTwit
//
//  Created by Aleksei Alimov on 8/8/2020.
//  Copyright (c) 2020 LexiCOM, LLC. All rights reserved.
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
