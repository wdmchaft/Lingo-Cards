//
//  StackListController.h
//  LingoCards
//
//  Created by John Novatnack on 9/5/09.
//  Copyright 2009 Piecewise Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Course.h"
#import "StackCreateController.h"

@interface StackListController : UITableViewController 
                        <NSFetchedResultsControllerDelegate, 
                         StackCreateControllerDelegate> {
    // CoreData classes
	NSFetchedResultsController *fetchedResultsController;
	NSManagedObjectContext *managedObjectContext;    
    
    Course *course;
}

- (IBAction) addStack;

@property (nonatomic, retain) Course  *course;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end
