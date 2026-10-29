@interface WCFinderFeedFavListViewController : MMUIHalfScreenViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderFeedFavListViewModelDelegate, WCFinderFeedFavListCellDelegate, WCFinderHalfScreenProtocol>
{
    id /* block */ _beforePushVCBlock; // +0x68
    id /* block */ _afterPopVCBlock; // +0x70
    MMUIButton * _closeBtn; // +0x78
    WCFinderCustomImageRichTextView * _richTextView; // +0x80
    UILabel * _subTitleLabel; // +0x88
    UICollectionView * _collectionView; // +0x90
    UICollectionViewFlowLayout * _flowLayout; // +0x98
    WCFinderStreamFooterView * _refreshFooterView; // +0xa0
    WCFinderAnimationLoadingView * _loadingView; // +0xa8
    WCFinderCustomImageRichTextView * _stateTipsLabel; // +0xb0
    UITapGestureRecognizer * _stateRetryGesture; // +0xb8
    unsigned long long _footerRefreshState; // +0xc0
    WCFinderFeedFavListViewModel * _viewModel; // +0xc8
    NSString * _tid; // +0xd0
    WCFinderFavInfo * _currentSelectFavInfo; // +0xd8
    double _heightRatio; // +0xe0
    WCFinderMagicAnimationLogic * _magicAnimationLogic; // +0xe8
    NSMutableSet * _cellExposeSet; // +0xf0
}
- (id)initWithContentVM:(id)arg1;
- (double)getMaxHalfScreenHeight;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)dealloc;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)isHideCloseButton;
- (void)setupUI;
- (void)layoutUI;
- (void)fetchNextPage;
- (void)updateTitleWithCount:(long long)arg1;
- (void)resetRefreshStateNormal;
- (void)showNoMoreData;
- (void)feedFavListDataChange;
- (void)feedFavListDataNoMore;
- (void)feedFavListDataError:(int)arg1;
- (void)feedFavListDataFavCountChange;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)stateRetryGestureAction;
- (void)onClickClose;
- (void)showHalfProfileVC:(id)arg1;
- (void)reportCellEventWithFavInfo:(id)arg1 event:(id)arg2 clickArea:(unsigned long long)arg3;
- (id)closeBtn;
- (id)richTextView;
- (id)subTitleLabel;
- (id)collectionView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (id)loadingView;
- (id)flowLayout;
- (BOOL)canShowRewardTips;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (void)onFavListCellClickUser:(id)arg1;
- (void)onFavListCell:(id)arg1 clickThankButtonWithThankState:(BOOL)arg2;
- (void)onFavListCell:(id)arg1 emitThanksMagicAnimationWithAnimStyle:(unsigned long long)arg2;
- (id /* block */)beforePushVCBlock;
- (void)setBeforePushVCBlock:(id /* block */)arg1;
- (id /* block */)afterPopVCBlock;
- (void)setAfterPopVCBlock:(id /* block */)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (id)refreshFooterView;
- (void)setRefreshFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (unsigned long long)footerRefreshState;
- (void)setFooterRefreshState:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)currentSelectFavInfo;
- (void)setCurrentSelectFavInfo:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)magicAnimationLogic;
- (void)setMagicAnimationLogic:(id)arg1;
- (id)cellExposeSet;
- (void)setCellExposeSet:(id)arg1;
- (void).cxx_destruct;
@end

