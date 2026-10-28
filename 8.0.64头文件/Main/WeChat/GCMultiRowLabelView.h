@interface GCMultiRowLabelView : UIView
{
    int _rowCnt; // +0x8
    NSMutableArray * _labelArray; // +0x10
}
- (void)configureRowCnt:(int)arg1 labelConfig:(id)arg2;
- (void)configureWithLabelArray:(id)arg1;
- (void)layoutSubviews;
- (id)labelArray;
- (void)setLabelArray:(id)arg1;
- (int)rowCnt;
- (void)setRowCnt:(int)arg1;
- (void).cxx_destruct;
@end
