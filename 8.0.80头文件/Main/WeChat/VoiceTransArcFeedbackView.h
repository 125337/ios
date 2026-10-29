@interface VoiceTransArcFeedbackView : UIView <CAAnimationDelegate>
{
    unsigned int _timerCount; // +0x8
    int _animatingCount; // +0xc
    NSMutableArray * _pillars; // +0x10
    unsigned long long _currentActiveGroup; // +0x18
    NSMutableDictionary * _groupPillars; // +0x20
    MMTimer * _timer; // +0x28
    NSMutableArray * _arrPeakPower; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 pillarColor:(id)arg2 pillarWidth:(double)arg3 pillarCount:(unsigned int)arg4;
- (void)initPillarsWithPillarColor:(id)arg1 pillarWidth:(double)arg2 pillarCount:(unsigned int)arg3;
- (void)setupPillarGroups;
- (void)dealloc;
- (void)setPeakPower:(float)arg1;
- (double)mapPowerToHeight:(float)arg1;
- (void)stopAllAnimations;
- (void)setupVolumeAnimationWithPower:(float)arg1;
- (unsigned long long)selectNextGroupFromCurrent:(unsigned long long)arg1;
- (void)configBorderGroupsWithPower:(float)arg1;
- (void)configCenterGroupsWithPower:(float)arg1;
- (void)configGroup:(id)arg1 PeakPower:(float)arg2 Delay:(float)arg3;
- (void)configPillar:(id)arg1 PeakPower:(float)arg2 Delay:(float)arg3;
- (id)getAnimationGroupWithStartFrom:(float)arg1 StartTo:(float)arg2 EndFrom:(float)arg3 EndTo:(float)arg4;
- (void)transitionToWaitingAnimation;
- (void)startAnimateTimer;
- (void)stopTimer;
- (void)onAnimateTimerCallback;
- (id)getAnimationGroup;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)pillars;
- (void)setPillars:(id)arg1;
- (unsigned long long)currentActiveGroup;
- (void)setCurrentActiveGroup:(unsigned long long)arg1;
- (id)groupPillars;
- (void)setGroupPillars:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned int)timerCount;
- (void)setTimerCount:(unsigned int)arg1;
- (id)arrPeakPower;
- (void)setArrPeakPower:(id)arg1;
- (int)animatingCount;
- (void)setAnimatingCount:(int)arg1;
- (void).cxx_destruct;
@end
