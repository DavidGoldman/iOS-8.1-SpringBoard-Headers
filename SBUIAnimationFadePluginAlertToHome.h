/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBAlertManager, UIView;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadePluginAlertToHome : SBUIMainScreenAnimationController {
	SBAlertManager* _alertManager;
	SBAlert* _alert;
	UIView* _viewToAnimate;
}
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(double)animationDelay;
-(double)animationDuration;
-(void)dealloc;
-(id)initWithDeactivatingAlert:(id)deactivatingAlert alertManager:(id)manager;
@end

