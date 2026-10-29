@interface WCAlbumPreviewBrowserViewController : WCDragToCloseViewController <WCAlbumSightFullPlayViewDelegate, CAAnimationDelegate, UIScrollViewDelegate, scrollViewDelegate, WCImageViewDelegate, WCFacadeExt, WCImageScrollViewDelegate, WCCommentDetailViewControllerFBDelegate>
{
    int firstVisiblePageIndexBeforeRotation; // +0x70
    double percentScrolledIntoFirstVisiblePage; // +0x78
    int m_iNumberOfPages; // +0x80
    int m_iCurrentPage; // +0x84
    BOOL m_hideWhenDisappear; // +0x88
    BOOL m_isTileing; // +0x89
    BOOL m_scrollViewLayouting; // +0x8a
    BOOL m_orientationRotating; // +0x8b
    BOOL m_isBidirectionalFan; // +0x8c
    BOOL m_backing; // +0x8d
    BOOL m_backEnabled; // +0x8e
    BOOL m_forbidSingleTap; // +0x8f
    BOOL _bIsMoreData; // +0x90
    BOOL _bIsNoMediaDataOverLimitReq; // +0x91
    BOOL _bIsLoadingMoreData; // +0x92
    BOOL _bIsLastDataEmpty; // +0x93
    BOOL _bIsDirectFreshScrollSize; // +0x94
    BOOL _bIsShow; // +0x95
    double _startContentOffsetX; // +0x98
    double _willEndContentOffsetX; // +0xa0
    double _endContentOffsetX; // +0xa8
    unsigned int _uiMaxContiunePreLoadCount; // +0xb0
    BOOL _isShowingDataItemList; // +0xb4
    BOOL _isNoPrePageLoad; // +0xb5
    CContact * _contact; // +0xb8
    id <WCAlbumPreviewBrowserViewControllerDelegate> _delegate; // +0xc0
    MMScrollView * _pagingScrollView; // +0xc8
    MMAssetSelectCheckButton * _selectCheckButton; // +0xd0
    UIView * _titleBackGroundView; // +0xd8
    UIView * _bottomBar; // +0xe0
    UIView * _blurView; // +0xe8
    UIButton * _sendButton; // +0xf0
    UIButton * _backButton; // +0xf8
    UIButton * _errorInfoBar; // +0x100
    NSMutableArray * _arrDatas; // +0x108
    NSMutableSet * _recycledImagePage; // +0x110
    NSMutableSet * _recycledSightPage; // +0x118
    NSMutableSet * _visiblePages; // +0x120
}
- (id)initWithDataItems:(id)arg1 currentIndex:(unsigned int)arg2 canAutoLoadNextPage:(BOOL)arg3;
- (id)initWithDataItems:(id)arg1 currentIndex:(unsigned int)arg2 canAutoLoadNextPage:(BOOL)arg3 canLoadPrePage:(BOOL)arg4;
- (id)initWithWCMediaItemWraps:(id)arg1 currentIndex:(unsigned int)arg2;
- (void)dealloc;
- (BOOL)isMyOwnWC;
- (BOOL)realCanLoadPrePage;
- (id)getMediaItemWrapAt:(long long)arg1;
- (id)getMediaItemWrapAnywayAt:(unsigned int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAppear;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willDisappear;
- (void)showFullScreen;
- (void)showFullScreen:(BOOL)arg1;
- (void)hideFullScreen;
- (void)hideFullScreen:(BOOL)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)handleSingleTap;
- (void)onSingleTapWCImageScrollView;
- (void)hideVCAnimation;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)layoutScrollView:(BOOL)arg1;
- (void)initScrollView;
- (void)preLoadFinishiedAndReloadData:(id)arg1;
- (void)preLoadPrePageFinishiedAndReloadData:(id)arg1;
- (unsigned long long)getMediaCount;
- (void)initArrData:(id)arg1;
- (id)getWCMediaItemWraps:(id)arg1;
- (void)clearFakeLoaddingPrePageView;
- (void)noMoreData;
- (void)showLastPictureTips;
- (void)deleteVisibleCache;
- (void)onRestartUpload;
- (void)onBeforeDeleteData;
- (void)onDeleteData;
- (void)onBackFromDetailView;
- (void)onPresentBackFromViewController;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)onBackButtonClicked;
- (void)contactsReturn:(BOOL)arg1 contact:(id)arg2;
- (id)getCurrentViewController;
- (id)tryUpdateMedia:(long long)arg1;
- (void)onPageChangedWithIndex:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (double)buttonWidth:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)checkNoMoreData;
- (void)preLoadProcess;
- (void)tilePages;
- (id)dequeueRecycledImagePage;
- (id)dequeueRecycledSightPage;
- (BOOL)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)configureImagePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureSightPage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)reloadImage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onSetDataItemPrivateFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPublicFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (CGRect)frameForPagingScrollView:(BOOL)arg1;
- (CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (CGRect)frameForPageAtIndexForSightView:(unsigned long long)arg1;
- (CGSize)contentSizeForPagingScrollView;
- (CGPoint)contentOffsetForPagingScrollView;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (BOOL)shouldAnimateFullScreenViewOnShow:(id)arg1;
- (void)onTouchEndOnFullScreenView:(id)arg1;
- (void)goBackAfterSetBackground;
- (void)adjustViewAndNavBarRect;
- (void)onClickFullSightView:(id)arg1;
- (void)onLongPressedFullSightView:(id)arg1;
- (void)initSelectCheckButton;
- (void)initBackgroundView;
- (void)initBottomBar;
- (void)initBackBarButton;
- (void)reloadActionButtons;
- (void)updateSelectCheckButtonWithIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)updateSelectedButtonWithAssetInfo:(id)arg1;
- (void)updateBottomBarWithMedia:(id)arg1;
- (void)OnSelectedButtonDone;
- (void)OnEdit:(id)arg1;
- (BOOL)isMediaSelectable:(id)arg1;
- (void)showErrorInfoBarWithInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pagingScrollView;
- (void)setPagingScrollView:(id)arg1;
- (id)selectCheckButton;
- (void)setSelectCheckButton:(id)arg1;
- (id)titleBackGroundView;
- (void)setTitleBackGroundView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)errorInfoBar;
- (void)setErrorInfoBar:(id)arg1;
- (id)arrDatas;
- (void)setArrDatas:(id)arg1;
- (id)recycledImagePage;
- (void)setRecycledImagePage:(id)arg1;
- (id)recycledSightPage;
- (void)setRecycledSightPage:(id)arg1;
- (id)visiblePages;
- (void)setVisiblePages:(id)arg1;
- (BOOL)isShowingDataItemList;
- (void)setIsShowingDataItemList:(BOOL)arg1;
- (BOOL)isNoPrePageLoad;
- (void)setIsNoPrePageLoad:(BOOL)arg1;
- (void).cxx_destruct;
@end
