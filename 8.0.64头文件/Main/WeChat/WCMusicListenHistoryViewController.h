@interface WCMusicListenHistoryViewController : ICCollectionViewController
{
    double _collectionViewTopPadding; // +0x70
    id <WCMusicListenHistoryViewControllerDelegate> _delegate; // +0x78
    WCMusicSearchReporter * _reporter; // +0x80
    WCMusicListenHistoryTitleView * _historyTitleView; // +0x88
}
- (void)viewDidLoad;
- (void)setupCollectionView;
- (BOOL)useTransparentNavibar;
- (void)setupCollectionViewContentEdgeInsets;
- (void)handleDeleteButtonClicked:(id)arg1;
- (void)viewWillLayoutSubviews;
- (id)generateCollectionViewFlowLayout;
- (double)cellWidth;
- (void)reportLoadFinishWithDataItems:(id)arg1;
- (id)loadMoreData:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)processLoadMoreDataResult:(id)arg1 error:(id)arg2 isFirstLoad:(BOOL)arg3;
- (void)didFinishLoadMoreData:(id)arg1 error:(id)arg2 hasMore:(BOOL)arg3 isFirstLoad:(BOOL)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)historyTitleView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionViewTopPadding;
- (void)setCollectionViewTopPadding:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void)setHistoryTitleView:(id)arg1;
- (void).cxx_destruct;
@end
