@interface WCFinderProfileMJTemplatePage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderProfileMJTempPageModelDelegate>
{
    WCFinderStreamFooterView * _footerView; // +0x8
    UILabel * _statusTips; // +0x10
    WCFinderAnimationLoadingView * _loadingView; // +0x18
    NSMutableDictionary * _exposedTimeMap; // +0x20
}
- (id)loadView;
- (void)viewDidLoad;
- (void)viewWillApear;
- (void)viewWillDisappear;
- (void)onMJTempDataAppendFromRange:(_NSRange)arg1;
- (void)onMJTempModelFetchStateChanged:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)exposeItemExposeIndexPath:(id)arg1 cell:(id)arg2;
- (void)exposeWhenDisAppear;
- (void)recordStartExposeTimeWhenAppear;
- (id)reportUdfKVForItem:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (void)updateStatus;
- (void)setupLoadingView:(BOOL)arg1;
- (void)setupStatusTipsView:(id)arg1;
- (void)_layoutStatuViews;
- (id)displayStatusTips;
- (void)clickRetry;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)statusTips;
- (void)setStatusTips:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)exposedTimeMap;
- (void)setExposedTimeMap:(id)arg1;
- (void).cxx_destruct;
@end

