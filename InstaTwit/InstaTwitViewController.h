//
//  ViewController.h
//  InstaTwit
//
//  Created by alimovlex on 26/08/2020.
//  Copyright (c) 2020 alimovlex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InstaTwitViewController : UIViewController
{
    struct GRE_Vocabulary *dictionaryPtr;
}

- (IBAction)tweetButtonTapped:(id)sender;

@end
