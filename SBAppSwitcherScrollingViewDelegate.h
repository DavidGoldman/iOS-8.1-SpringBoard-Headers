/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBAppSwitcherScrollingViewDelegate <NSObject>
-(float)reachabilityOffsetForSwitcherScroller:(id)switcherScroller;
-(void)switcherScroller:(id)scroller updatedPeakPageOffset:(float)offset;
-(void)switcherScrollerBeganMoving:(id)moving;
-(void)switcherScrollerDidEndScrolling:(id)switcherScroller;
-(BOOL)switcherScroller:(id)scroller displayItemWantsToBeKeptInViewHierarchy:(id)viewHierarchy;
-(void)switcherScroller:(id)scroller displayItemWantsToBeRemoved:(id)beRemoved;
-(void)switcherScrollerBeganPanning:(id)panning;
-(void)switcherScroller:(id)scroller itemTapped:(id)tapped;
-(void)switcherScroller:(id)scroller contentOffsetChanged:(float)changed;
-(float)switcherScrollerDistanceBetweenItemCenters:(id)centers forOrientation:(int)orientation;
-(CGSize)switcherScrollerItemSize:(id)size forOrientation:(int)orientation;
-(BOOL)switcherScrollerIsRelayoutBlocked:(id)blocked;
-(BOOL)switcherScroller:(id)scroller isDisplayItemRemovable:(id)removable;
-(id)switcherScroller:(id)scroller viewForDisplayLayout:(id)displayLayout;
@end

