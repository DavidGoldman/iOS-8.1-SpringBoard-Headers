/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface SBStarkNotificationLayout : XXUnknownSuperclass {
	UICollectionViewLayoutAttributes* _notificationAttributes;
	UICollectionViewLayoutAttributes* _previousNotificationAttributes;
	NSArray* _subActionsAttributes;
	NSArray* _previousSubActionsAttributes;
	UICollectionViewLayoutAttributes* _backgroundAttributes;
	UICollectionViewLayoutAttributes* _previousBackgroundAttributes;
	float _notificationHeight;
	float _transitionSpacing;
	UIEdgeInsets _subActionsInsets;
	float _subActionPadding;
	float _subActionHeight;
}
@property(assign, nonatomic) float subActionHeight;
@property(assign, nonatomic) float subActionPadding;
@property(assign, nonatomic) UIEdgeInsets subActionsInsets;
@property(assign, nonatomic) float transitionSpacing;
@property(assign, nonatomic) float notificationHeight;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)indexPath;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)indexPath;
-(void)finalizeCollectionViewUpdates;
-(void)prepareForCollectionViewUpdates:(id)collectionViewUpdates;
-(id)_indexPathsToDeleteForDecorationViewOfKind:(id)kind;
-(id)_indexPathsToInsertForDecorationViewOfKind:(id)kind;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)boundsChange;
-(id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)indexPath;
-(id)layoutAttributesForItemAtIndexPath:(id)indexPath;
-(id)layoutAttributesForElementsInRect:(CGRect)rect;
-(void)prepareLayout;
-(id)_transitionAttributesForAction:(int)action withLayoutAttributes:(id)layoutAttributes;
-(void)dealloc;
-(id)init;
@end

