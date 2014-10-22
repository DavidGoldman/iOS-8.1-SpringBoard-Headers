/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FBSceneManagerDelegate <NSObject>
-(void)sceneManager:(id)manager deviceOrientationChangedTo:(int)to;
-(void)sceneManager:(id)manager scene:(id)scene didReceiveActions:(id)actions;
-(void)sceneManager:(id)manager scene:(id)scene didUpdateClientSettingsWithDiff:(id)diff oldClientSettings:(id)settings transitionContext:(id)context;
@end

