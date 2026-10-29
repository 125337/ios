@interface YYTextBorder : NSObject <NSCoding, NSCopying>
{
    int _lineJoin; // +0x8
    long long _lineStyle; // +0x10
    double _strokeWidth; // +0x18
    UIColor * _strokeColor; // +0x20
    double _cornerRadius; // +0x28
    YYTextShadow * _shadow; // +0x30
    UIColor * _fillColor; // +0x38
    UIEdgeInsets _insets; // +0x40
}
+ (id)borderWithLineStyle:(long long)arg1 lineWidth:(double)arg2 strokeColor:(id)arg3;
+ (id)borderWithFillColor:(id)arg1 cornerRadius:(double)arg2;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)lineStyle;
- (void)setLineStyle:(long long)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (int)lineJoin;
- (void)setLineJoin:(int)arg1;
- (UIEdgeInsets)insets;
- (void)setInsets:(UIEdgeInsets)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)shadow;
- (void)setShadow:(id)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (void).cxx_destruct;
@end
