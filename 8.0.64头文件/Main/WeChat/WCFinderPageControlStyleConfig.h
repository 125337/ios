@interface WCFinderPageControlStyleConfig : NSObject
{
    double _dotSize; // +0x8
    UIColor * _dotNormalColor; // +0x10
    UIColor * _dotHighlightColor; // +0x18
    double _dotsHorizontalPadding; // +0x20
    double _dotsVerticalPadding; // +0x28
    UIColor * _dotNormalShadowColor; // +0x30
    UIColor * _dotHighlightShadowColor; // +0x38
    double _dotShadowRadius; // +0x40
    CGSize _dotShadowOffset; // +0x48
}
+ (id)defaultConfig;
- (double)dotSize;
- (void)setDotSize:(double)arg1;
- (id)dotNormalColor;
- (void)setDotNormalColor:(id)arg1;
- (id)dotHighlightColor;
- (void)setDotHighlightColor:(id)arg1;
- (double)dotsHorizontalPadding;
- (void)setDotsHorizontalPadding:(double)arg1;
- (double)dotsVerticalPadding;
- (void)setDotsVerticalPadding:(double)arg1;
- (id)dotNormalShadowColor;
- (void)setDotNormalShadowColor:(id)arg1;
- (id)dotHighlightShadowColor;
- (void)setDotHighlightShadowColor:(id)arg1;
- (CGSize)dotShadowOffset;
- (void)setDotShadowOffset:(CGSize)arg1;
- (double)dotShadowRadius;
- (void)setDotShadowRadius:(double)arg1;
- (void).cxx_destruct;
@end
