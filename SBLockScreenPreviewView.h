/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBLegibilityView, SBFLockScreenDateView, _UILegibilityLabel, SBFLockScreenSimpleDateFormatter, UILabel, _UILegibilitySettings, UIView, SBFakeStatusBarView;

__attribute__((visibility("hidden")))
@interface SBLockScreenPreviewView : XXUnknownSuperclass {
	UIView* _wallpaperView;
	SBFLockScreenDateView* _dateView;
	SBLegibilityView* _cameraView;
	UILabel* _slideToUnlockView;
	_UILegibilityLabel* _slideToUnlockLegibilityLabel;
	SBFakeStatusBarView* _statusBar;
	SBFLockScreenSimpleDateFormatter* _dateFormatter;
	_UILegibilitySettings* _legibilitySettings;
}
+(id)preview;
-(void)_layoutWallpaperView;
-(void)_layoutSlideToUnlockView;
-(void)_layoutDateView;
-(void)_layoutCameraView;
-(void)_layoutStatusBar;
-(void)layoutSubviews;
-(id)_legibilityPrototypeSettings;
-(void)_setupStatusBar;
-(void)_setupCameraView;
-(void)_setupDateView;
-(void)_setupSlideToUnlockView;
-(void)_setupWallpaperView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame legibilitySettings:(id)settings;
@end

