/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBoundLayoutConstraint.h"


__attribute__((visibility("hidden")))
@interface SBBaselineBoundLayoutConstraint : SBBoundLayoutConstraint {
	float _baselineConstant;
}
+(id)constraintWithItem:(id)item attribute:(int)attribute relatedBy:(int)by toItem:(id)item4 attribute:(int)attribute5 textAttributesObject:(id)object keyPath:(id)path baselineConstant:(float)constant;
-(void)_boundValueDidChange;
@end

