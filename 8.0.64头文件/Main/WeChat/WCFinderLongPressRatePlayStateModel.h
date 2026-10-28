@interface WCFinderLongPressRatePlayStateModel : NSObject
{
    BOOL _previousFrameIsTouching; // +0x8
    long long _playRateAtPenStart; // +0x10
    long long _playRateBeforePenStart; // +0x18
    unsigned long long _previousPanChangeSpeedTimeStampMs; // +0x20
    double _vernierX; // +0x28
    double _vernierStartX; // +0x30
    unsigned long long _gesCheckMoveY; // +0x38
    double _gestureMoveSpeedMargin; // +0x40
    double _gestureMoveSpeedNotMargin; // +0x48
    CGPoint _startLongPressPoint; // +0x50
    CGPoint _lastGesturePos; // +0x60
}
+ (id)newPlayTypeArray;
+ (long long)getPanStartPlayRateTypeWithCurrentRate:(long long)arg1;
+ (double)centerXOfRateType:(long long)arg1 viewW:(double)arg2;
+ (long long)rateTypeOfPositionX:(double)arg1 viewW:(double)arg2;
- (id)init;
- (void)reset;
- (long long)playRateTypeOfCurrentX:(double)arg1 initialType:(long long)arg2 initialX:(double)arg3 viewW:(double)arg4;
- (void)handleGestureStartWithStartRate:(long long)arg1 gesture:(id)arg2 viewW:(double)arg3;
- (void)handleGestureChange:(id)arg1 viewW:(double)arg2;
- (long long)getSuitablePlayRateTypeWithViewW:(double)arg1;
- (CGPoint)startLongPressPoint;
- (void)setStartLongPressPoint:(CGPoint)arg1;
- (long long)playRateAtPenStart;
- (void)setPlayRateAtPenStart:(long long)arg1;
- (long long)playRateBeforePenStart;
- (void)setPlayRateBeforePenStart:(long long)arg1;
- (BOOL)previousFrameIsTouching;
- (void)setPreviousFrameIsTouching:(BOOL)arg1;
- (unsigned long long)previousPanChangeSpeedTimeStampMs;
- (void)setPreviousPanChangeSpeedTimeStampMs:(unsigned long long)arg1;
- (double)vernierX;
- (void)setVernierX:(double)arg1;
- (double)vernierStartX;
- (void)setVernierStartX:(double)arg1;
- (CGPoint)lastGesturePos;
- (void)setLastGesturePos:(CGPoint)arg1;
- (unsigned long long)gesCheckMoveY;
- (void)setGesCheckMoveY:(unsigned long long)arg1;
- (double)gestureMoveSpeedMargin;
- (void)setGestureMoveSpeedMargin:(double)arg1;
- (double)gestureMoveSpeedNotMargin;
- (void)setGestureMoveSpeedNotMargin:(double)arg1;
@end
