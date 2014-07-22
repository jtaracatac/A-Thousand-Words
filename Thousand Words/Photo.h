//
//  Photo.h
//  Thousand Words
//
//  Created by Isabelle Jolene Taracatac on 7/21/14.
//  Copyright (c) 2014 Code Coallition. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Album;

@interface Photo : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) id image;
@property (nonatomic, retain) Album *albumBook;

@end
