@interface UICollectionViewFlowLayoutWithAlignment : UICollectionViewFlowLayout
{
    double _betweenOfCell; // +0x8
    long long _cellType; // +0x10
    double _sumWidth; // +0x18
}
- (id)init;
- (id)initWthType:(long long)arg1;
- (void)setBetweenOfCell:(double)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (void)setCellFrameWith:(id)arg1;
- (double)betweenOfCell;
- (long long)cellType;
- (void)setCellType:(long long)arg1;
- (double)sumWidth;
- (void)setSumWidth:(double)arg1;
@end

