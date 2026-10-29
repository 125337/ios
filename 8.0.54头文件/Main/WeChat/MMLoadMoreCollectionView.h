@interface MMLoadMoreCollectionView : UICollectionView
{
    BOOL _disableLoadMore; // +0x8
    BOOL _isLoading; // +0x9
    id <MMLoadMoreCollectionViewDelegate> _loadMoreDelegate; // +0x10
    double _beginLoadMoreOffset; // +0x18
    double _loadingTimeOutDuration; // +0x20
    double _startLoadingAnimationDuration; // +0x28
    double _stopLoadingAnimationDuration; // +0x30
    double _customOffset; // +0x38
    UIView * _loadingView; // +0x40
    long long _currentDirection; // +0x48
    UIEdgeInsets _insetsBefore; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;
- (void)setLoadMoreView:(id)arg1 WithSize:(CGSize)arg2;
- (void)setDisableLoadMore:(BOOL)arg1;
- (void)onScrollViewWillBeginDecelerating;
- (void)onScrollViewDidEndDecelerating;
- (void)tryStartLoadMore;
- (void)forceStartLoadAnimation;
- (void)startLoadAnimationIfNeeded;
- (BOOL)isInLoading;
- (void)startLoadMoreAnimation;
- (void)startLoadMore;
- (void)onLoadDone;
- (id)loadMoreDelegate;
- (void)setLoadMoreDelegate:(id)arg1;
- (BOOL)disableLoadMore;
- (double)beginLoadMoreOffset;
- (void)setBeginLoadMoreOffset:(double)arg1;
- (double)loadingTimeOutDuration;
- (void)setLoadingTimeOutDuration:(double)arg1;
- (double)startLoadingAnimationDuration;
- (void)setStartLoadingAnimationDuration:(double)arg1;
- (double)stopLoadingAnimationDuration;
- (void)setStopLoadingAnimationDuration:(double)arg1;
- (double)customOffset;
- (void)setCustomOffset:(double)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (UIEdgeInsets)insetsBefore;
- (void)setInsetsBefore:(UIEdgeInsets)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (long long)currentDirection;
- (void)setCurrentDirection:(long long)arg1;
- (void).cxx_destruct;
@end

