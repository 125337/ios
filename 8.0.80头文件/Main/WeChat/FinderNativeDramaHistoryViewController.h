@interface FinderNativeDramaHistoryViewController : MMUIViewController <WCFinderEmptyTipsViewDelegate, WCFinderStreamFooterViewActionDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
     commentScene; // +0x8
     pageID; // +0x10
     reportContext; // +0x0
     validExposureIndexPaths; // +0x0
     layoutIsRegularWidth; // +0x0
     $__lazy_storage_$_layout; // +0x0
     emptyTipsView; // +0x0
     refreshLoadingView; // +0x0
     $__lazy_storage_$_refreshControl; // +0x0
     provider; // +0x0
     displayedItems; // +0x0
     isPageVisible; // +0x0
     isNavigating; // +0x0
     refreshOnPlaybackReturn; // +0x0
     wasRefreshing; // +0x0
     automaticPageCount; // +0x0
     automaticLoadScheduled; // +0x0
     $__lazy_storage_$_collectionView; // +0x0
}
+ (id)historyViewControllerWithCommentScene:(int)arg1;
+ (BOOL)openFromViewController:(id)arg1 commentScene:(int)arg2;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)pullToRefresh;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
