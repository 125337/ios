@interface WebSearchTagStyle : NSObject
{
    BOOL _needContainer; // +0x8
    UIColor * _textColor; // +0x10
    double _fontSize; // +0x18
    double _fontWeight; // +0x20
    UIColor * _bgColor; // +0x28
    double _borderRadius; // +0x30
    NSArray * _gradientColors; // +0x38
    UIEdgeInsets _padding; // +0x40
}
- (id)initWithTextColor:(id)arg1 fontSize:(double)arg2 fontWeight:(double)arg3 bgColor:(id)arg4 padding:(UIEdgeInsets)arg5 borderRadius:(double)arg6 needContainer:(BOOL)arg7;
- (id)initWithTextColor:(id)arg1 fontSize:(double)arg2 fontWeight:(double)arg3 gradientColors:(id)arg4 padding:(UIEdgeInsets)arg5 borderRadius:(double)arg6 needContainer:(BOOL)arg7;
- (id)initWithTextColor:(id)arg1;
- (id)textColor;
- (double)fontSize;
- (double)fontWeight;
- (id)bgColor;
- (UIEdgeInsets)padding;
- (double)borderRadius;
- (BOOL)needContainer;
- (id)gradientColors;
- (void).cxx_destruct;
@end
