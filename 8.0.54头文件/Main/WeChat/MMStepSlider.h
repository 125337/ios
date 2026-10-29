@interface MMStepSlider : UIControl
{
    BOOL _sliderOn; // +0x8
    UIImageView * _sliderImageView; // +0x10
    UIView * _trackViewNormal; // +0x18
    unsigned int _value; // +0x20
    unsigned int _stepCount; // +0x24
    id <MMStepSliderDelegate> m_delegate; // +0x28
    NSArray * _scaleTextArray; // +0x30
    NSArray * _scaleTextSizeArray; // +0x38
}
- (id)initWithWidth:(double)arg1 TextArray:(id)arg2 TextSizeArray:(id)arg3;
- (void)setFrame:(CGRect)arg1;
- (void)commonInit;
- (void)layoutSubviews;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)genScaleLabel:(id)arg1 size:(double)arg2;
- (void)setValue:(unsigned int)arg1;
- (float)xForValue:(unsigned int)arg1;
- (void)touchTrackNormalView:(long long)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (unsigned int)value;
- (unsigned int)stepCount;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)scaleTextArray;
- (id)scaleTextSizeArray;
- (void).cxx_destruct;
@end

