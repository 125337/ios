@interface LOTPolystarAnimator : LOTAnimatorNode
{
    LOTNumberInterpolator * _outerRadiusInterpolator; // +0x8
    LOTNumberInterpolator * _innerRadiusInterpolator; // +0x10
    LOTNumberInterpolator * _outerRoundnessInterpolator; // +0x18
    LOTNumberInterpolator * _innerRoundnessInterpolator; // +0x20
    LOTPointInterpolator * _positionInterpolator; // +0x28
    LOTNumberInterpolator * _pointsInterpolator; // +0x30
    LOTNumberInterpolator * _rotationInterpolator; // +0x38
}
- (id)initWithInputNode:(id)arg1 shapeStar:(id)arg2;
- (id)valueInterpolators;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)performLocalUpdate;
- (void).cxx_destruct;
@end

