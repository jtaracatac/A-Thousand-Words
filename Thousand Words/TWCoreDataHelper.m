//
//  TWCoreDataHelper.m
//  Thousand Words
//
//  Created by Isabelle Jolene Taracatac on 7/17/14.
//  Copyright (c) 2014 Code Coallition. All rights reserved.
//

#import "TWCoreDataHelper.h"

@implementation TWCoreDataHelper

+(NSManagedObjectContext *)managedObjectContext;\
{
    NSManagedObjectContext *context = nil;
    id delegate = [[UIApplication sharedApplication] delegate];
    
    if ([delegate performSelector:@selector(managedObjectContext)]){
        context = [delegate managedObjectContext];
    }
    
    
    return context;
}

@end
