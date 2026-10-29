@interface LOTTrimPathNode : LOTAnimatorNode
{
    LOTNumberInterpolator * _startInterpolator; // +0x8
    LOTNumberInterpolator * _endInterpolator; // +0x10
    LOTNumberInterpolator * _offsetInterpolator; // +0x18
    double _startT; // +0x20
    double _endT; // +0x28
    double _offsetT; // +0x30
}
- (id)initWithInputNode:(id)arg1 trimPath:(id)arg2;
- (id)valueInterpolators;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (BOOL)updateWithFrame:(id)arg1 withModifierBlock:(id /* block */)arg2 forceLocalUpdate:(BOOL)arg3;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)localPath;
- (id)outputPath;
- (void).cxx_destruct;
@end

