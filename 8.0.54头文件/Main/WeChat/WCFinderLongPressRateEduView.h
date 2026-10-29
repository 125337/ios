@interface WCFinderLongPressRateEduView : UIView <PAGViewListener>
{
    double _tipsLabelMarginCenter; // +0x8
    id <WCFinderLongPressRateEduViewDelegate> _delegate; // +0x10
    UILabel * _tipsLabel; // +0x18
    PAGView * _animationView; // +0x20
    CGSize _layoutSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 pathForResource:(id)arg2 tipsWording:(id)arg3;
- (void)animateToShow;
- (void)animateToHideWithCompletion:(id /* block */)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)onAnimationEnd:(id)arg1;
- (double)tipsLabelMarginCenter;
- (void)setTipsLabelMarginCenter:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (void).cxx_destruct;
@end

