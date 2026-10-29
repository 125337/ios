@interface MMLiveLotteryDetailCardGiftFlowLayout : UICollectionViewFlowLayout
{
    double _sumCellWidth; // +0x8
    double _betweenOfCell; // +0x10
    double _betweenOfSection; // +0x18
    long long _cellType; // +0x20
}
- (id)init;
- (void)setBetweenOfCell:(double)arg1;
- (void)setBetweenOfSection:(double)arg1;
- (id)initWthType:(long long)arg1;
- (id)initWithType:(long long)arg1 betweenOfCell:(double)arg2 betweenOfSection:(double)arg3;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (void)setCellFrameWith:(id)arg1;
- (double)betweenOfCell;
- (double)betweenOfSection;
- (long long)cellType;
- (void)setCellType:(long long)arg1;
@end
