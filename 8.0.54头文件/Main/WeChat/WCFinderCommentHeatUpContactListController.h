@interface WCFinderCommentHeatUpContactListController : WCFinderCustomPanelSheet <WCFinderStreamFooterViewActionDelegate, UICollectionViewDelegate>
{
    BOOL _continueFlag; // +0x68
    BOOL _isFetchingData; // +0x69
    UICollectionView * _collectionView; // +0x70
    UICollectionViewDiffableDataSource * _diffSource; // +0x78
    WCFinderStreamFooterView * _footerView; // +0x80
    WCFinderAnimationLoadingView * _loadingView; // +0x88
    UILabel * _stateTipsLabel; // +0x90
    UITapGestureRecognizer * _stateRetryGesture; // +0x98
    NSMutableArray * _heatUpCellViewModels; // +0xa0
    NSData * _lastBuffer; // +0xa8
    NSString * _tid; // +0xb0
}
- (id)initWithPromotionInfo:(id)arg1 tid:(id)arg2;
- (void)viewDidLoad;
- (void)updateTitleWithCount:(unsigned long long)arg1;
- (UIEdgeInsets)contentInset;
- (id)loadContentView;
- (id)snapShot;
- (id)loadingView;
- (id)stateTipsLabel;
- (id)footerView;
- (void)resetDetailToInitStatusWithRetry:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)fetchData;
- (id)transFormFromHelps:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (BOOL)canPrefetchData;
- (void)clickRetryAction;
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

