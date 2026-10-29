@interface WCFinderCommentHeatUpContactListController : WCFinderCustomPanelSheet <WCFinderStreamFooterViewActionDelegate, UICollectionViewDelegateFlowLayout>
{
    BOOL _continueFlag; // +0x70
    BOOL _isFetchingData; // +0x71
    id /* block */ _updateBlock; // +0x78
    UICollectionView * _collectionView; // +0x80
    UICollectionViewDiffableDataSource * _diffSource; // +0x88
    WCFinderStreamFooterView * _footerView; // +0x90
    WCFinderAnimationLoadingView * _loadingView; // +0x98
    UILabel * _stateTipsLabel; // +0xa0
    UITapGestureRecognizer * _stateRetryGesture; // +0xa8
    NSMutableArray * _heatUpCellViewModels; // +0xb0
    NSData * _lastBuffer; // +0xb8
    NSString * _tid; // +0xc0
}
- (id)initWithPromotionInfo:(id)arg1 tid:(id)arg2;
- (void)viewDidLoad;
- (void)updateTitleWithCount:(unsigned long long)arg1;
- (UIEdgeInsets)contentInset;
- (id)loadContentView;
- (void)viewDidLayoutSubviews;
- (void)layoutStatusViews;
- (id)snapShot;
- (id)loadingView;
- (id)stateTipsLabel;
- (id)footerView;
- (void)resetDetailToInitStatusWithRetry:(unsigned long long)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)fetchData;
- (id)transFormFromHelps:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (BOOL)canPrefetchData;
- (void)clickRetryAction;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)diffSource;
- (void)setDiffSource:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (id)stateRetryGesture;
- (void)setStateRetryGesture:(id)arg1;
- (id)heatUpCellViewModels;
- (void)setHeatUpCellViewModels:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (void).cxx_destruct;
@end
