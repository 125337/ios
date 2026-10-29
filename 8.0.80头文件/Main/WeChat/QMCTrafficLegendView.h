@interface QMCTrafficLegendView : UIView
{
    NSMutableArray * _colorSegments; // +0x8
    NSMutableArray * _labels; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (void)_setupColorBar;
- (void)_setupLabels;
- (void)_applyLayerShadow;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_colorFromHex:(unsigned long long)arg1;
- (id)colorSegments;
- (void)setColorSegments:(id)arg1;
- (id)labels;
- (void)setLabels:(id)arg1;
- (void).cxx_destruct;
@end
