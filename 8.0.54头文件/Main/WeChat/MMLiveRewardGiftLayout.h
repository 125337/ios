@interface MMLiveRewardGiftLayout : UICollectionViewFlowLayout
{
    long long _rowCount; // +0x8
    long long _columCount; // +0x10
}
- (struct)visualLocationForCellAtIndex:(unsigned long long)arg1;
- (CGRect)frameWithinPageForCellAtIndex:(unsigned long long)arg1;
- (long long)rowCount;
- (void)setRowCount:(long long)arg1;
- (long long)columCount;
- (void)setColumCount:(long long)arg1;
@end

