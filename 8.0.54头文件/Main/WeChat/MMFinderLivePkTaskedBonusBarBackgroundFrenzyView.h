@interface MMFinderLivePkTaskedBonusBarBackgroundFrenzyView : MMLiveGradientLayerView
{
    double _relativeHorizontalShinePosition; // +0x8
    UIView * _patternContainerView; // +0x10
    MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternAnimationView * _patternAnimationView; // +0x18
    MMFinderLivePkTaskedBonusBarBackgroundFrenzyPatternView * _patternView; // +0x20
    MMLiveGradientLayerView * _topBorderView; // +0x28
    MMLiveGradientLayerView * _bottomBorderView; // +0x30
    UIImageView * _shineView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)shineViewHidden;
- (void)setShineViewHidden:(BOOL)arg1;
- (void)setRelativeHorizontalShinePosition:(double)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)startPatternAnimation;
- (void)stopPatternAnimation;
- (double)relativeHorizontalShinePosition;
- (id)patternContainerView;
- (void)setPatternContainerView:(id)arg1;
- (id)patternAnimationView;
- (void)setPatternAnimationView:(id)arg1;
- (id)patternView;
- (void)setPatternView:(id)arg1;
- (id)topBorderView;
- (void)setTopBorderView:(id)arg1;
- (id)bottomBorderView;
- (void)setBottomBorderView:(id)arg1;
- (id)shineView;
- (void)setShineView:(id)arg1;
- (void).cxx_destruct;
@end

