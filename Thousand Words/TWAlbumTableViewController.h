//
//  TWAlbumTableViewController.h
//  Thousand Words
//
//  Created by Isabelle Jolene Taracatac on 7/16/14.
//  Copyright (c) 2014 Code Coallition. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TWAlbumTableViewController : UITableViewController 

@property (strong, nonatomic) NSMutableArray *albums;

- (IBAction)addAlbumBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
