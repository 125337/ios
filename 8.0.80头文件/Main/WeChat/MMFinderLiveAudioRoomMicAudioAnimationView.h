@interface MMFinderLiveAudioRoomMicAudioAnimationView : UIView
{
    BOOL _isRounded; // +0x8
    BOOL _canShowAnimation; // +0x9
    BOOL _isInAnimation; // +0xa
    UIColor * _audioWaveColor; // +0x10
    double _viewHeightWhenAnimationStart; // +0x18
    double _borderWidthForWaveView; // +0x20
    UIView * _firstWaveView; // +0x28
    UIView * _secondWaveView; // +0x30
    CAAnimationGroup * _firstWaveAnimation; // +0x38
    CAAnimationGroup * _secondWaveAnimation; // +0x40
    MMFinderLiveAudioRoomMicAudioAnimationDelegateObj * _firstWaveAnimationDelegateObj; // +0x48
    MMFinderLiveAudioRoomMicAudioAnimationDelegateObj * _secondWaveAnimationDelegateObj; // +0x50
}
- (void)layoutSubviews;
- (void)setIsRounded:(BOOL)arg1;
- (id)makeCircleView;
- (void)checkAndResetWaveAnimation;
- (void)removeWaveAnimationWithResetFlag:(BOOL)arg1;
- (void)realStartWaveAnimation;
- (id)makeWaveAnimationWithCornerRadius:(double)arg1;
- (void)startFirstAnimation;
- (void)startSecondAnimation;
- (void)updateAudioWaveColor:(id)arg1;
- (void)startWaveAnimation;
- (void)stopWaveAnimationWithForceStopFlag:(BOOL)arg1;
- (void)handleAnimationDidStopWithDelegateObj:(id)arg1 finishedFlag:(BOOL)arg2;
- (BOOL)isRounded;
- (id)audioWaveColor;
- (void)setAudioWaveColor:(id)arg1;
- (double)viewHeightWhenAnimationStart;
- (void)setViewHeightWhenAnimationStart:(double)arg1;
- (double)borderWidthForWaveView;
- (void)setBorderWidthForWaveView:(double)arg1;
- (BOOL)canShowAnimation;
- (void)setCanShowAnimation:(BOOL)arg1;
- (BOOL)isInAnimation;
- (void)setIsInAnimation:(BOOL)arg1;
- (id)firstWaveView;
- (void)setFirstWaveView:(id)arg1;
- (id)secondWaveView;
- (void)setSecondWaveView:(id)arg1;
- (id)firstWaveAnimation;
- (void)setFirstWaveAnimation:(id)arg1;
- (id)secondWaveAnimation;
- (void)setSecondWaveAnimation:(id)arg1;
- (id)firstWaveAnimationDelegateObj;
- (void)setFirstWaveAnimationDelegateObj:(id)arg1;
- (id)secondWaveAnimationDelegateObj;
- (void)setSecondWaveAnimationDelegateObj:(id)arg1;
- (void).cxx_destruct;
@end
