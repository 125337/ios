@interface MMMusicFlexEditBarCell : UICollectionViewCell
{
    NSMutableArray * _arrImageView; // +0x8
    UIView * _arrImageContainerView; // +0x10
    unsigned long long _cellIndex; // +0x18
    double _offset; // +0x20
    id <MMMusicFlexEditBarCellDelegate> _delegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithCellIndex:(unsigned long long)arg1 bDataChanged:(BOOL)arg2;
- (double)offset;
- (void)setOffset:(double)arg1;
- (void)reloadThumbImageArr;
- (void)updateThumbImageArr;
- (id)genImageViewWithImage:(id)arg1 targetSize:(CGSize)arg2;
- (void)updateWhenIsGhostCell;
- (void)updateCellAlpha;
- (void)layoutSubviews;
- (double)cellWidthPerSecond;
- (void)onTapGes:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
