@interface OMJOverlayVerticalGuideLine : OMJOverlayGuideLine
{
    UIView * _lineTop; // +0x8
    UIView * _lineBottom; // +0x10
}
- (void)commonInit;
- (void)configWithGuideLineStyle:(id)arg1;
- (id)lineTop;
- (void)setLineTop:(id)arg1;
- (id)lineBottom;
- (void)setLineBottom:(id)arg1;
- (void).cxx_destruct;
@end

