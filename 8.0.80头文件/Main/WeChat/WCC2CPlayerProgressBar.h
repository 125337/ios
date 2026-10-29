@interface WCC2CPlayerProgressBar : WCPlayerFullScreenProgressBarBase
{
    BOOL _bForbidAutoHidden; // +0x8
    BOOL _isPlaying; // +0x9
    BOOL _showMuteButton; // +0xa
    BOOL _initialMuted; // +0xb
    BOOL _isMuted; // +0xc
    BOOL _isEDREnabled; // +0xd
    id <WCC2CPlayerProgressBarDelegate> _mC2Cdelegate; // +0x10
    NSMutableDictionary * _palette; // +0x18
    UIView * _containerView; // +0x20
    MMUIButton * _playButton; // +0x28
    MMUILabel * _currentTimeLabel; // +0x30
    UIImageView * _separatorLine; // +0x38
    MMUILabel * _totalTimeLabel; // +0x40
    MMUILabel * _playingTipsLabel; // +0x48
    WCC2CPlayerRateLabel * _playRateLabel; // +0x50
    WXVideoSlider * _videoSlider; // +0x58
    MMUIButton * _muteButton; // +0x60
    MMUILabel * _currentTimeLabelForTracking; // +0x68
    UIImageView * _separatorLineForTracking; // +0x70
    MMUILabel * _totalTimeLabelForTracking; // +0x78
    MMTimer * _progressUpdateTimer; // +0x80
    double _totalTime; // +0x88
    unsigned long long _updateTimerCount; // +0x90
}
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2;
- (id)initWithSuper:(id)arg1 totalTime:(double)arg2 palette:(id)arg3;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setMC2Cdelegate:(id)arg1;
- (void)updatePalette:(id)arg1;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)arg1;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)updateTotalTime:(double)arg1;
- (void)updatePlayingTips:(id)arg1;
- (void)onPlayStart;
- (void)startProgressUpdate;
- (void)onPlayStop;
- (void)resetPlayRateIfNeed;
- (void)resetPlayRate;
- (void)setShowMuteButton:(BOOL)arg1;
- (void)setInitialMuted:(BOOL)arg1;
- (id)muteButton;
- (void)updateMuteButtonImage;
- (void)onMuteButtonClicked;
- (void)onFocused:(BOOL)arg1;
- (void)updateProgress;
- (void)onClickPlayButton;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)onSliderScrubbEnd;
- (void)handlePanGesture:(id)arg1;
- (id)mC2Cdelegate;
- (BOOL)bForbidAutoHidden;
- (void)setBForbidAutoHidden:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)showMuteButton;
- (BOOL)initialMuted;
- (id)palette;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)currentTimeLabel;
- (void)setCurrentTimeLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)totalTimeLabel;
- (void)setTotalTimeLabel:(id)arg1;
- (id)playingTipsLabel;
- (void)setPlayingTipsLabel:(id)arg1;
- (id)playRateLabel;
- (void)setPlayRateLabel:(id)arg1;
- (id)videoSlider;
- (void)setVideoSlider:(id)arg1;
- (void)setMuteButton:(id)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)isEDREnabled;
- (void)setIsEDREnabled:(BOOL)arg1;
- (id)currentTimeLabelForTracking;
- (void)setCurrentTimeLabelForTracking:(id)arg1;
- (id)separatorLineForTracking;
- (void)setSeparatorLineForTracking:(id)arg1;
- (id)totalTimeLabelForTracking;
- (void)setTotalTimeLabelForTracking:(id)arg1;
- (id)progressUpdateTimer;
- (void)setProgressUpdateTimer:(id)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (unsigned long long)updateTimerCount;
- (void)setUpdateTimerCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
