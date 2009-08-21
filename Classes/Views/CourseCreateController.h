//
//  CourseCreateController.h
//  LingoCards
//
//  Created by John Novatnack on 8/21/09.
//  Copyright 2009 Piecewise Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CourseCreateControllerDelegate;

@interface CourseCreateController : UIViewController {
    id<CourseCreateControllerDelegate> delegate;
    
    UITextField * courseName;
    UITextField * frontSideLanguage;
    UITextField * backSideLanguage;
}

@property(nonatomic, retain) IBOutlet UITextField *courseName;
@property(nonatomic, retain) IBOutlet UITextField *frontSideLanguage;
@property(nonatomic, retain) IBOutlet UITextField *backSideLanguage;
@property(nonatomic, assign) id<CourseCreateControllerDelegate> delegate;

- (IBAction) save:(id)sender;
- (IBAction) cancel:(id)sender;
- (IBAction) textFieldDoneEditing:(id)sender;
- (IBAction) backgroundTap:(id)sender;

@end

/**
 * Protocol definition of a delegate that handles the result of
 * the course creation view being saved or canceled
 */
@protocol CourseCreateControllerDelegate
- (void) courseCreateController:(CourseCreateController *)controller didFinishWithSave:(BOOL)save;
@end




