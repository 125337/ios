@interface WCFinderProfileLivePlaybackPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderProfileLivePlaybackViewModelDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderStreamLoadingStateDelegate>
{
    WCFinderStreamFooterView * _footerView; // +0x8
    long long _contentSection; // +0x10
    WCFinderExtStatsReporter * _extStatReporter; // +0x18
    NSMutableDictionary * _exposedTimeMap; // +0x20
    NSArray * _displayTids; // +0x28
}
+ (BOOL)checkPurchaseUserCount:(id)arg1;
+ (void)registerDisplayCellForCollectionView:(id)arg1;
+ (id)collectionView:(id)arg1 displayCellForContentVM:(id)arg2 atIndexPath:(id)arg3 hiddenSticker:(BOOL)arg4;
+ (id)onLiveCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 item:(id)arg3;
+ (id)onFeedCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 isAuthor:(BOOL)arg3 contentVM:(id)arg4 hiddenSticker:(BOOL)arg5;
+ (BOOL)isValidFeedContentVM:(id)arg1;
+ (BOOL)isValidLiveContentVM:(id)arg1;
- (id)loadView;
- (void)registerStreamCellForCollection:(id)arg1;
- (id)exposedTimeMap;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)onFeedArrayChanged;
- (void)onLivePlaybackViewModelDataFetchError;
- (void)onLivePlaybackViewModelDataFetchRefresh;
- (void)updateFooterState;
- (void)onLoadingStateChanged:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)isSelfPostFeed:(id)arg1;
- (id)extStatReporter;
- (id)browserFeedIndexPathForTid:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)createContentVMFromDataItems:(id)arg1;
- (int)getCurrentCommentScene;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)exposeItemViewDisappear;
- (id)reportUdfKVForItem;
- (void)reportFeedStreamClickSelectedIndexPath:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (long long)contentSection;
- (void)setContentSection:(long long)arg1;
- (void)setExtStatReporter:(id)arg1;
- (void)setExposedTimeMap:(id)arg1;
- (id)displayTids;
- (void)setDisplayTids:(id)arg1;
- (void).cxx_destruct;
@end

