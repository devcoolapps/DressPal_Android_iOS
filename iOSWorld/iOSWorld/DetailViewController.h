//
//  DetailViewController.h
//  iOSWorld
//
//  Created by Pratik Kothari on 11/17/13.
//  Copyright (c) 2013 Techark Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
