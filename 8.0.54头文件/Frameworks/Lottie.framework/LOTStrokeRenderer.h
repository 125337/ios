@interface LOTStrokeRenderer : LOTRenderNode
{
    LOTColorInterpolator * _colorInterpolator; // +0x8
    LOTNumberInterpolator * _opacityInterpolator; // +0x10
    LOTNumberInterpolator * _widthInterpolator; // +0x18
    LOTNumberInterpolator * _dashOffsetInterpolator; // +0x20
    NSArray * _dashPatternInterpolators; // +0x28
}
- (id)initWithInputNode:(id)arg1 shapeStroke:(id)arg2;
- (id)valueInterpolators;
- (void)_updateLineDashPatternsForFrame:(id)arg1;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)actionsForRenderLayer;
- (void).cxx_destruct;
@end

