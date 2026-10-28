@interface WCPlayerFullScreenProgressBarBase : UIView
{
    BOOL _isActive; // +0x8
    BOOL _isSliderScrubbing; // +0x9
    id <FullScreenVideoProgressBarDelegate> _m_delegate; // +0x10
}
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2 delegate:(id)arg3 params:(id)arg4;
- (void)reloadSliderStartTime;
- (void)updateTotalTime:(double)arg1;
- (void)onPlayStart;
- (void)onPlayStop;
- (float)currentProgress;
- (void)resetPlayRateButtonIfNeed;
- (BOOL)shouldPlayingScrubbingEndAtTime;
- (void)isExpandingProgressWithAnimation:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isSliderScrubbing;
- (void)setIsSliderScrubbing:(BOOL)arg1;
- (void).cxx_destruct;
@end
