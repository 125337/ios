@interface QHeatNodeData : NSObject <QQuadTreeNodeData>
{
    double _value; // +0x8
    CGPoint _point; // +0x10
}
- (CGPoint)point;
- (void)setPoint:(CGPoint)arg1;
- (double)value;
- (void)setValue:(double)arg1;
@end
