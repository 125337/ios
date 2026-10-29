@interface WCMomentsShareScopeLoadMoreCellView : UICollectionViewCell
{
    UIView * _loadMoreTopLineView; // +0x8
    UILabel * _loadMoreLabel; // +0x10
    unsigned long long _cellViewCurrentCorner; // +0x18
    CAShapeLayer * _cellViewCornerMaskLayer; // +0x20
}
+ (id)cellIdentifier;
+ (double)cellHeight;
+ (BOOL)isSectionIdentifierEqualsTo:(id)arg1;
- (void)loadFromViewModel:(id)arg1;
- (void)_initCellViewWithViewModel:(id)arg1;
- (void)_initCellViewCornerFromViewModel:(id)arg1;
- (void)_removeCellViewCorner;
- (id)loadMoreTopLineView;
- (void)setLoadMoreTopLineView:(id)arg1;
- (id)loadMoreLabel;
- (void)setLoadMoreLabel:(id)arg1;
- (unsigned long long)cellViewCurrentCorner;
- (void)setCellViewCurrentCorner:(unsigned long long)arg1;
- (id)cellViewCornerMaskLayer;
- (void)setCellViewCornerMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end

