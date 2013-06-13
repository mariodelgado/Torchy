//
//  ViewController.h
//  Torchy
//
//  Created by Mario C. Delgado Jr. on 8/13/12.
//  Copyright (c) 2012 Mario C. Delgado Jr. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AVFoundation/AVFoundation.h"

@interface ViewController : UIViewController
{
    UIButton *onButton;
    UIButton *offButton;
    UIImageView *onView;
    UIImageView *offView;
 
}

@property(nonatomic, strong) IBOutlet UIButton *onButton;
@property(nonatomic, strong) IBOutlet UIButton *offButton;
@property(nonatomic, strong) IBOutlet UIImageView *onView;
@property(nonatomic, strong) IBOutlet UIImageView *offView;

-(IBAction)torchOn:(id)sender;
-(IBAction)torchOff:(id)sender;




@end
