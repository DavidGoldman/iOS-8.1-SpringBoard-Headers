/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerObserver.h"
#import "SBStarkToAppWorkspaceTransaction.h"

@class NSString, SBUIAnimationController, SBAlert;

__attribute__((visibility("hidden")))
@interface SBStarkAlertToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerObserver> {
	SBAlert* _alert;
	SBUIAnimationController* _animation;
	BOOL _animatedAppActivation;
	BOOL _animatingAlertSuspension;
	BOOL _deactivateAfterNextLaunch;
	BOOL _activatingLauncher;
	BOOL _fromAssistant;
	BOOL _waitingForAppActivation;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) SBAlert* alert;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)mainScreenApplicationSceneDidCommit:(id)mainScreenApplicationScene;
-(void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)completed;
-(void)_alertDidDeactivate;
-(void)_handleFailure;
-(void)_deactivateAlertIfNecessary;
-(void)_alertAnimationComplete:(id)complete;
-(void)_didComplete;
-(void)_endAnimation;
-(void)_setupMilestonesFrom:(id)from to:(id)to;
-(BOOL)_hasAnimation;
-(void)_beginAnimation;
-(void)_begin;
-(id)swizzledToDisplayIfNecessary;
-(void)dealloc;
-(id)initWithMainScreenAlertManager:(id)mainScreenAlertManager starkScreenController:(id)controller alert:(id)alert toApplication:(id)application;
@end

