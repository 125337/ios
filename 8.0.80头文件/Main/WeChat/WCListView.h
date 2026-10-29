@interface WCListView : MMUIView <WCListYearFloatViewDelegate, UIGestureRecognizerDelegate, TLProfileDragAnimateHelperDelegate, WCListViewRowViewDelegate, TLProfileDetailContentViewDelegate, WCBGImgLogicExt, WCVideoProducerViewControllerDelegate, WCPlainTextTipFullScreenViewDelegate, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, WCImageViewDelegate, MMRefreshTableFooterDelegate, WCListViewProtocol, WCFacadeExt, WCListHeaderViewDelegate, WCPuzzleImageViewDelegate, MMTableViewDelegate, MMTipsViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCCommitViewAnimationDelegate, IUiUtilExt, MMImagePickerManagerDelegate, MMNavBarInteractiveDelegate, MMSightCameraViewControllerDelegate, WCListTipCellViewDelegate, WCPhotoMutipleImagePageDelegate>
{
    BOOL m_isMyWC; // +0x8
    CContact * m_contact; // +0x10
    long long m_curDownloadEntrance; // +0x18
    double m_statusBarHeight; // +0x20
    WCListViewController * viewController; // +0x28
    MMTableView * m_tableView; // +0x30
    WCTimeLineFooterView * m_footerView; // +0x38
    WCListHeaderView * m_headerView; // +0x40
    MMURLHandler * m_urlHandler; // +0x48
    MMAdaptiveLabel * m_tipsLabel; // +0x50
    NSArray * m_arrPhotoDatas; // +0x58
    NSMutableDictionary * m_cellHeightCache; // +0x60
    NSMutableArray * m_arrPhotoDataForView; // +0x68
    NSArray * m_starredDataItems; // +0x70
    BOOL m_bTapHeaderView; // +0x78
    BOOL m_bRecentLimitTipShown; // +0x79
    WCDataItem * _cacheDateItem; // +0x80
    UIView * _animationView; // +0x88
    MMTipsViewController * m_introView; // +0x90
    BOOL m_bHideBackgroundCover; // +0x98
    double m_topInsetUnderContentViewY; // +0xa0
    CGPoint _lastVelocityWhileEndingDragging; // +0xa8
    BOOL _isStarBrowsingEnabled; // +0xb8
    BOOL _isJumpState; // +0xb9
    BOOL _isPrePageDayEnd; // +0xba
    BOOL _jumpStateChanging; // +0xbb
    BOOL _isCoverNewVersion; // +0xbc
    BOOL _isModeTall; // +0xbd
    BOOL _isPrivatePost; // +0xbe
    BOOL _lockPrivateVisibility; // +0xbf
    BOOL _m_bLongPressPostBtn; // +0xc0
    BOOL _isLongPressTextPost; // +0xc1
    BOOL _pendingTextPostIsPrivate; // +0xc2
    NSMutableArray * m_groups; // +0xc8
    NSMutableArray * m_arrGroupsForDate; // +0xd0
    id <WCListViewDelegate> _delegate; // +0xd8
    WCMomentsPageContext * _pageContext; // +0xe0
    TLProfileDragAnimateHelper * _animateHelper; // +0xe8
    WCMomentsPostReportSession * _postReportSession; // +0xf0
    double _heightCacheLayoutWidth; // +0xf8
    WCPhotoMutipleImageViewController * _multipleImageViewController; // +0x100
    WCListYearFlowView * _yearFlowView; // +0x108
    WCListHeaderView * _listHeaderViewInNormalState; // +0x110
    WCTimeLineFooterView * _listHeaderViewInJumpState; // +0x118
    MMUIButton * _listFrontView; // +0x120
    TLProfileExpandableHeaderView * _expandableHeader; // +0x128
    TLProfileModel * _profileModel; // +0x130
    long long _puzzleImageViewLayoutStyle; // +0x138
    long long _snsPopupBtnValue; // +0x140
    double _m_normalFooterHeight; // +0x148
    WCPlainTextTipFullScreenView * _plainTextTipView; // +0x150
    CGSize _lastContainerLayoutSize; // +0x158
}
- (void)dealloc;
- (long long)homepageType;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)useExpandableHeader;
- (BOOL)hasSetBackground;
- (void)switchToExpandableHeader;
- (void)updateExpandableHeaderViewProfile;
- (void)switchToNormalHeader;
- (void)initHeaderView;
- (void)initFooterView;
- (void)initTipsLabel;
- (void)initTableView;
- (void)initYearFloatView;
- (double)yearFlowViewTopForCurrentLayout;
- (void)updateYearFlowViewLayoutForContainerWidth:(double)arg1;
- (void)updateYearFlowViewClickState;
- (id)initWithData:(id)arg1 starredDataItems:(id)arg2 frame:(CGRect)arg3 contact:(id)arg4 viewController:(id)arg5 params:(id)arg6;
- (void)didReceiveMemoryWarning;
- (void)clearHeightCache;
- (void)updateHeightCacheForLayoutWidth:(double)arg1;
- (void)layoutSubviews;
- (void)refreshCover;
- (void)updateLayoutForContainerSize:(CGSize)arg1;
- (void)updateHeaderView;
- (void)didChangeBackground;
- (void)onWCBackgroundChanged;
- (id)getTableView;
- (void)onDataChanged:(id)arg1;
- (void)onHomepageClearJumpState;
- (void)shouldReloadData:(id)arg1 starredDataItems:(id)arg2 jumpState:(BOOL)arg3 prePage:(BOOL)arg4;
- (void)updateJumpState:(BOOL)arg1;
- (void)updateRowsData;
- (BOOL)shouldCreateNewGroupCellItem:(id)arg1 addDataItem:(id)arg2 isLastDataItemMustTakeOneCell:(BOOL)arg3;
- (id)createGroupItem;
- (void)insertRecentLimitTipIfNeeded:(unsigned long long)arg1 lastPublicArray:(id)arg2 dataItem:(id)arg3 lastItemTakeOneCell:(BOOL *)arg4;
- (id)filterIfPrePageNotEnd:(id)arg1;
- (void)showNoContentTips:(BOOL)arg1;
- (BOOL)shouldShowEmptyTipsInFooter;
- (void)adjustFooterHeightForEmptyTipsInFooter:(BOOL)arg1;
- (id)idForIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (id)getImageViewByDataItem:(id)arg1;
- (id)publishButtonFont;
- (id)buildAlbumPostButtonPrivate:(BOOL)arg1 label:(id)arg2 action:(SEL)arg3;
- (long long)indexOfPageForMediaItem:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)doSetEntranceForAllMediaItem;
- (void)setViewController:(id)arg1;
- (void)onYearMonthPickerViewShow;
- (void)onYearMonthPickerViewDismiss;
- (void)openCommitViewControllerWithShowLocation:(BOOL)arg1 arrImage:(id)arg2 postReportSession:(id)arg3;
- (void)openCommitViewControllerWithSightDraft:(id)arg1 postReportSession:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)showImagePicker:(long long)arg1 showsCameraButtonInPicker:(BOOL)arg2 showsCameraButtonAtBottom:(BOOL)arg3;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (BOOL)_prepareAssetsForPost:(id)arg1 withAssetPickerState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareCompositeTask:(id)arg1 withAsyncEnabled:(BOOL)arg2 fromAssetPicker:(id)arg3;
- (void)_syncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_asyncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_prepareVideoProducerWithAssetList:(id)arg1 withCurrentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareVideoProducerVMWithAssetList:(id)arg1 currentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_startVideoProducerVCWithVM:(id)arg1 fromAssetPicker:(id)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (id)assetPickerController:(id)arg1 willChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willEditVideoAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3 withCurrentState:(id)arg4;
- (id)_onAssetPickerDidChangeAssetSelection:(id)arg1 withCurrentState:(id)arg2;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)_onPickNewSightDraft:(id)arg1 withError:(id)arg2 logNote:(id)arg3 fromEntrance:(long long)arg4 isAsyncComposite:(BOOL)arg5;
- (void)onImagePickerManagerDidAppear;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerStartEditing;
- (void)onImagePickerManagerOpenCamera;
- (void)onImagePickerManagerDidTakeMedia;
- (void)onImagePickerManagerStartExportingWithAssetId:(id)arg1;
- (void)onImagePickerManagerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)_onRecordImagePickerAppear;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(id)arg1;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onSightCameraViewControllerStartEditing;
- (id)getViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportLastDraft;
- (void)recoverDraftAndOpenCommitViewControllerWithEnhanceDraftController:(id)arg1;
- (void)showPhotoAlert:(id)arg1;
- (void)configDataReportForActionSheet:(id)arg1;
- (void)configDataReportForActionSheet:(id)arg1 isPrivatePost:(BOOL)arg2;
- (void)showUploadOption:(id)arg1;
- (void)showPrivateUploadOption:(id)arg1;
- (void)onLongPressPublicPost:(id)arg1;
- (void)_presentPlainTextCommitForPublicPost;
- (void)onLongPressPrivatePost:(id)arg1;
- (void)_presentPlainTextCommitForPrivatePost;
- (void)_showPlainTextTipView;
- (void)onIKnowItBtnClicked;
- (void)showTextPostDraftAlert;
- (void)recoverTextDraftAndOpenCommitViewControllerWithEnhanceDraftController:(id)arg1;
- (id)actionSheetTitleForCurrentPostMode;
- (void)applyPrivatePostTitleStyleIfNeeded:(id)arg1;
- (void)addCameraButtonToActionSheet:(id)arg1;
- (void)showPostGuide;
- (void)acceptPostGuide;
- (void)onRestartUpload;
- (void)onCommentDetailViewController:(id)arg1 reEditDataItem:(id)arg2;
- (void)onDeleteData;
- (void)showDetailView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tryTriggerPrePageUpdate;
- (void)updateYearFlowView;
- (id)getFirstVisibleCellGroupItem;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onNoMoreDataWithRet:(long long)arg1 andTip:(id)arg2;
- (void)refreshHeader;
- (void)refreshHeaderEnd:(unsigned int)arg1;
- (void)refreshFooter;
- (void)refreshFooterEnd:(unsigned int)arg1;
- (void)reloadBackGround;
- (void)onClickWCImage:(id)arg1;
- (void)onClickWCPuzzleImage:(id)arg1;
- (void)showContactInfo;
- (void)resetListHeaderViewForSignatureLabelHeightChanged;
- (void)jumpToContentViewController:(id)arg1;
- (BOOL)isPrivate:(id)arg1;
- (void)showDetailViewController:(id)arg1;
- (void)handleTextView:(id)arg1;
- (void)handleMusicView:(id)arg1;
- (void)handleVideoView:(id)arg1;
- (void)handleFeedView:(id)arg1;
- (void)handleShortVideoView:(id)arg1;
- (void)handleShortVideoView:(id)arg1 fromView:(id)arg2;
- (void)handleClickShortVideoContentView:(id)arg1;
- (void)handleClickImageView:(id)arg1;
- (void)handleClickImageContentView:(id)arg1;
- (void)onRestoreWCListCellView:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (BOOL)shouldAddShadowView;
- (id)indexPathItemId:(id)arg1;
- (void)openPhotoMutipleImageViewController:(id)arg1 sourceView:(id)arg2;
- (CGRect)originRectForMediaItem:(id)arg1;
- (id)thumbnailViewForMediaItem:(id)arg1;
- (id)findImageViewForMediaItem:(id)arg1 inView:(id)arg2;
- (id)makeYearCell:(id)arg1 withItem:(id)arg2;
- (id)makeTipCell:(id)arg1 withItem:(id)arg2 indexPath:(id)arg3;
- (void)didJumpToSettingWcRecentPrivacy;
- (BOOL)tryToInsertRecentLimitTipItemInArray:(id)arg1;
- (id)getCurrentRecentString;
- (long long)getCurrentYearWithUpdate:(BOOL)arg1;
- (void)scrollToShowItem:(id)arg1 tryLoadMore:(BOOL)arg2 animated:(BOOL)arg3;
- (void)hideTableView;
- (void)showTableView;
- (void)clearAnimationProperties;
- (id)FindTheRowViewContainDataItem:(id)arg1;
- (void)showAnimationToImageView;
- (void)scrollTableViewToShowDataItem:(id)arg1;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)WCListYearFloatViewDidClickLabel:(id)arg1;
- (id)listHeaderViewInNormalState;
- (id)listHeaderViewInJumpState;
- (double)aspectRatio;
- (void)setupFrontView;
- (void)setupTLDragAnimateHelper;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)panGestureRecognize:(id)arg1;
- (void)setupExpanableHeaderIfNeeded;
- (double)mediaViewMinHeight;
- (void)jumpToTextStateSourceViewController;
- (void)onTapAtTLProfileHeadButton;
- (void)onEnterHoverStateByUser;
- (void)onTapAtTLProfileDetailButton;
- (void)onTapAtTLProfileChangeCoverButton;
- (void)onTapAtTLProfileLikeButton:(BOOL)arg1;
- (id)onGetTLProfileViewController;
- (void)pauseMedia;
- (void)resumeMedia;
- (void)pushStarViewControllerWithGroupItem:(id)arg1;
- (id)generatePostReportSessionForEntrance:(long long)arg1;
- (id)recoverPostReportSessionFromTrashWithPostCycleId:(id)arg1;
- (void)clearPostReportSession;
- (void)cancelAndClearPostReportSession;
- (void)addSpringItemToActionSheetIfNeeded:(id)arg1;
- (id)buildAlbumCommonParams;
- (void)reportFeedExpose:(id)arg1;
- (void)reportFeedClick:(id)arg1;
- (id)viewController;
- (id)m_groups;
- (void)setM_groups:(id)arg1;
- (id)m_arrGroupsForDate;
- (void)setM_arrGroupsForDate:(id)arg1;
- (id)m_cellHeightCache;
- (void)setM_cellHeightCache:(id)arg1;
- (id)m_arrPhotoDataForView;
- (void)setM_arrPhotoDataForView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)animateHelper;
- (void)setAnimateHelper:(id)arg1;
- (BOOL)isStarBrowsingEnabled;
- (void)setIsStarBrowsingEnabled:(BOOL)arg1;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (double)heightCacheLayoutWidth;
- (void)setHeightCacheLayoutWidth:(double)arg1;
- (id)multipleImageViewController;
- (void)setMultipleImageViewController:(id)arg1;
- (id)yearFlowView;
- (void)setYearFlowView:(id)arg1;
- (void)setListHeaderViewInNormalState:(id)arg1;
- (void)setListHeaderViewInJumpState:(id)arg1;
- (BOOL)isJumpState;
- (void)setIsJumpState:(BOOL)arg1;
- (BOOL)isPrePageDayEnd;
- (void)setIsPrePageDayEnd:(BOOL)arg1;
- (BOOL)jumpStateChanging;
- (void)setJumpStateChanging:(BOOL)arg1;
- (id)listFrontView;
- (void)setListFrontView:(id)arg1;
- (id)expandableHeader;
- (void)setExpandableHeader:(id)arg1;
- (BOOL)isCoverNewVersion;
- (void)setIsCoverNewVersion:(BOOL)arg1;
- (BOOL)isModeTall;
- (void)setIsModeTall:(BOOL)arg1;
- (CGSize)lastContainerLayoutSize;
- (void)setLastContainerLayoutSize:(CGSize)arg1;
- (id)profileModel;
- (long long)puzzleImageViewLayoutStyle;
- (void)setPuzzleImageViewLayoutStyle:(long long)arg1;
- (BOOL)isPrivatePost;
- (void)setIsPrivatePost:(BOOL)arg1;
- (BOOL)lockPrivateVisibility;
- (void)setLockPrivateVisibility:(BOOL)arg1;
- (long long)snsPopupBtnValue;
- (void)setSnsPopupBtnValue:(long long)arg1;
- (double)m_normalFooterHeight;
- (void)setM_normalFooterHeight:(double)arg1;
- (BOOL)m_bLongPressPostBtn;
- (void)setM_bLongPressPostBtn:(BOOL)arg1;
- (BOOL)isLongPressTextPost;
- (void)setIsLongPressTextPost:(BOOL)arg1;
- (id)plainTextTipView;
- (void)setPlainTextTipView:(id)arg1;
- (BOOL)pendingTextPostIsPrivate;
- (void)setPendingTextPostIsPrivate:(BOOL)arg1;
- (void).cxx_destruct;
@end
