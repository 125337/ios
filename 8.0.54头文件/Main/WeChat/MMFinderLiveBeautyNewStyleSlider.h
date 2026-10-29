@interface MMFinderLiveBeautyNewStyleSlider : UIView
{
    BOOL _disableDrag; // +0x8
    BOOL _hideProgressTip; // +0x9
    BOOL _disableProgressLabelZoomingMoveVertical; // +0xa
    BOOL _isZoom; // +0xb
    BOOL _impactOnReachingDefault; // +0xc
    float _defaultValue; // +0x10
    int _minValue; // +0x14
    int _maxValue; // +0x18
    SEL _valueChangedAction; // +0x20
    id _valueChangedTarget; // +0x28
    SEL _touchUpAction; // +0x30
    id _touchUpTarget; // +0x38
    SEL _touchDownAction; // +0x40
    id _touchDownTarget; // +0x48
    id /* block */ _disableDragStatusClickAction; // +0x50
    MMLiveBeautySlider * _sliderView; // +0x58
    UIView * _backgroundView; // +0x60
    UIView * _backgroundStripe; // +0x68
    UIView * _backgroundProgressStripe; // +0x70
    UIView * _backgroundDefaultValueDot; // +0x78
    UILabel * _progressTipLabel; // +0x80
    CAGradientLayer * _gradientLayer; // +0x88
    UITapGestureRecognizer * _disableDragStatusHandler; // +0x90
}
- (id)initWithFrame:(CGRect)arg1;
- (double)sliderInnerPadding;
- (void)layoutSubviews;
- (void)layoutProgressTipLabel;
- (void)layoutBackgroundProgressStripe;
- (void)setDisableDrag:(BOOL)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addEndTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)onDisableDragStatusClick;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onSliderValueChanged:(id)arg1;
- (void)onSliderTouchUp:(id)arg1;
- (void)onSliderTouchDown:(id)arg1;
- (void)onSliderTouchCancel:(id)arg1;
- (void)setIsZoom:(BOOL)arg1;
- (void)setDefaultValue:(float)arg1;
- (void)setValue:(float)arg1;
- (float)value;
- (float)valueInRange;
- (void)setHideProgressTip:(BOOL)arg1;
- (float)defaultValue;
- (int)minValue;
- (void)setMinValue:(int)arg1;
- (int)maxValue;
- (void)setMaxValue:(int)arg1;
- (SEL)valueChangedAction;
- (void)setValueChangedAction:(SEL)arg1;
- (id)valueChangedTarget;
- (void)setValueChangedTarget:(id)arg1;
- (SEL)touchUpAction;
- (void)setTouchUpAction:(SEL)arg1;
- (id)touchUpTarget;
- (void)setTouchUpTarget:(id)arg1;
- (SEL)touchDownAction;
- (void)setTouchDownAction:(SEL)arg1;
- (id)touchDownTarget;
- (void)setTouchDownTarget:(id)arg1;
- (BOOL)disableDrag;
- (BOOL)hideProgressTip;
- (BOOL)disableProgressLabelZoomingMoveVertical;
- (void)setDisableProgressLabelZoomingMoveVertical:(BOOL)arg1;
- (id /* block */)disableDragStatusClickAction;
- (void)setDisableDragStatusClickAction:(id /* block */)arg1;
- (id)sliderView;
- (void)setSliderView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundStripe;
- (void)setBackgroundStripe:(id)arg1;
- (id)backgroundProgressStripe;
- (void)setBackgroundProgressStripe:(id)arg1;
- (id)backgroundDefaultValueDot;
- (void)setBackgroundDefaultValueDot:(id)arg1;
- (id)progressTipLabel;
- (void)setProgressTipLabel:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)disableDragStatusHandler;
- (void)setDisableDragStatusHandler:(id)arg1;
- (BOOL)isZoom;
- (BOOL)impactOnReachingDefault;
- (void)setImpactOnReachingDefault:(BOOL)arg1;
- (void).cxx_destruct;
@end

