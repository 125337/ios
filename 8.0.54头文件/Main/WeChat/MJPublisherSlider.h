@interface MJPublisherSlider : UIControl
{
    BOOL _continuous; // +0x8
    BOOL _isRelativeTracking; // +0x9
    BOOL _trackInteractionEnabled; // +0xa
    BOOL _isThumbTracking; // +0xb
    float _value; // +0xc
    float _minimumValue; // +0x10
    float _maximumValue; // +0x14
    float _initialTrackingValue; // +0x18
    float _baseValue; // +0x1c
    UIColor * _minimumTrackTintColor; // +0x20
    UIColor * _maximumTrackTintColor; // +0x28
    MJGradientConfiguration * _minimumTrackGradient; // +0x30
    MJGradientConfiguration * _maximumTrackGradient; // +0x38
    MJGradientConfiguration * _trackGradient; // +0x40
    UIImage * _minimumValueImage; // +0x48
    UIImage * _maximumValueImage; // +0x50
    double _thickness; // +0x58
    double _thumbSize; // +0x60
    UIColor * _thumbColor; // +0x68
    UIColor * _valueTextColor; // +0x70
    UIFont * _valueTextFont; // +0x78
    id <MJPublisherSliderAccessibilityDelegate> _accessibilityDelegate; // +0x80
    CALayer * _sliderLayer; // +0x88
    CALayer * _trackLayer; // +0x90
    CALayer * _minimumTrackLayer; // +0x98
    CALayer * _maximumTrackLayer; // +0xa0
    CAGradientLayer * _minimumTrackGradientLayer; // +0xa8
    CAGradientLayer * _maximumTrackGradientLayer; // +0xb0
    CAGradientLayer * _overrideTrackGradientLayer; // +0xb8
    CALayer * _thumbLayer; // +0xc0
    CALayer * _minimumImageLayer; // +0xc8
    CALayer * _maximumImageLayer; // +0xd0
    double _trackPaddingWithImage; // +0xd8
    CATextLayer * _textLayer; // +0xe0
    UIEdgeInsets _touchEdgeInsets; // +0xe8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (CGSize)intrinsicContentSize;
- (UIEdgeInsets)alignmentRectInsets;
- (void)layoutSublayersOfLayer:(id)arg1;
- (CGRect)sliderRectForBounds:(CGRect)arg1;
- (CGRect)trackRectForBounds:(CGRect)arg1;
- (CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
- (CGRect)slidingRectForTrackRect:(CGRect)arg1;
- (CGRect)minimumValueImageRectForBounds:(CGRect)arg1;
- (CGRect)maximumValueImageRectForBounds:(CGRect)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)setMaximumTrackTintColor:(id)arg1;
- (void)setMinimumTrackGradient:(id)arg1;
- (void)setMaximumTrackGradient:(id)arg1;
- (void)setTrackGradient:(id)arg1;
- (void)setThickness:(double)arg1;
- (void)setThumbSize:(double)arg1;
- (void)setThumbColor:(id)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (id)trackLayer;
- (id)minimumTrackLayer;
- (id)maximumTrackLayer;
- (id)minimumTrackGradientLayer;
- (id)maximumTrackGradientLayer;
- (id)overrideTrackGradientLayer;
- (id)thumbLayer;
- (id)minimumImageLayer;
- (id)maximumImageLayer;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)updateValueWithTouch:(id)arg1;
- (float)valueForTouchPoint:(CGPoint)arg1 withTrackRect:(CGRect)arg2;
- (void)updateThumbPosition:(BOOL)arg1;
- (void)hideValue;
- (void)showValue;
- (void)setValueTextFont:(id)arg1;
- (void)setValueTextColor:(id)arg1;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (float)value;
- (float)minimumValue;
- (void)setMinimumValue:(float)arg1;
- (float)maximumValue;
- (void)setMaximumValue:(float)arg1;
- (id)minimumTrackTintColor;
- (id)maximumTrackTintColor;
- (id)minimumTrackGradient;
- (id)maximumTrackGradient;
- (id)trackGradient;
- (id)minimumValueImage;
- (id)maximumValueImage;
- (double)thickness;
- (double)thumbSize;
- (id)thumbColor;
- (BOOL)isContinuous;
- (void)setContinuous:(BOOL)arg1;
- (BOOL)isRelativeTracking;
- (void)setIsRelativeTracking:(BOOL)arg1;
- (BOOL)trackInteractionEnabled;
- (void)setTrackInteractionEnabled:(BOOL)arg1;
- (UIEdgeInsets)touchEdgeInsets;
- (void)setTouchEdgeInsets:(UIEdgeInsets)arg1;
- (id)valueTextColor;
- (id)valueTextFont;
- (id)accessibilityDelegate;
- (void)setAccessibilityDelegate:(id)arg1;
- (BOOL)isThumbTracking;
- (void)setIsThumbTracking:(BOOL)arg1;
- (float)initialTrackingValue;
- (void)setInitialTrackingValue:(float)arg1;
- (float)baseValue;
- (void)setBaseValue:(float)arg1;
- (id)sliderLayer;
- (void)setSliderLayer:(id)arg1;
- (void)setTrackLayer:(id)arg1;
- (void)setMinimumTrackLayer:(id)arg1;
- (void)setMaximumTrackLayer:(id)arg1;
- (void)setMinimumTrackGradientLayer:(id)arg1;
- (void)setMaximumTrackGradientLayer:(id)arg1;
- (void)setOverrideTrackGradientLayer:(id)arg1;
- (void)setThumbLayer:(id)arg1;
- (void)setMinimumImageLayer:(id)arg1;
- (void)setMaximumImageLayer:(id)arg1;
- (double)trackPaddingWithImage;
- (void)setTrackPaddingWithImage:(double)arg1;
- (id)textLayer;
- (void)setTextLayer:(id)arg1;
- (void).cxx_destruct;
@end

