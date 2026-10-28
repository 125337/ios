@interface OMJHandleBoxBorderStyle : NSObject
{
    UIColor * _strokeColor; // +0x8
    double _strokeWidth; // +0x10
    UIColor * _shadowColor; // +0x18
    double _shadowWidth; // +0x20
    OMJDashLineStyle * _dashLineStyle; // +0x28
}
- (id)initWithStrokeColor:(id)arg1 strokeWidth:(double)arg2 shadowColor:(id)arg3 shadowWidth:(double)arg4;
- (id)initWithStrokeColor:(id)arg1 strokeWidth:(double)arg2 shadowColor:(id)arg3 shadowWidth:(double)arg4 dashLineStyle:(id)arg5;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (double)shadowWidth;
- (void)setShadowWidth:(double)arg1;
- (id)dashLineStyle;
- (void).cxx_destruct;
@end
