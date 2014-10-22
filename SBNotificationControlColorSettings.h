/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBControlColorSettings;

__attribute__((visibility("hidden")))
@interface SBNotificationControlColorSettings : XXUnknownSuperclass {
	SBControlColorSettings* _vibrantSettings;
	SBControlColorSettings* _overlaySettings;
}
@property(readonly, retain, nonatomic) SBControlColorSettings* overlaySettings;
@property(readonly, retain, nonatomic) SBControlColorSettings* vibrantSettings;
+(id)settingsWithGraphicsQuality:(int)graphicsQuality;
+(id)actionButtonSettingsWithGraphicsQuality:(int)graphicsQuality;
+(id)editButtonSettingsWithGraphicsQuality:(int)graphicsQuality;
-(void)dealloc;
-(id)initWithVibrantSettings:(id)vibrantSettings overlaySettings:(id)settings;
@end

