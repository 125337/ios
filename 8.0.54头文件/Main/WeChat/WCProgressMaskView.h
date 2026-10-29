@interface WCProgressMaskView : UIView
{
    UIView * _contentContainerView; // +0x8
    WCProgressCircleView * _progressCircleView; // +0x10
    UIImageView * _progressIconView; // +0x18
    UILabel * _progressLabel; // +0x20
    double _contentMarginTopRate; // +0x28
    NSString * _currentLabelText; // +0x30
    double _labelTextMarginTop; // +0x38
    UIFont * _labelTextFont; // +0x40
    UIColor * _labelTextColor; // +0x48
    CGSize _progressCircleViewSize; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)showInfinity;
- (void)showInfinityWithText:(id)arg1;
- (void)showForProgress:(double)arg1;
- (void)showForProgress:(double)arg1 withText:(id)arg2;
- (void)showForProgress:(double)arg1 withText:(id)arg2 byStepMode:(long long)arg3;
- (void)dismiss;
- (void)dismissAtProgress:(double)arg1;
- (void)dismissWithText:(id)arg1 forType:(long long)arg2;
- (void)dismissWithText:(id)arg1 forType:(long long)arg2 atProgress:(double)arg3;
- (void)dismissWithText:(id)arg1 forType:(long long)arg2 atProgress:(double)arg3 afterDelayMS:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)_dismissWithText:(id)arg1 forType:(long long)arg2 afterDelayMS:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setProgressSize:(CGSize)arg1;
- (void)setContentMarginTopRate:(double)arg1;
- (void)setLabelTextMarginTop:(double)arg1;
- (void)setLabelTextFont:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setProgressBorderWidth:(double)arg1;
- (void)setProgressFrontColor:(id)arg1;
- (void)setProgressBackColor:(id)arg1;
- (void)updateProgressInfoByType:(long long)arg1;
- (double)maxTextWidth;
- (void)resizeView;
- (void)resetDefaultStyle;
- (void)initView;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)progressCircleView;
- (void)setProgressCircleView:(id)arg1;
- (id)progressIconView;
- (void)setProgressIconView:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (CGSize)progressCircleViewSize;
- (void)setProgressCircleViewSize:(CGSize)arg1;
- (double)contentMarginTopRate;
- (id)currentLabelText;
- (void)setCurrentLabelText:(id)arg1;
- (double)labelTextMarginTop;
- (id)labelTextFont;
- (id)labelTextColor;
- (void).cxx_destruct;
@end

