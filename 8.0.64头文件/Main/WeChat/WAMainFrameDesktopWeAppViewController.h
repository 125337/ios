@interface WAMainFrameDesktopWeAppViewController : WAStarListViewController <UIScrollViewDelegate, WADesktopStarListDelegate>
{
    WADesktopStarListViewModel * _myViewModel; // +0x70
    WARecentStarListViewModel * _recentViewModel; // +0x78
    BOOL _isMy; // +0x80
    long long _reportState; // +0x88
    long long _lastReportIndex; // +0x90
    long long _moreStartIndex; // +0x98
    long long _moreEndIndex; // +0xa0
    BOOL _listHasChanged; // +0xa8
    id <WAMainFrameDesktopWeAppViewControllerDelegate> _delegate; // +0xb0
}
- (id)init;
- (void)dealloc;
- (id)createViewModel;
- (BOOL)listHasChanged;
- (void)switchWeAppType:(BOOL)arg1;
- (void)initOperationWindow;
- (BOOL)canShowSearch;
- (BOOL)sectionIsWeApp:(id)arg1;
- (long long)itemCount;
- (void)scrollToBottom;
- (void)reloadData;
- (void)reset;
- (void)startLoadingBlocked;
- (id)reportSessionId;
- (void)setIsInEditMode:(BOOL)arg1;
- (void)initCollectionView;
- (void)updateRefreshFooterHiddenState;
- (void)updateViewAnimated:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)uiScene;
- (id)sceneNote:(long long)arg1;
- (void)configureCell:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 onLongPress:(id)arg3 indexPath:(id)arg4;
- (BOOL)collectionView:(id)arg1 itemDidCommitToStarAtIdexPath:(id)arg2;
- (void)reportClickSearch;
- (void)reportClickWeApp:(id)arg1 index:(long long)arg2;
- (void)onWeAppItemOpened:(id)arg1;
- (void)onItemStared:(id)arg1 index:(long long)arg2 isMy:(long long)arg3;
- (void)onItemDeleted:(id)arg1 index:(long long)arg2 isMy:(long long)arg3;
- (void)onItemMove:(id)arg1 from:(long long)arg2 to:(long long)arg3 isMy:(long long)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
