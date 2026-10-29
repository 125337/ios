@interface MMLiveBeautySlider : UISlider
{
    BOOL _active; // +0x8
    BOOL _impactOccurred; // +0x9
    float _defaultValue; // +0xc
    UIView * _trackView; // +0x10
    MMLiveGradientLayerView * _filledTrackView; // +0x18
    UIView * _defaultIndicatorView; // +0x20
    UILabel * _valueLabel; // +0x28
    UIImpactFeedbackGenerator * _impactGenerator; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setValue:(float)arg1;
- (void)setDefaultValue:(float)arg1;
- (void)layoutSubviews;
- (CGRect)trackRectForBounds:(CGRect)arg1;
- (CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
- (void)onSliderValueChanged;
- (void)onSliderTouchUp;
- (void)onSliderTouchDown;
- (void)updateValue;
- (void)layoutTrackViewWithTrackRect:(CGRect)arg1;
- (void)layoutDefaultIndicatorWithTrackRect:(CGRect)arg1;
- (void)layoutValueLabelWithTrackRect:(CGRect)arg1;
- (float)defaultValue;
- (BOOL)active;
- (id)trackView;
- (void)setTrackView:(id)arg1;
- (id)filledTrackView;
- (void)setFilledTrackView:(id)arg1;
- (id)defaultIndicatorView;
- (void)setDefaultIndicatorView:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)impactGenerator;
- (void)setImpactGenerator:(id)arg1;
- (BOOL)impactOccurred;
- (void)setImpactOccurred:(BOOL)arg1;
- (void).cxx_destruct;
@end
