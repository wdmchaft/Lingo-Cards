//
//  StackListController.h
//  LingoCards
//
//  Created by John Novatnack on 9/5/09.
//  Copyright 2009 Piecewise Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Course.h"

@interface StackListController : UITableViewController <NSFetchedResultsControllerDelegate> {
    // CoreData classes
	NSFetchedResultsController *fetchedResultsController;
	NSManagedObjectContext *managedObjectContext;    
    
    Course *course;
}

@property (nonatomic, retain) Course  *course;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end
