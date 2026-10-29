@interface TextStyleAttributeObj : NSObject
{
    BOOL _isOuterStroke; // +0x8
    BOOL _customShadow; // +0x9
    NSNumber * _textAttributeStrokeWidthNum; // +0x10
    UIColor * _textAttributeStrokeColor; // +0x18
    UIColor * _shadowColor; // +0x20
    double _shadowBlurRadius; // +0x28
    CGSize _shadowOffset; // +0x30
}
- (BOOL)enableDrawInOuterStroke;
- (BOOL)isOuterStroke;
- (void)setIsOuterStroke:(BOOL)arg1;
- (id)textAttributeStrokeWidthNum;
- (void)setTextAttributeStrokeWidthNum:(id)arg1;
- (id)textAttributeStrokeColor;
- (void)setTextAttributeStrokeColor:(id)arg1;
- (BOOL)customShadow;
- (void)setCustomShadow:(BOOL)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (CGSize)shadowOffset;
- (void)setShadowOffset:(CGSize)arg1;
- (double)shadowBlurRadius;
- (void)setShadowBlurRadius:(double)arg1;
- (void).cxx_destruct;
@end
