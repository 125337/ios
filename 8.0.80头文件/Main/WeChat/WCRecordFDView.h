@interface WCRecordFDView : UIView <CAAnimationDelegate>
{
    BOOL _hasLoggedFirstPeakGeometry; // +0x8
    BOOL _hasLoggedInvalidPeakGeometry; // +0x9
    BOOL _hasLoggedFirstPeakAnimation; // +0xa
    int _animatingCount; // +0xc
    unsigned int _timerCount; // +0x10
    unsigned int _pillarsCount; // +0x14
    float _maxHeight; // +0x18
    CALayer * _displayLayer; // +0x20
    NSMutableArray * _curFeedbackPillars; // +0x28
    NSMutableArray * _arrPillars; // +0x30
    double _pillarMargin; // +0x38
    MMTimer * _timer; // +0x40
    NSMutableArray * _arrPeakPower; // +0x48
    NSMutableArray * _arrCurAnimation; // +0x50
    UIColor * _pillarColor; // +0x58
    double _pillarWidth; // +0x60
    CGSize _lastValidGeometrySize; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 PillarCount:(unsigned int)arg2 MaxHeight:(float)arg3 pillarColor:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 PillarCount:(unsigned int)arg2 MaxHeight:(float)arg3 pillarColor:(id)arg4 pillarWidth:(double)arg5;
- (void)dealloc;
- (void)initPillars;
- (void)layoutSubviews;
- (void)setPillarColor:(id)arg1;
- (void)dynamicSetPillarsColor:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)generateAnimationWithPeakPower:(float)arg1;
- (void)configPillarsWithPeakPower:(float)arg1;
- (void)configPillars:(id)arg1 PeakPower:(float)arg2 Delay:(float)arg3 AddGroup:(BOOL)arg4;
- (id)configPillar:(id)arg1 PeakPower:(float)arg2 Delay:(float)arg3 AddGroup:(BOOL)arg4;
- (id)getAnimationGroupWithStartFrom:(float)arg1 StartTo:(float)arg2 EndFrom:(float)arg3 EndTo:(float)arg4;
- (unsigned int)genCurrentTime;
- (void)configWithPillar:(id)arg1 Idex:(unsigned long long)arg2;
- (unsigned long long)genCurrentTimeInMs;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)startAnimateTimer;
- (void)stopTimer;
- (void)onAnimateTimerCallback;
- (id)getAnimationGroup;
- (id)displayLayer;
- (void)setDisplayLayer:(id)arg1;
- (id)curFeedbackPillars;
- (void)setCurFeedbackPillars:(id)arg1;
- (id)arrPillars;
- (void)setArrPillars:(id)arg1;
- (double)pillarMargin;
- (void)setPillarMargin:(double)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)arrPeakPower;
- (void)setArrPeakPower:(id)arg1;
- (id)arrCurAnimation;
- (void)setArrCurAnimation:(id)arg1;
- (int)animatingCount;
- (void)setAnimatingCount:(int)arg1;
- (unsigned int)timerCount;
- (void)setTimerCount:(unsigned int)arg1;
- (unsigned int)pillarsCount;
- (void)setPillarsCount:(unsigned int)arg1;
- (float)maxHeight;
- (void)setMaxHeight:(float)arg1;
- (id)pillarColor;
- (double)pillarWidth;
- (void)setPillarWidth:(double)arg1;
- (CGSize)lastValidGeometrySize;
- (void)setLastValidGeometrySize:(CGSize)arg1;
- (BOOL)hasLoggedFirstPeakGeometry;
- (void)setHasLoggedFirstPeakGeometry:(BOOL)arg1;
- (BOOL)hasLoggedInvalidPeakGeometry;
- (void)setHasLoggedInvalidPeakGeometry:(BOOL)arg1;
- (BOOL)hasLoggedFirstPeakAnimation;
- (void)setHasLoggedFirstPeakAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
