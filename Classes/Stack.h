//
//  Stack.h
//  LingoCards
//
//  Created by John Novatnack on 9/5/09.
//  Copyright 2009 Piecewise Software. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Course;

@interface Stack :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * stackName;
@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) Course * course;

@end



