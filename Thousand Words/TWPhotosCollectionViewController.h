//
//  TWPhotosCollectionViewController.h
//  Thousand Words
//
//  Created by Isabelle Jolene Taracatac on 7/17/14.
//  Copyright (c) 2014 Code Coallition. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Album.h"

@interface TWPhotosCollectionViewController : UICollectionViewController

@property (strong, nonatomic) Album *album;

- (IBAction)cameraBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
