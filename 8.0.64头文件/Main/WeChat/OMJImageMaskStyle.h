@interface OMJImageMaskStyle : NSObject
{
    UIColor * _maskColor; // +0x8
    UIColor * _strokeColor; // +0x10
    double _strokeWidth; // +0x18
    UIColor * _shadowColor; // +0x20
    double _shadowWidth; // +0x28
    UIColor * _cornerColor; // +0x30
    double _cornerWidth; // +0x38
    double _cornerLength; // +0x40
    CGPoint _centerOffset; // +0x48
    UIEdgeInsets _displayInsets; // +0x58
}
+ (id)defaultStyle;
+ (id)clearStyle;
- (id)initWithdisplayInsets:(UIEdgeInsets)arg1 centerOffset:(CGPoint)arg2 maskColor:(id)arg3 strokeColor:(id)arg4 strokeWidth:(double)arg5 shadowColor:(id)arg6 shadowWidth:(double)arg7 cornerColor:(id)arg8 cornerWidth:(double)arg9 cornerLength:(double)arg10;
- (id)description;
- (UIEdgeInsets)displayInsets;
- (void)setDisplayInsets:(UIEdgeInsets)arg1;
- (CGPoint)centerOffset;
- (void)setCenterOffset:(CGPoint)arg1;
- (id)maskColor;
- (void)setMaskColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (double)shadowWidth;
- (void)setShadowWidth:(double)arg1;
- (id)cornerColor;
- (void)setCornerColor:(id)arg1;
- (double)cornerWidth;
- (void)setCornerWidth:(double)arg1;
- (double)cornerLength;
- (void)setCornerLength:(double)arg1;
- (void).cxx_destruct;
@end
