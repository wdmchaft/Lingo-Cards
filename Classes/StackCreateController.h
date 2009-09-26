//
//  StackCreateController.h
//  LingoCards
//
//  Created by John Novatnack on 9/5/09.
//  Copyright 2009 Piecewise Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol StackCreateControllerDelegate;

@interface StackCreateController : UIViewController {
    id<StackCreateControllerDelegate> delegate;
    
    UITextField * stackName;
}

@property(nonatomic, retain) IBOutlet UITextField *stackName;
@property(nonatomic, assign) id<StackCreateControllerDelegate> delegate;

@end



/**
 * Protocol definition of a delegate that handles the result of
 * the stack creation view being saved or canceled
 */
@protocol StackCreateControllerDelegate
- (void) stackCreateController:(StackCreateController *)controller didFinishWithSave:(BOOL)save;
@end

