@interface MMLiveBeautyStyleSlider : UIView
{
    BOOL _hideProgressTip; // +0x8
    BOOL _hasCheckedSliderThumbImageView; // +0x9
    float _defaultValue; // +0xc
    int _minValue; // +0x10
    int _maxValue; // +0x14
    SEL _valueChangedAction; // +0x18
    id _valueChangedTarget; // +0x20
    SEL _touchUpAction; // +0x28
    id _touchUpTarget; // +0x30
    MMLiveBeautySlider * _sliderView; // +0x38
    UIView * _backgroundView; // +0x40
    UIView * _backgroundStripe; // +0x48
    UIView * _backgroundProgressStripe; // +0x50
    UIView * _backgroundDefaultValueDot; // +0x58
    UILabel * _progressTipLabel; // +0x60
    UIImageView * _sliderThumbImageView; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutProgressTipLabel;
- (void)layoutBackgroundProgressStripe;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addEndTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)onSliderValueChanged:(id)arg1;
- (void)onSliderTouchUp:(id)arg1;
- (void)setDefaultValue:(float)arg1;
- (void)setValue:(float)arg1;
- (float)value;
- (void)setHideProgressTip:(BOOL)arg1;
- (float)defaultValue;
- (SEL)valueChangedAction;
- (void)setValueChangedAction:(SEL)arg1;
- (id)valueChangedTarget;
- (void)setValueChangedTarget:(id)arg1;
- (SEL)touchUpAction;
- (void)setTouchUpAction:(SEL)arg1;
- (id)touchUpTarget;
- (void)setTouchUpTarget:(id)arg1;
- (BOOL)hideProgressTip;
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
- (int)minValue;
- (void)setMinValue:(int)arg1;
- (int)maxValue;
- (void)setMaxValue:(int)arg1;
- (id)sliderThumbImageView;
- (void)setSliderThumbImageView:(id)arg1;
- (BOOL)hasCheckedSliderThumbImageView;
- (void)setHasCheckedSliderThumbImageView:(BOOL)arg1;
- (void).cxx_destruct;
@end

