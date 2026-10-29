@interface LOTGradientFillRender : LOTRenderNode
{
    BOOL _evenOddFillRule; // +0x8
    CALayer * centerPoint_DEBUG; // +0x10
    CAShapeLayer * _maskShape; // +0x18
    LOTRadialGradientLayer * _gradientOpacityLayer; // +0x20
    LOTRadialGradientLayer * _gradientLayer; // +0x28
    long long _numberOfPositions; // +0x30
    CGPoint _startPoint; // +0x38
    CGPoint _endPoint; // +0x48
    LOTArrayInterpolator * _gradientInterpolator; // +0x58
    LOTPointInterpolator * _startPointInterpolator; // +0x60
    LOTPointInterpolator * _endPointInterpolator; // +0x68
    LOTNumberInterpolator * _opacityInterpolator; // +0x70
}
- (id)initWithInputNode:(id)arg1 shapeGradientFill:(id)arg2;
- (id)valueInterpolators;
- (BOOL)needsUpdateForFrame:(id)arg1;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)actionsForRenderLayer;
- (void).cxx_destruct;
@end
