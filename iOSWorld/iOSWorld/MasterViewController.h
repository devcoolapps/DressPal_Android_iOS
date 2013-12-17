//
//  MasterViewController.h
//  iOSWorld
//
//  Created by Pratik Kothari on 11/17/13.
//  Copyright (c) 2013 Techark Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
