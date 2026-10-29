@interface LOTRenderNode : LOTAnimatorNode
{
    CAShapeLayer * _outputLayer; // +0x8
}
- (id)initWithInputNode:(id)arg1 keyName:(id)arg2;
- (id)actionsForRenderLayer;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)localPath;
- (id)outputPath;
- (id)outputLayer;
- (void).cxx_destruct;
@end

