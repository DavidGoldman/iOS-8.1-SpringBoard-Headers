/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAppSwitcherPeopleDataSourceConsumer.h"
#import "SBAppSwitcherPeopleScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"
#import "SpringBoard-Structs.h"

@class NSString, _UILegibilitySettings, UIPanGestureRecognizer, SBAppSwitcherSettings, NSArray, SBAppSwitcherPeopleScrollView;
@protocol SBAppSwitcherPeopleDelegate, SBAppSwitcherPeopleDataSource;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleViewController : XXUnknownSuperclass <_UISettingsKeyObserver, SBAppSwitcherPeopleDataSourceConsumer, UIGestureRecognizerDelegate, SBAppSwitcherPeopleScrollViewDelegate> {
	SBAppSwitcherPeopleScrollView* _peopleScrollView;
	UIPanGestureRecognizer* _closeGestureRecognizer;
	SBAppSwitcherSettings* _settings;
	_UILegibilitySettings* _legibilitySettings;
	CGPoint _contentOffsetBeforeExpandingItem;
	BOOL _interactivelyClosingItem;
	BOOL _animatingPresentation;
	NSArray* _dataSourceSnapshotLastProvidedToScrollView;
	id<SBAppSwitcherPeopleDataSource> _activeDataSource;
	BOOL _bbHasWarmedFavoritesListManager;
	BOOL _presented;
	BOOL _finishedLoadingAllData;
	id<SBAppSwitcherPeopleDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<SBAppSwitcherPeopleDelegate> delegate;
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(retain, nonatomic) id<SBAppSwitcherPeopleDataSource> activeDataSource;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(id)peopleScrollView:(id)view titleForSection:(unsigned)section;
-(void)tappedExpandCollapseForItem:(id)item;
-(CGSize)peopleScrollView:(id)view sizeForItem:(id)item expanded:(BOOL)expanded;
-(CGSize)peopleScrollView:(id)view sizeForPlaceholderForSection:(int)section;
-(id)peopleScrollView:(id)view placeholderStringForEmptySection:(unsigned)emptySection;
-(id)peopleScrollView:(id)view viewForItem:(id)item;
-(id)peopleScrollView:(id)view itemAtIndexPath:(id)indexPath;
-(int)peopleScrollView:(id)view numberOfItemsInSection:(int)section;
-(int)numberOfSectionsInPeopleScrollView:(id)peopleScrollView;
-(void)_handleClosePanGesture:(id)gesture;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)_configureGestureRecognizers;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(id)silhouetteMonogram;
-(id)existingCachedMonogramImageForPersonID:(int)personID outIsMask:(BOOL*)mask;
-(void)cachedMonogramImageForPersonID:(int)personID generatingIfNecessaryWithResult:(id)result;
-(void)dataSourceChanged:(id)changed;
-(void)_configurePeopleScrollView;
-(void)switcherWasDismissed:(BOOL)dismissed;
-(void)switcherWillBePresented:(BOOL)switcher;
-(void)_configureDataSourceIfNecessaryAndPossible;
-(void)_deviceUnlockedForFirstTime:(id)firstTime;
-(void)_switcherDidPresentAnimation:(id)_switcher;
-(void)_switcherWillAnimate:(id)_switcher;
-(void)loadView;
-(void)bbServerHasInitializedABFavoritesListManagerToWorkaround17689168;
-(float)monogramSize;
-(BOOL)useVerticallyCompactLayoutSize;
-(id)expandedItemWrapper;
-(CGSize)peopleScrollViewSize;
-(void)cancelTracking;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)launchURL:(id)url;
@end

