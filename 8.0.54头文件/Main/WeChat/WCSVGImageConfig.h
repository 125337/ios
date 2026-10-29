@interface WCSVGImageConfig : NSObject
{
    UIColor * _tintColor; // +0x8
    double _rotationAngle; // +0x10
    double _opacity; // +0x18
    double _rescale; // +0x20
    CGRect _bounds; // +0x28
}
+ (id)imageConfigWithTintColor:(id)arg1 bounds:(CGRect)arg2 rotationAngle:(double)arg3 opacity:(double)arg4;
+ (id)imageConfigWithTintColor:(id)arg1 bounds:(CGRect)arg2 rotationAngle:(double)arg3 opacity:(double)arg4 scale:(double)arg5;
- (void)setRotationAngle:(double)arg1;
- (id)tintColor;
- (void)setTintColor:(id)arg1;
- (CGRect)bounds;
- (void)setBounds:(CGRect)arg1;
- (double)rotationAngle;
- (double)opacity;
- (void)setOpacity:(double)arg1;
- (double)rescale;
- (void)setRescale:(double)arg1;
- (void).cxx_destruct;
@end

