/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherServices : XXUnknownSuperclass <NSCopying> {
	NSMutableArray* _services;
}
@property(readonly, assign, nonatomic) NSMutableArray* services;
-(id)displayItems;
-(id)serviceBundleIdentifiers;
-(id)serviceForIdentifier:(id)identifier;
-(id)serviceForBundleIdentifier:(id)bundleIdentifier;
-(id)serviceAtIndex:(unsigned)index;
-(unsigned)count;
-(void)removeService:(id)service;
-(void)addService:(id)service;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithServices:(id)services zone:(NSZone*)zone;
@end

