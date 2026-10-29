@interface MMMusicRhythmBackgroundView : MMWebImageView
{
    BOOL _motioning; // +0x11
    double _motionDuration; // +0x18
}
- (void)startMotion;
- (void)startMotionExperiment;
- (void)stopMotion;
- (double)motionDuration;
- (void)setMotionDuration:(double)arg1;
- (BOOL)motioning;
- (void)setMotioning:(BOOL)arg1;
@end

