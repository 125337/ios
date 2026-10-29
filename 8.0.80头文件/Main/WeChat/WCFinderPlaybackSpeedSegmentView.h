@interface WCFinderPlaybackSpeedSegmentView : UIView
{
    UIView * _highlightView; // +0x8
    WCFinderPlaybackSpeedAnimationView * _animationIconView; // +0x10
    NSMutableArray * _labels; // +0x18
    long long _currentRateType; // +0x20
}
+ (id)createLabel;
- (id)initWithFrame:(CGRect)arg1 items:(id)arg2;
- (void)setupWithItems:(id)arg1;
- (void)updateWithItems:(id)arg1 selectedRate:(long long)arg2;
- (void)updateWithSelectedRate:(long long)arg1;
- (id)labelForRateType:(long long)arg1;
- (void)updateLabelAlpha;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)stopAnimation;
- (void)doEnhanceAnimation;
- (void)resetEnhanceAnimation;
- (void)updateWording:(id)arg1 forRateType:(long long)arg2;
- (void)restoreAllWordings;
- (void)setNonSelectedLabelsHidden:(BOOL)arg1;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (id)animationIconView;
- (void)setAnimationIconView:(id)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (long long)currentRateType;
- (void)setCurrentRateType:(long long)arg1;
- (void).cxx_destruct;
@end
