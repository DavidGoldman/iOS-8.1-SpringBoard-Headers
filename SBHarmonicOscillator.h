/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBHarmonicOscillator : XXUnknownSuperclass {
	float A;
	float Z;
	float k;
	float dk;
	float mink;
	float m;
	float dm;
	float minm;
	float psi_n;
	float psi_d;
	float zeta;
}
@property(assign, nonatomic) float minimumMass;
@property(assign, nonatomic) float massDecay;
@property(assign, nonatomic) float mass;
@property(assign, nonatomic) float minimumSpringStrength;
@property(assign, nonatomic) float springDecay;
@property(assign, nonatomic) float springStrength;
@property(assign, nonatomic) float endingAmplitude;
@property(assign, nonatomic) float startingAmplitude;
-(float)amplitudeForElapsedTime:(double)elapsedTime;
-(void)updateParameters;
-(void)setSpringConstant:(float)constant;
-(id)init;
@end

