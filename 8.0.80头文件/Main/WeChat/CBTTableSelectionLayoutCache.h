@interface CBTTableSelectionLayoutCache : NSObject
{
    NSArray * _rowYs; // +0x8
    NSArray * _rowHeights; // +0x10
    NSArray * _colXs; // +0x18
    NSArray * _columnWidths; // +0x20
}
- (id)rowYs;
- (void)setRowYs:(id)arg1;
- (id)rowHeights;
- (void)setRowHeights:(id)arg1;
- (id)colXs;
- (void)setColXs:(id)arg1;
- (id)columnWidths;
- (void)setColumnWidths:(id)arg1;
- (void).cxx_destruct;
@end
