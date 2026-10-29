@interface WCFinderProgressFineTuneCalculator : NSObject
{
    BOOL _exitedFineSegment; // +0x8
    double _offsetX; // +0x10
    double _lastRawMovementX; // +0x18
}
+ (double)fineTuneScaleWithInEdge:(BOOL)arg1 wasExited:(BOOL)arg2 barWidth:(double)arg3 duration:(double)arg4 ptsPerSec:(double)arg5 baseScale:(double)arg6 edgeScale:(double)arg7;
- (void)reset;
- (double)computeTargetPercentWithRawMovementX:(double)arg1 barWidth:(double)arg2 duration:(double)arg3 beginValue:(double)arg4 fineTuneEnabled:(BOOL)arg5;
- (BOOL)exitedFineSegment;
- (void)setExitedFineSegment:(BOOL)arg1;
- (double)offsetX;
- (void)setOffsetX:(double)arg1;
- (double)lastRawMovementX;
- (void)setLastRawMovementX:(double)arg1;
@end
