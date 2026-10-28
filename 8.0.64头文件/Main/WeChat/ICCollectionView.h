@interface ICCollectionView : UICollectionView
{
    id <ICFlowBatchFetchingDelegate> _batchFetchingDelegate; // +0x8
    double _leadingScreensForBatching; // +0x10
    UIView * _collectionHeaderView; // +0x18
    UIView * _collectionFooterView; // +0x20
    UIView * _collectionFooterContainerView; // +0x28
    UIView * _collectionHeaderContainerView; // +0x30
    ICBatchFetchingContext * _batchFetchingContext; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)updateCollectionHeaderViewFrame;
- (void)updateCollectionFooterViewFrame;
- (CGRect)updateContainerViewFrame:(id)arg1 contentView:(id)arg2;
- (id)collectionHeaderContainerView;
- (id)collectionFooterContainerView;
- (id)batchFetchingContext;
- (void)setContentSize:(CGSize)arg1;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)setLeadingScreensForBatching:(double)arg1;
- (void)setCollectionHeaderView:(id)arg1;
- (void)setCollectionFooterView:(id)arg1;
- (void)checkForBatchFetching;
- (void)beginBatchFetchingIfNeeded:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (void)_beginBatchFetching;
- (void)stopBatchFetching;
- (id)batchFetchingDelegate;
- (void)setBatchFetchingDelegate:(id)arg1;
- (double)leadingScreensForBatching;
- (id)collectionHeaderView;
- (id)collectionFooterView;
- (void)setCollectionFooterContainerView:(id)arg1;
- (void)setCollectionHeaderContainerView:(id)arg1;
- (void)setBatchFetchingContext:(id)arg1;
- (void).cxx_destruct;
@end
