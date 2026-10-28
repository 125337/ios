@interface WCFinderFeedLikeListViewController : MMUIHalfScreenViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderFeedLikeListViewModelDelegate, UICollectionViewDelegateFlowLayout, WCFinderFansProfileViewControllerDelegate, WCFinderFeedLikeListCellDelegate, WCFinderHalfScreenProtocol, WCFinderStreamFeedLikeGuideViewDelegate>
{
    BOOL _showBackgroundMask; // +0x70
    BOOL _hidePrivateMessage; // +0x71
    BOOL _shouldRefetchDataAfterPopOrDismiss; // +0x72
    id /* block */ _beforePushVCBlock; // +0x78
    id /* block */ _afterPopVCBlock; // +0x80
    WCFinderFeedLikeListViewModel * _viewModel; // +0x88
    MMUIButton * _closeBtn; // +0x90
    MMUIButton * _moreBtn; // +0x98
    WCFinderSizingRichTextView * _titleLabel; // +0xa0
    UICollectionView * _collectionView; // +0xa8
    UICollectionViewFlowLayout * _flowLayout; // +0xb0
    WCFinderStreamFooterView * _refreshFooterView; // +0xb8
    WCFinderAnimationLoadingView * _loadingView; // +0xc0
    UILabel * _stateTipsLabel; // +0xc8
    UITapGestureRecognizer * _stateRetryGesture; // +0xd0
    unsigned long long _footerRefreshState; // +0xd8
    NSString * _tid; // +0xe0
    NSString * _nonceID; // +0xe8
    UICollectionReusableView * _likeGuideView; // +0xf0
    unsigned long long _entranceScene; // +0xf8
    double _likeGuideViewShowTimestamp; // +0x100
    WCFinderLikeInfo * _currentSelectLikeInfo; // +0x108
    WCFinderFeedContentVM * _contentVM; // +0x110
    WCFinderMagicAnimationLogic * _magicAnimationLogic; // +0x118
    NSMutableSet * _cellExposeSet; // +0x120
    double _heightRatio; // +0x128
}
- (id)initWithWithContentVM:(id)arg1 entranceScene:(unsigned long long)arg2;
- (double)getMaxHalfScreenHeight;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)dealloc;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)onFeedLikeGuideClickRedPacketBannerAction;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (id)loadingView;
- (id)flowLayout;
- (void)setUpUI;
- (void)layoutUI;
- (BOOL)isHideCloseButton;
- (void)setupSubViews;
- (void)onClickClose;
- (void)showHalfProfileVC:(id)arg1;
- (BOOL)canShowRewardTips;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)fetchNextPage;
- (void)stateRetryGestureAction;
- (void)updateTitleWithCount:(long long)arg1;
- (void)reportCellEventWithLikeInfo:(id)arg1 event:(id)arg2 clickArea:(unsigned long long)arg3;
- (void)feedLikeListDataChange;
- (void)feedLikeListDataAddSelfLike;
- (void)feedLikeListDataNoMore;
- (void)feedLikeListDataError:(int)arg1;
- (void)feedLikeListDataLikeCountChange;
- (void)showNoMoreData;
- (void)resetRefreshStateNormal;
- (BOOL)useTransparentNavibar;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (void)onLikeListCellClickUser:(id)arg1;
- (void)onLikeListCell:(id)arg1 clickThankButtonWithThankState:(BOOL)arg2;
- (void)onLikeListCell:(id)arg1 emitThanksMagicAnimationWithAnimStyle:(unsigned long long)arg2;
- (id /* block */)beforePushVCBlock;
- (void)setBeforePushVCBlock:(id /* block */)arg1;
- (id /* block */)afterPopVCBlock;
- (void)setAfterPopVCBlock:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)showBackgroundMask;
- (void)setShowBackgroundMask:(BOOL)arg1;
- (BOOL)hidePrivateMessage;
- (void)setHidePrivateMessage:(BOOL)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (id)refreshFooterView;
- (void)setRefreshFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (unsigned long long)footerRefreshState;
- (void)setFooterRefreshState:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)likeGuideView;
- (void)setLikeGuideView:(id)arg1;
- (unsigned long long)entranceScene;
- (void)setEntranceScene:(unsigned long long)arg1;
- (double)likeGuideViewShowTimestamp;
- (void)setLikeGuideViewShowTimestamp:(double)arg1;
- (id)currentSelectLikeInfo;
- (void)setCurrentSelectLikeInfo:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)magicAnimationLogic;
- (void)setMagicAnimationLogic:(id)arg1;
- (id)cellExposeSet;
- (void)setCellExposeSet:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (BOOL)shouldRefetchDataAfterPopOrDismiss;
- (void)setShouldRefetchDataAfterPopOrDismiss:(BOOL)arg1;
- (void).cxx_destruct;
@end
