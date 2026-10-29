@interface WCFinderLongPressRatePlayStateModel : NSObject
{
    BOOL _previousFrameIsLockSpeedTriggered; // +0x8
    long long _playRateBeforePenStart; // +0x10
    unsigned long long _previousPanChangeSpeedTimeStampMs; // +0x18
    double _timePointBeforeLpa; // +0x20
    double _vernierX; // +0x28
    unsigned long long _gesCheckMoveY; // +0x30
    double _gestureMoveSpeedMargin; // +0x38
    CGPoint _startLongPressPoint; // +0x40
    CGPoint _lastGesturePos; // +0x50
}
+ (id)candidatePlayRateTypesForStartRate:(long long)arg1;
+ (long long)getPanStartPlayRateTypeWithCurrentRate:(long long)arg1;
- (id)init;
- (void)reset;
- (void)prepareForGestureWithStartRate:(long long)arg1;
- (void)handleGestureStartWithStartRate:(long long)arg1 gesture:(id)arg2 viewW:(double)arg3;
- (void)handleGestureChange:(id)arg1 viewW:(double)arg2 enableHorizontalSelection:(BOOL)arg3;
- (long long)getSuitablePlayRateTypeWithViewW:(double)arg1;
- (BOOL)startedWithLockedRate;
- (id)candidatePlayRateTypes;
- (long long)finalPlayRateTypeWithConfirmationAreaTriggered:(BOOL)arg1 viewW:(double)arg2;
- (double)centerXOfRateType:(long long)arg1 viewW:(double)arg2;
- (long long)rateTypeOfPositionX:(double)arg1 viewW:(double)arg2;
- (CGPoint)startLongPressPoint;
- (void)setStartLongPressPoint:(CGPoint)arg1;
- (long long)playRateBeforePenStart;
- (void)setPlayRateBeforePenStart:(long long)arg1;
- (BOOL)previousFrameIsLockSpeedTriggered;
- (void)setPreviousFrameIsLockSpeedTriggered:(BOOL)arg1;
- (unsigned long long)previousPanChangeSpeedTimeStampMs;
- (void)setPreviousPanChangeSpeedTimeStampMs:(unsigned long long)arg1;
- (double)timePointBeforeLpa;
- (void)setTimePointBeforeLpa:(double)arg1;
- (double)vernierX;
- (void)setVernierX:(double)arg1;
- (CGPoint)lastGesturePos;
- (void)setLastGesturePos:(CGPoint)arg1;
- (unsigned long long)gesCheckMoveY;
- (void)setGesCheckMoveY:(unsigned long long)arg1;
- (double)gestureMoveSpeedMargin;
- (void)setGestureMoveSpeedMargin:(double)arg1;
@end
