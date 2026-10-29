@interface OVCHandleBoxBorderStyle : NSObject
{
    UIColor * _strokeColor; // +0x8
    double _strokeWidth; // +0x10
    UIColor * _shadowColor; // +0x18
    double _shadowWidth; // +0x20
}
- (id)initWithStrokeColor:(id)arg1 strokeWidth:(double)arg2 shadowColor:(id)arg3 shadowWidth:(double)arg4;
- (id)description;
- (id)strokeColor;
- (double)strokeWidth;
- (id)shadowColor;
- (double)shadowWidth;
- (void).cxx_destruct;
@end

