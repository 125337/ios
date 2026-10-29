@interface WCFinderHelpPromotionUserListController : WCFinderCustomPanelSheet <WCFinderStreamFooterViewActionDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderHelpPromotionUserCellDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderThanksExt>
{
    BOOL _continueFlag; // +0x70
    BOOL _isFetchingData; // +0x71
    BOOL _fetchFailed; // +0x72
    id /* block */ _updateBlock; // +0x78
    UICollectionView * _collectionView; // +0x80
    WCFinderStreamFooterView * _footerView; // +0x88
    WCFinderAnimationLoadingView * _loadingView; // +0x90
    UILabel * _stateTipsLabel; // +0x98
    UITapGestureRecognizer * _stateRetryGesture; // +0xa0
    NSMutableArray * _promotionUsers; // +0xa8
    NSMutableDictionary * _pendingThankStates; // +0xb0
    WCFinderMagicAnimationLogic * _magicAnimationLogic; // +0xb8
    NSString * _finderUsername; // +0xc0
    FinderHelpPromotionUserInfo * _selectedProfileUserInfo; // +0xc8
    NSData * _lastBuffer; // +0xd0
    NSString * _tid; // +0xd8
}
- (id)initWithTid:(id)arg1 finderUsername:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateTitleWithCount:(unsigned long long)arg1;
- (UIEdgeInsets)contentInset;
- (id)loadContentView;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)loadingView;
- (id)stateTipsLabel;
- (id)footerView;
- (void)resetDetailToInitStatusWithRetry:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)fetchData;
- (void)helpPromotionUserCellDidClickAvatar:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)helpPromotionUserCell:(id)arg1 clickThanksWithState:(BOOL)arg2;
- (void)onThankStateChanged:(BOOL)arg1 tid:(id)arg2 username:(id)arg3 interactionType:(int)arg4;
- (void)helpPromotionUserCell:(id)arg1 emitThanksAnimationWithStyle:(unsigned long long)arg2;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (BOOL)canPrefetchData;
- (void)clickRetryAction;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (id)stateRetryGesture;
- (void)setStateRetryGesture:(id)arg1;
- (id)promotionUsers;
- (void)setPromotionUsers:(id)arg1;
- (id)pendingThankStates;
- (void)setPendingThankStates:(id)arg1;
- (id)magicAnimationLogic;
- (void)setMagicAnimationLogic:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)selectedProfileUserInfo;
- (void)setSelectedProfileUserInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (BOOL)fetchFailed;
- (void)setFetchFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end
