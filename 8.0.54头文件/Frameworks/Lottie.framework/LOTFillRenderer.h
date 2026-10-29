@interface LOTFillRenderer : LOTRenderNode
{
    LOTColorInterpolator * colorInterpolator_; // +0x8
    LOTNumberInterpolator * opacityInterpolator_; // +0x10
    BOOL _evenOddFillRule; // +0x18
    CALayer * centerPoint_DEBUG; // +0x20
}
- (id)initWithInputNode:(id)arg1 shapeFill:(id)arg2;
- (id)valueInterpolators;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)actionsForRenderLayer;
- (void).cxx_destruct;
@end

