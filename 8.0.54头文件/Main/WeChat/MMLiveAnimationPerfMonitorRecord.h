@interface MMLiveAnimationPerfMonitorRecord : MMLiveUIPerfMonitorRecord
{
    BOOL _isInfinity; // +0x8
    float _animFrameRate; // +0xc
    UIView * _animationView; // +0x10
    double _predictStartTime; // +0x18
    double _predictUpdateComposeRectTime; // +0x20
    double _animDuration; // +0x28
}
- (id)initWithAnimationView:(id)arg1;
- (void)initDefaultDatas;
- (void)parseAnimation;
- (void)updateComposeRect:(CGRect)arg1;
- (void)updateComposeSizePercent:(double)arg1;
- (BOOL)startMonitorIfNeed;
- (BOOL)stopMonitorIfNeed;
- (BOOL)isValid;
- (void)clear;
- (BOOL)isAnimationValid;
- (void)autoUpdateComposeRect;
- (BOOL)autoStartMonitor;
- (BOOL)autoEndMonitor;
- (double)remainStartDelayTime;
- (double)remainAnimDuration;
- (double)remainComposeRectUpdateDelayTime;
- (id)rootView;
- (double)minArea;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (float)animFrameRate;
- (void)setAnimFrameRate:(float)arg1;
- (double)predictStartTime;
- (void)setPredictStartTime:(double)arg1;
- (double)predictUpdateComposeRectTime;
- (void)setPredictUpdateComposeRectTime:(double)arg1;
- (double)animDuration;
- (void)setAnimDuration:(double)arg1;
- (BOOL)isInfinity;
- (void)setIsInfinity:(BOOL)arg1;
- (void).cxx_destruct;
@end

