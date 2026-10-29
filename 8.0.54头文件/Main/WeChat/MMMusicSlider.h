@interface MMMusicSlider : UISlider
{
    UIColor * _frontgroundColor; // +0x8
    UIColor * _backgroundColor; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2 frontgroundColor:(id)arg3;
- (void)resetView;
- (id)getTrackImage:(id)arg1;
- (id)getDotImage:(id)arg1 withSize:(CGSize)arg2;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)frontgroundColor;
- (void)setFrontgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end

