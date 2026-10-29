@interface GCLoadingMoreCellModel : GCViewHolderCellModel
{
    BOOL _isLoading; // +0x60
    id <GCLoadMoreProtocol> _loadMoreDelegate; // +0x68
    UIView<GCLoadingViewProtocol> * _loadingView; // +0x70
}
- (id)initWithLoadingView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)endLoading;
- (id)loadMoreDelegate;
- (void)setLoadMoreDelegate:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

