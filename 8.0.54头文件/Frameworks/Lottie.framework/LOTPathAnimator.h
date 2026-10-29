@interface LOTPathAnimator : LOTAnimatorNode
{
    LOTShapePath * _pathConent; // +0x8
    LOTPathInterpolator * _interpolator; // +0x10
}
- (id)initWithInputNode:(id)arg1 shapePath:(id)arg2;
- (id)valueInterpolators;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)performLocalUpdate;
- (void).cxx_destruct;
@end

