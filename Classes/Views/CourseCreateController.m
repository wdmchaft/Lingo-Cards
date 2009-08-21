//
//  CourseCreateController.m
//  LingoCards
//
//  Created by John Novatnack on 8/21/09.
//  Copyright 2009 Piecewise Software. All rights reserved.
//

#import "CourseCreateController.h"


@implementation CourseCreateController

@synthesize courseName;
@synthesize frontSideLanguage;
@synthesize backSideLanguage;
@synthesize delegate;


/*
 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if (self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil]) {
        // Custom initialization
    }
    return self;
}
*/


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];    
    
    // Set the title
    NSString *constantsPath = [[NSBundle mainBundle] pathForResource:@"constants" ofType:@"plist"];
    NSDictionary * constants = [[NSDictionary alloc] 
                                initWithContentsOfFile:constantsPath];
    self.title = [constants valueForKey:@"course_add_title"];
    
    // Add cancel and done buttons
    self.navigationItem.leftBarButtonItem = [[[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel 
                                                                                           target:self action:@selector(cancel:)] autorelease];
    self.navigationItem.rightBarButtonItem = [[[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemSave 
                                                                                            target:self action:@selector(save:)] autorelease];
    
    [constants release];      
}

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	[super viewDidUnload];

	// Release any properties that are loaded in viewDidLoad or can be recreated lazily.    
    self.courseName = nil;
    self.frontSideLanguage = nil;
    self.backSideLanguage = nil;    
    
}

- (void)dealloc {
    [courseName release];
    [frontSideLanguage release];
    [backSideLanguage release];    
    [super dealloc];
}


#pragma mark -
#pragma mark Save and cancel operations

/**
 * Saves the course
 */
- (IBAction) save:(id)sender {
    [delegate courseCreateController:self didFinishWithSave:TRUE];
}

/**
 * Cancels the new course
 */
- (IBAction)cancel:(id)sender {
    [delegate courseCreateController:self didFinishWithSave:FALSE];
}

/**
 * Keyboard disappears when done
 */ 
- (IBAction) textFieldDoneEditing:(id)sender {
    [sender resignFirstResponder];
}

/**
 * The keyboard disappears when the background is tapped
 */
- (IBAction) backgroundTap:(id)sender {
    [courseName resignFirstResponder];
    [frontSideLanguage resignFirstResponder];    
    [backSideLanguage resignFirstResponder];        
}

- (IBAction) backgroundssTap:(id)sender {
    [courseName resignFirstResponder];
    [frontSideLanguage resignFirstResponder];    
    [backSideLanguage resignFirstResponder];        
}




@end
