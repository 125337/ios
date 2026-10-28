@interface LOTRenderGroup : LOTRenderNode
{
    LOTAnimatorNode * _rootNode; // +0x8
    LOTBezierPath * _outputPath; // +0x10
    LOTBezierPath * _localPath; // +0x18
    BOOL _rootNodeHasUpdate; // +0x20
    LOTNumberInterpolator * _opacityInterpolator; // +0x28
    LOTTransformInterpolator * _transformInterpolator; // +0x30
    CALayer * _containerLayer; // +0x38
}
- (id)initWithInputNode:(id)arg1 contents:(id)arg2 keyname:(id)arg3;
- (id)valueInterpolators;
- (void)buildContents:(id)arg1;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (BOOL)updateWithFrame:(id)arg1 withModifierBlock:(id /* block */)arg2 forceLocalUpdate:(BOOL)arg3;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (void)setPathShouldCacheLengths:(BOOL)arg1;
- (id)localPath;
- (id)outputPath;
- (void)searchNodesForKeypath:(id)arg1;
- (void)setValueDelegate:(id)arg1 forKeypath:(id)arg2;
- (id)containerLayer;
- (void).cxx_destruct;
@end
