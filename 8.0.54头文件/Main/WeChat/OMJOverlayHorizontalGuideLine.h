@interface OMJOverlayHorizontalGuideLine : OMJOverlayGuideLine
{
    UIView * _lineLeft; // +0x8
    UIView * _lineRight; // +0x10
}
- (void)commonInit;
- (void)configWithGuideLineStyle:(id)arg1;
- (id)lineLeft;
- (void)setLineLeft:(id)arg1;
- (id)lineRight;
- (void)setLineRight:(id)arg1;
- (void).cxx_destruct;
@end

