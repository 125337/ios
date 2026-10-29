@interface LOTRepeaterRenderer : LOTRenderNode
{
    LOTTransformInterpolator * _transformInterpolator; // +0x8
    LOTNumberInterpolator * _copiesInterpolator; // +0x10
    LOTNumberInterpolator * _offsetInterpolator; // +0x18
    LOTNumberInterpolator * _startOpacityInterpolator; // +0x20
    LOTNumberInterpolator * _endOpacityInterpolator; // +0x28
    CALayer * _instanceLayer; // +0x30
    CAReplicatorLayer * _replicatorLayer; // +0x38
    CALayer * centerPoint_DEBUG; // +0x40
}
- (id)initWithInputNode:(id)arg1 shapeRepeater:(id)arg2;
- (id)valueInterpolators;
- (void)recursivelyAddChildLayers:(id)arg1;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)performLocalUpdate;
- (void).cxx_destruct;
@end

