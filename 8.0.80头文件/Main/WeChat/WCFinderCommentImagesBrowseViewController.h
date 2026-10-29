@interface WCFinderCommentImagesBrowseViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderCommentImageBrowseVMDelegate, EGORefreshTableHeaderDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderCommentImageBrowseCellDelegate, WCFinderFeedInputCommentPostDelegate, WCFinderFeedInputViewDelegate>
{
    BOOL _userDidDragScrollView; // +0x70
    WCFinderCommentImageBrowseViewModel * _viewModel; // +0x78
    unsigned long long _commentTextMaxLimit; // +0x80
    UIImageView * _startImageViewForAnimation; // +0x88
    UICollectionView * _collectionView; // +0x90
    UICollectionViewFlowLayout * _collectionLayout; // +0x98
    MMUIButton * _gobackButton; // +0xa0
    WCFinderCommentImagesBrowseTransition * _transition; // +0xa8
    id /* block */ _dismissBlock; // +0xb0
    unsigned long long _scrollingToCommentID; // +0xb8
    WCFinderFeedInputView * _commentInputView; // +0xc0
    double _layoutWidth; // +0xc8
    WCFinderPullDownRefreshHeaderView * _refreshHeaderView; // +0xd0
    double _lastAlphaOfRefreshHeaderView; // +0xd8
    WCFinderStreamFooterView * _refreshFooterView; // +0xe0
    NSIndexPath * _indexPathForCurCell; // +0xe8
    WCFinderAnimationLoadingView * _loadingView; // +0xf0
    WCFinderCommentImageBrowseCell * _displayingCell; // +0xf8
    WCFinderCommentImageBrowseCell * _comingCell; // +0x100
    UIImageView * _longPressInImageView; // +0x108
    NSString * _longPressImgURL; // +0x110
    MMScrollActionSheet * _scrollActionSheet; // +0x118
    WCImageTranslateLogic * _imageTranslateLogic; // +0x120
    OCRTransHalfScreenViewController * _ocrHalfScreenViewController; // +0x128
    unsigned long long _lastWillDisplayCommentID; // +0x130
}
+ (id)genActionSheetItemWithType:(unsigned long long)arg1 iconImage:(id)arg2 title:(id)arg3;
+ (void)showInViewController:(id)arg1 config:(id)arg2 comments:(id)arg3 dismissBlock:(id /* block */)arg4;
+ (BOOL)isCellVisible:(id)arg1 inCollectionView:(id)arg2;
+ (CGRect)visibleRectForCell:(id)arg1 inCollectionView:(id)arg2;
+ (BOOL)enableRefreshHeader;
- (void)showActionSheetForImageView:(id)arg1 imageURL:(id)arg2 comment:(id)arg3;
- (id)genScrollActionSheetArray;
- (void)reportActionSheetItemWithItemID:(id)arg1 eventId:(id)arg2;
- (void)handleShareImage:(id)arg1 toContact:(id)arg2;
- (void)handleSaveImageToAlbumWithImage:(id)arg1;
- (void)handleFavImage:(id)arg1;
- (void)asyncGetImageSavePath:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSearchImage:(id)arg1;
- (void)handleTranslateImage:(id)arg1;
- (void)handleOCRImage:(id)arg1;
- (void)showOCRHalfScreenViewController;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)onReTranslateImage;
- (id)getOriginImage;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (id)initWithStartFrame:(CGRect)arg1 config:(id)arg2 comments:(id)arg3;
- (void)viewDidLoad;
- (void)setupUI;
- (void)layoutUI;
- (void)addObservers;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (long long)overrideUserInterfaceStyle;
- (void)dismissSelf:(unsigned long long)arg1 toCommentID:(unsigned long long)arg2 isDragToClose:(BOOL)arg3 fromCell:(id)arg4;
- (void)scrollToCommentID:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollToIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)adjustCurrentCellOffsetForPaging;
- (BOOL)canPostBidEmoticonComment;
- (void)updateCurrentCommentIdentity;
- (void)showUserProfileWithComment:(id)arg1;
- (void)presentWeChatUserProfileWithComment:(id)arg1;
- (void)showEmptyDataView;
- (void)setupRefreshHeaderView;
- (void)resumeRefreshViewLoading;
- (void)resetRefreshHeaderFooterState;
- (void)resetCollectionViewInset;
- (void)stopRefreshHeaderLoading:(unsigned long long)arg1 delay:(double)arg2 completion:(id /* block */)arg3;
- (void)reloadRefreshFooterWithState:(unsigned long long)arg1 resetCollectionInset:(BOOL)arg2;
- (void)showUserGuideIfNeed;
- (void)doShowUserGuide;
- (id)commonReportParamsForCommentID:(unsigned long long)arg1;
- (void)reportSlidePageIfChanged:(unsigned long long)arg1;
- (void)onAppEnterForegroundNoti:(id)arg1;
- (void)gobackAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)updateCellsAlpha;
- (void)resetCellsAlphaWithAssert:(BOOL)arg1;
- (id)getWatchingCell;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)commImgBrowseVM:(id)arg1 fetchCommentsSucc:(long long)arg2 refCommentID:(unsigned long long)arg3 isRollingUp:(BOOL)arg4 noMoreData:(BOOL)arg5;
- (void)commImgBrowseVM:(id)arg1 fetchCommentsFail:(long long)arg2 isRollingUp:(BOOL)arg3;
- (void)commImgBrowseVM:(id)arg1 postComment:(id)arg2 succ:(BOOL)arg3 retCode:(int)arg4 errorMsg:(id)arg5;
- (void)showSnackBarLinkToComment:(id)arg1;
- (void)commImgBrowseVM:(id)arg1 onClickLikeTid:(id)arg2 comment:(id)arg3;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)imageBrowseCellDidClickBigImage:(id)arg1;
- (void)imageBrowseCellDidLongPressBigImage:(id)arg1;
- (void)imageBrowseCellOnDragImageToClose:(id)arg1;
- (void)imageBrowseCellDidZoomBigImage:(id)arg1;
- (void)imageBrowseCell:(id)arg1 didClickUserAvatarOrNickName:(id)arg2;
- (void)imageBrowseCell:(id)arg1 requestReply:(id)arg2;
- (void)imageBrowseCell:(id)arg1 likeOrUnlike:(id)arg2;
- (void)imageBrowseCell:(id)arg1 willExpandContentTo:(BOOL)arg2;
- (void)imageBrowseCell:(id)arg1 didClickKeyword:(WCFinderKeywordAction)arg2;
- (id)imageBrowseCellGetCommonReportParams:(id)arg1;
- (BOOL)imageBrowseCellEnableDragDownToClose:(id)arg1;
- (void)imageBrowseCell:(id)arg1 backgroundAlphaShouldChange:(double)arg2;
- (id)imageBrowseCellGetPlaceholderImage:(id)arg1;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
- (void)doPostComment:(id)arg1 replyToComment:(id)arg2 withText:(id)arg3;
- (void)inputViewDidUpdateCommentIdentity:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)commentTextMaxLimit;
- (void)setCommentTextMaxLimit:(unsigned long long)arg1;
- (id)startImageViewForAnimation;
- (void)setStartImageViewForAnimation:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)gobackButton;
- (void)setGobackButton:(id)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (BOOL)userDidDragScrollView;
- (void)setUserDidDragScrollView:(BOOL)arg1;
- (unsigned long long)scrollingToCommentID;
- (void)setScrollingToCommentID:(unsigned long long)arg1;
- (id)commentInputView;
- (void)setCommentInputView:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (id)refreshHeaderView;
- (void)setRefreshHeaderView:(id)arg1;
- (double)lastAlphaOfRefreshHeaderView;
- (void)setLastAlphaOfRefreshHeaderView:(double)arg1;
- (id)refreshFooterView;
- (void)setRefreshFooterView:(id)arg1;
- (id)indexPathForCurCell;
- (void)setIndexPathForCurCell:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)displayingCell;
- (void)setDisplayingCell:(id)arg1;
- (id)comingCell;
- (void)setComingCell:(id)arg1;
- (id)longPressInImageView;
- (void)setLongPressInImageView:(id)arg1;
- (id)longPressImgURL;
- (void)setLongPressImgURL:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)imageTranslateLogic;
- (void)setImageTranslateLogic:(id)arg1;
- (id)ocrHalfScreenViewController;
- (void)setOcrHalfScreenViewController:(id)arg1;
- (unsigned long long)lastWillDisplayCommentID;
- (void)setLastWillDisplayCommentID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
