@interface EditImageColorBar : MMUIView
{
    unsigned long long m_selectedIndex; // +0x8
    NSMutableArray * m_colorDotViews; // +0x10
    id <EditImageColorBarDeleagate> _delegate; // +0x18
    NSArray * _colorArray; // +0x20
    double _selectedSizeLen; // +0x28
    double _unselectedSizeLen; // +0x30
}
- (double)preferWidthWithUnselectedPadding:(double)arg1;
- (void)setColorArray:(id)arg1;
- (id)selectedColor;
- (void)setSelectedColor:(id)arg1;
- (void)layoutSubviews;
- (void)onDotViewClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)colorArray;
- (double)selectedSizeLen;
- (void)setSelectedSizeLen:(double)arg1;
- (double)unselectedSizeLen;
- (void)setUnselectedSizeLen:(double)arg1;
- (void).cxx_destruct;
@end
