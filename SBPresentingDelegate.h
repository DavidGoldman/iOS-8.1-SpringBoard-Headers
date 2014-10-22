/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBPresentingDelegate <NSObject>
-(void)presentingControllerDidFinishPresentation:(id)presentingController;
-(void)presentingController:(id)controller willHandleGesture:(id)gesture;
-(BOOL)presentingController:(id)controller gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)presentingController:(id)controller gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
@optional
-(void)presentingController:(id)controller conflictingGestureDidEnd:(id)conflictingGesture;
-(void)presentingController:(id)controller conflictingGestureDidBegin:(id)conflictingGesture;
@end
