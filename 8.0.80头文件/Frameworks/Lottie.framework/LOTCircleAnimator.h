@interface LOTCircleAnimator : LOTAnimatorNode
{
    LOTPointInterpolator * _centerInterpolator; // +0x8
    LOTPointInterpolator * _sizeInterpolator; // +0x10
    BOOL _reversed; // +0x18
}
- (id)initWithInputNode:(id)arg1 shapeCircle:(id)arg2;
- (id)valueInterpolators;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)performLocalUpdate;
- (void).cxx_destruct;
@end
