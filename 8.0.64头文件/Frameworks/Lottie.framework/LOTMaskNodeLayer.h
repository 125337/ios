@interface LOTMaskNodeLayer : CAShapeLayer
{
    LOTPathInterpolator * _pathInterpolator; // +0x8
    LOTNumberInterpolator * _opacityInterpolator; // +0x10
    LOTNumberInterpolator * _expansionInterpolator; // +0x18
    LOTMask * _maskNode; // +0x20
}
- (id)initWithMask:(id)arg1;
- (void)updateForFrame:(id)arg1 withViewBounds:(CGRect)arg2;
- (BOOL)hasUpdateForFrame:(id)arg1;
- (id)maskNode;
- (void).cxx_destruct;
@end
