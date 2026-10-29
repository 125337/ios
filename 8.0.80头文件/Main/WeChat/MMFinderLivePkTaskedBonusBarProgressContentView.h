@interface MMFinderLivePkTaskedBonusBarProgressContentView : UIView <MMFinderLivePkTaskedBonusBarContentView>
{
    UIView * _scalingContainerView; // +0x8
    UILabel * _countdownLabel; // +0x10
    MMFinderLiveSpinnerLabel * _progressLabel; // +0x18
    MMFinderLivePkTaskedBonusModel * _model; // +0x20
    NSArray * _progressItems; // +0x28
    MMTimer * _timer; // +0x30
    unsigned long long _elapsedTime; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)contentShadowColor;
- (id)currentPreferredGiftId;
- (void)updateWithModel:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onTimerTick;
- (void)layoutSubviews;
- (unsigned long long)currentCountdownSeconds;
- (id)scalingContainerView;
- (void)setScalingContainerView:(id)arg1;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)progressItems;
- (void)setProgressItems:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned long long)elapsedTime;
- (void)setElapsedTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
