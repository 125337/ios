@interface GameGroupSectionModelLayout : GCDynamicLayoutProvider
{
    double _labelHeight; // +0x8
    double _fontSize; // +0x10
    double _totalHeight; // +0x18
    UIEdgeInsets _edgeInsets; // +0x20
}
- (id)init;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (double)labelHeight;
- (void)setLabelHeight:(double)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (double)totalHeight;
- (void)setTotalHeight:(double)arg1;
@end

