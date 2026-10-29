@interface MMFinderLivePkTaskedBonusBarRewardContentView : UIView <MMFinderLivePkTaskedBonusBarHighlightedContentView>
{
    UIView * _scalingContainerView; // +0x8
    UILabel * _countdownLabel; // +0x10
    UILabel * _descriptionLabel; // +0x18
    MMFinderLivePkTaskedBonusModel * _model; // +0x20
    MMTimer * _timer; // +0x28
    NSNumberFormatter * _multiplierFormatter; // +0x30
    double _pointOfInterestInLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)contentShadowColor;
- (CGPoint)highlightedPointOfInterest;
- (void)updateWithModel:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onTimerTick;
- (void)layoutSubviews;
- (unsigned long long)currentCountdownSeconds;
- (id)scalingContainerView;
- (void)setScalingContainerView:(id)arg1;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)multiplierFormatter;
- (void)setMultiplierFormatter:(id)arg1;
- (double)pointOfInterestInLabel;
- (void)setPointOfInterestInLabel:(double)arg1;
- (void).cxx_destruct;
@end
