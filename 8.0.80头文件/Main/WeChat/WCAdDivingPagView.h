@interface WCAdDivingPagView : WCAdPagView
{
    BOOL _isTimerPaused; // +0x30
    BOOL _shouldResumeTimerAfterForeground; // +0x31
    BOOL _shouldResumePAGAfterForeground; // +0x32
    id <WCAdDivingPagViewDelegate> _divingDelegate; // +0x38
    long long _divingState; // +0x40
    MMTimer * _divingTimer; // +0x48
}
- (void)initView;
- (void)dealloc;
- (void)generateDivingTimer;
- (void)destroyDivingTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)divingTimerTick;
- (void)playForSure;
- (void)onPAGPlayEnd;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)onWillEnterForeground;
- (void)onAnimationUpdate:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)initPagView;
- (void)play;
- (void)pause;
- (void)stop;
- (id)divingDelegate;
- (void)setDivingDelegate:(id)arg1;
- (long long)divingState;
- (void)setDivingState:(long long)arg1;
- (id)divingTimer;
- (void)setDivingTimer:(id)arg1;
- (BOOL)isTimerPaused;
- (void)setIsTimerPaused:(BOOL)arg1;
- (BOOL)shouldResumeTimerAfterForeground;
- (void)setShouldResumeTimerAfterForeground:(BOOL)arg1;
- (BOOL)shouldResumePAGAfterForeground;
- (void)setShouldResumePAGAfterForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
