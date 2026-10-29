@interface MMFinderLiveFeedStreamFollowMotionProfile : NSObject
{
    double _firstStageDuration; // +0x8
    double _maxSpeedTime; // +0x10
    double _decelerationDuration; // +0x18
    double _firstStageTravel; // +0x20
    double _maxSpeed; // +0x28
    double _cruiseSpeed; // +0x30
    double _initialSpeed; // +0x38
}
+ (double)firstStageTravelWithContainerWidth:(double)arg1;
+ (id)profileWithContainerWidth:(double)arg1;
- (double)acceleration;
- (double)deceleration;
- (double)distanceDuringAcceleration:(double)arg1;
- (double)distanceDuringDeceleration:(double)arg1;
- (double)solveTravelTimeWithInitialSpeed:(double)arg1 acceleration:(double)arg2 distance:(double)arg3;
- (double)accelerationDistance;
- (double)distanceAtTime:(double)arg1;
- (double)timeForDistance:(double)arg1;
- (double)cruiseDurationForDistance:(double)arg1;
- (double)firstStageDuration;
- (void)setFirstStageDuration:(double)arg1;
- (double)maxSpeedTime;
- (void)setMaxSpeedTime:(double)arg1;
- (double)decelerationDuration;
- (void)setDecelerationDuration:(double)arg1;
- (double)firstStageTravel;
- (void)setFirstStageTravel:(double)arg1;
- (double)maxSpeed;
- (void)setMaxSpeed:(double)arg1;
- (double)cruiseSpeed;
- (void)setCruiseSpeed:(double)arg1;
- (double)initialSpeed;
- (void)setInitialSpeed:(double)arg1;
@end
