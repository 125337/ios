@interface WCRecordFDView : UIView <CAAnimationDelegate>
{
    int _animatingCount; // +0x8
    unsigned int _timerCount; // +0xc
    unsigned int _pillarsCount; // +0x10
    float _maxHeight; // +0x14
    CALayer * _displayLayer; // +0x18
    NSMutableArray * _curFeedbackPillars; // +0x20
    NSMutableArray * _arrPillars; // +0x28
    MMTimer * _timer; // +0x30
    NSMutableArray * _arrPeakPower; // +0x38
    NSMutableArray * _arrCurAnimation; // +0x40
    UIColor * _pillarColor; // +0x48
    double _pillarWidth; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 PillarCount:(unsigned int)arg2 MaxHeight:(float)arg3 pillarColor:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 PillarCount:(unsigned int)arg2 MaxHeight:(float)arg3 pillarColor:(id)arg4 pillarWidth:(double)arg5;
- (void)dealloc;
- (void)initPillars;
- (void)setPillarColor:(id)arg1;
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
- (void).cxx_destruct;
@end
