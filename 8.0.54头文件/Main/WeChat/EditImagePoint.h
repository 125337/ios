@interface EditImagePoint : NSObject
{
    CGPoint _point; // +0x8
    UIColor * _color; // +0x18
    double _angle; // +0x20
}
- (id)initWithCGPoint:(CGPoint)arg1;
- (id)initWithCGPoint:(CGPoint)arg1 withColor:(id)arg2 withRotation:(double)arg3;
- (CGPoint)getCGPoint;
- (id)getColor;
- (double)getAngle;
- (void).cxx_destruct;
@end

