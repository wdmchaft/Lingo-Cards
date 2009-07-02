//
//  RootViewController.h
//  LingoCards
//
//  Created by John Novatnack on 8/21/09.
//  Copyright Piecewise Software 2009. All rights reserved.
//

#import "CourseCreateController.h"

@interface CourseViewController : UITableViewController <NSFetchedResultsControllerDelegate, CourseCreateControllerDelegate> {
	NSFetchedResultsController *fetchedResultsController;
	NSManagedObjectContext *managedObjectContext;
}

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

- (IBAction) addCourse;

@end
