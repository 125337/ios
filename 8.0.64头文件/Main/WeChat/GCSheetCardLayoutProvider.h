@interface GCSheetCardLayoutProvider : GCDynamicLayoutProvider
{
    int _rowCnt; // +0x8
    int _cowCnt; // +0xc
    GCLabelDynamicLayout * _headLabelLayout; // +0x10
    GCLabelDynamicLayout * _multiLabelRowLayout; // +0x18
    GCLabelDynamicLayout * _multiLabelRowBoldLayout; // +0x20
    double _headLineLabelBtmSpace; // +0x28
    double _contentHeight; // +0x30
    UIEdgeInsets _labelGroupEdgeInsets; // +0x38
}
- (id)init;
- (id)headLabelLayout;
- (void)setHeadLabelLayout:(id)arg1;
- (id)multiLabelRowLayout;
- (void)setMultiLabelRowLayout:(id)arg1;
- (id)multiLabelRowBoldLayout;
- (void)setMultiLabelRowBoldLayout:(id)arg1;
- (double)headLineLabelBtmSpace;
- (void)setHeadLineLabelBtmSpace:(double)arg1;
- (UIEdgeInsets)labelGroupEdgeInsets;
- (void)setLabelGroupEdgeInsets:(UIEdgeInsets)arg1;
- (int)rowCnt;
- (void)setRowCnt:(int)arg1;
- (int)cowCnt;
- (void)setCowCnt:(int)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (void).cxx_destruct;
@end
