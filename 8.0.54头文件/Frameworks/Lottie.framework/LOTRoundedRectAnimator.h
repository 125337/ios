@interface LOTRoundedRectAnimator : LOTAnimatorNode
{
    LOTPointInterpolator * _centerInterpolator; // +0x8
    LOTPointInterpolator * _sizeInterpolator; // +0x10
    LOTNumberInterpolator * _cornerRadiusInterpolator; // +0x18
    BOOL _reversed; // +0x20
}
- (id)initWithInputNode:(id)arg1 shapeRectangle:(id)arg2;
- (id)valueInterpolators;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)addCorner:(CGPoint)arg1 withRadius:(double)arg2 toPath:(id)arg3 clockwise:(BOOL)arg4;
- (void)performLocalUpdate;
- (void).cxx_destruct;
@end

