/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBZoomView.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBFullscreenZoomView : SBZoomView {
	BOOL _hasImage;
	BOOL _hasFullSizedImage;
	id _surface;
}
@property(readonly, assign, nonatomic) id surface;
-(void)_addBlackBackground;
-(id)initWithContextHostSnapshotView:(id)contextHostSnapshotView screen:(id)screen;
-(id)initWithContextHostView:(id)contextHostView screen:(id)screen;
-(id)initWithImage:(id)image screen:(id)screen opaque:(BOOL)opaque;
-(id)initWithSnapshotFrame:(CGRect)snapshotFrame screen:(id)screen image:(id)image originalImageOrientation:(int)orientation currentImageOrientation:(int)orientation5 interfaceOrientation:(int)orientation6 doubleHeightStatusBar:(BOOL)bar preventSplit:(BOOL)split needsZoomFilter:(BOOL)filter asyncDecodeImage:(BOOL)image10 opaque:(BOOL)opaque forceRotationOnPhone:(BOOL)phone forJail:(BOOL)jail;
-(id)_initWithView:(id)view screen:(id)screen needsBlackBackground:(BOOL)background;
-(id)_initWithFrame:(CGRect)frame;
@end

