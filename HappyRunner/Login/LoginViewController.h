//
//  LoginViewController.h
//  HappyRunner
//
//  Created by chinatsp on 13-10-13.
//  Copyright (c) 2013年 chinatsp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
{
    IBOutlet UITextField *accountText;
    IBOutlet UITextField *passwordText;
    
    
    IBOutlet UIView *inputView;
}

- (IBAction)buttonPress:(UIButton *)button;
- (IBAction)backAction:(UIButton *)button;


@end
