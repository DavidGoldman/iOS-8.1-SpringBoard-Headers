/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert, SBApplication;

__attribute__((visibility("hidden")))
@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction {
	SBAlert* _activatingAlert;
	BOOL _animatedAppDeactivation;
	SBApplication* _mainScreenAppThatWillBeActivated;
	id _mainScreenAppThatWillBeActivatedObserver;
}
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(BOOL)_shouldDisallowSuspension;
-(id)_newAnimationFromNowPlayingToApp;
-(id)_newAnimationFromAppToNowPlaying;
-(id)_newAnimationFromLauncherToApp;
-(id)_newAnimationFromAppToApp;
-(void)_setupMilestonesFrom:(id)from to:(id)to;
-(void)_finishCommit;
-(void)_doCommit;
-(id)swizzledToDisplayIfNecessary;
-(void)_noteWillActivateApplicationOnMainScreen:(id)_note underLock:(BOOL)lock;
-(void)dealloc;
-(id)initWithMainScreenAlertManager:(id)mainScreenAlertManager starkScreenController:(id)controller from:(id)from to:(id)to;
@end

