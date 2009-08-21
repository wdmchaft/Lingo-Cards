//
//  Course.h
//  LingoCards
//
//  Created by John Novatnack on 8/21/09.
//  Copyright 2009 Piecewise Software. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Course :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * courseName;
@property (nonatomic, retain) NSString * frontSideLanguage;
@property (nonatomic, retain) NSString * backSideLanguage;

@end



