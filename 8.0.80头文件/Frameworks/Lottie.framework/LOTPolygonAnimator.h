@interface LOTPolygonAnimator : LOTAnimatorNode
{
    LOTNumberInterpolator * _outerRadiusInterpolator; // +0x8
    LOTNumberInterpolator * _outerRoundnessInterpolator; // +0x10
    LOTPointInterpolator * _positionInterpolator; // +0x18
    LOTNumberInterpolator * _pointsInterpolator; // +0x20
    LOTNumberInterpolator * _rotationInterpolator; // +0x28
}
- (id)initWithInputNode:(id)arg1 shapePolygon:(id)arg2;
- (id)valueInterpolators;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)performLocalUpdate;
- (void).cxx_destruct;
@end
