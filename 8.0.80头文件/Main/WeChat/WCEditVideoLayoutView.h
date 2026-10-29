@interface WCEditVideoLayoutView : MMUIView <WCEditVideoViewControllerExt, EditImageTextInputDelegate, UIGestureRecognizerDelegate, EVVideoPreviewBrowserViewDelegate, WCActionSheetDelegate, EditVideoCompositionBrowserViewDelegate, EditImageCropToolBarDelegate, WCEditVideoToolListProxyDelegate, MMBGMSelectHalfScreenViewControllerDelegate, WCFinderTemplateMusicSelectEntranceViewDelegate, WCEditImageOperationDelegate, EditImagePenToolAttrDelegate, EditVideoCropViewDelegate, EditVideoBgmViewDelegate, IUiUtilExt, IMMAssetICloudExt, EditImageEmotionToolAttrDelegate>
{
    MMUIImageView * _topBackgroundView; // +0x8
    MMUIButton * _doneBtn; // +0x10
    MMUIImageView * _bottomBackgroundView; // +0x18
    MMUIButton * _penBtn; // +0x20
    EditImagePenToolAttrView * _penAttrBar; // +0x28
    EditImageEmotionToolAttrView * _emotionAttrView; // +0x30
    EditImageTextInputView * _textInputView; // +0x38
    BOOL _isToolBarOccupy; // +0x40
    CGPoint _previewLastContentOffset; // +0x48
    UIEdgeInsets _previewLastEdgeInsets; // +0x58
    BOOL _bTimeCropping; // +0x78
    BOOL _shouldHideTopRightEntrance; // +0x79
    BOOL _shouldSkipAutoCrop; // +0x7a
    BOOL _isShowingTopBottomBars; // +0x7b
    BOOL _enterCropVideoView; // +0x7c
    BOOL _defaultOriginalSoundMute; // +0x7d
    BOOL _isEmoticonBoardSearchEnabled; // +0x7e
    BOOL _shouldHideTopBarViewOnShowNewBGMPanel; // +0x7f
    BOOL _shouldHideMusicEntranceView; // +0x80
    BOOL _isShowingBGMPanelVC; // +0x81
    BOOL _showTopAndBottomBarWithoutAnimate; // +0x82
    BOOL _isCropOver; // +0x83
    BOOL _isCropStartAnimationReady; // +0x84
    BOOL _isAspectRatioLocked; // +0x85
    BOOL _hasSizeCropEdit; // +0x86
    BOOL _isFirstCropping; // +0x87
    int _lastToolType; // +0x88
    id <WCEditVideoLayoutViewDelegate> delegate; // +0x90
    NSMutableArray * _avAssets; // +0x98
    AVMutableComposition * _avComposition; // +0xa0
    unsigned long long _entranceType; // +0xa8
    id <WCFinderEditDataReportDelegate> _finderReportDelegate; // +0xb0
    unsigned long long _editImageUIStyle; // +0xb8
    NSArray * _initialEditWidgetStates; // +0xc0
    MMUIView * _topBarView; // +0xc8
    MMUIButton * _cancelBtn; // +0xd0
    MMUIButton * _sendBtn; // +0xd8
    MMUIView * _bottomBarView; // +0xe0
    UIScrollView * _bottomBarEditToolListView; // +0xe8
    WCEditImageScrollView * _eIScrollView; // +0xf0
    MMLoadingView * _loadingView; // +0xf8
    EditVideoBGMView * _bgmAttrView; // +0x100
    unsigned long long _filterIndex; // +0x108
    WCEditLoadingModeButton * _bgmBtn; // +0x110
    MMUIButton * _textBtn; // +0x118
    EditVideoLogicController * _editVideoLogicController; // +0x120
    EVVideoPreviewBrowserView * _videoPreview; // +0x128
    EditVideoMusicController * _musicController; // +0x130
    MMUIButton * _cropSizeBtn; // +0x138
    MMUIButton * _cropBtn; // +0x140
    MMUIButton * _emotionBtn; // +0x148
    MMUIButton * _launchMiaoJianBtn; // +0x150
    MMUIButton * _jumpMoreBtn; // +0x158
    EditVideoCropView * _cropAttrView; // +0x160
    RecommendedMusicInfo * _patMusicInfo; // +0x168
    NSArray * _customBottomButtonOrder; // +0x170
    WCEditViewControllerUIConfig * _uiConfig; // +0x178
    EditVideoCompositionBrowserView * _videoCompositionEffectView; // +0x180
    MMBGMSelectHalfScreenViewController * _bgmPanelVC; // +0x188
    NSMutableDictionary * _snsSceneReportDict; // +0x190
    NSString * _currentMusicId; // +0x198
    EditImageTextToolV2 * _textWidget; // +0x1a0
    AVMutableVideoComposition * _videoComposition; // +0x1a8
    MMUIButton * _promotionButtonInFirstCropping; // +0x1b0
    MMUIButton * _promotionButtonInEditing; // +0x1b8
    EditVideoSecondCutPromotionButtonShadowWrapper * _secondCutPromotionButton; // +0x1c0
    WCEditVideoShareLongVideoModel * _shareLongVideoModel; // +0x1c8
    UIView * _containerView; // +0x1d0
    UIImageView * _bgImageView; // +0x1d8
    UIView * _bgBlurView; // +0x1e0
    UIView * _outterBorderView; // +0x1e8
    UIView * _innterBorderView; // +0x1f0
    MMMusicFadeOutLayer * _imageMaskLayer; // +0x1f8
    UILabel * _titleLabel; // +0x200
    unsigned long long _cropEdge; // +0x208
    double _naturalTopLength; // +0x210
    EditImageCropToolBarViewModel * _sizeCropViewModel; // +0x218
    EditImageCropToolBarView * _cropToolBar; // +0x220
    EditImageCropOverlayView * _overlayView; // +0x228
    EditImageCropGridView * _cropGridView; // +0x230
    UIPanGestureRecognizer * _gridPanGes; // +0x238
    MMTimer * _timer; // +0x240
    UILabel * _firstCropTipsView; // +0x248
    WCEditVideoToolListDelegateProxy * _toolListDelegateProxy; // +0x250
    CAGradientLayer * _toolListGradientLayer; // +0x258
    NSMutableArray * _bgmPanelTabModels; // +0x260
    MMBGMSelectedConfig * _bgmPanelConfig; // +0x268
    WCFinderTemplateMusicSelectEntranceView * _musicEntranceView; // +0x270
    double _lastScale; // +0x278
    double _lastMinScale; // +0x280
    double _lastMaxScale; // +0x288
    CGPoint _cropTouchPoint; // +0x290
    CGPoint _originalScrollViewOffset; // +0x2a0
    CGSize _lastContentSize; // +0x2b0
    CGPoint _lastContentOffset; // +0x2c0
    CGSize _lastDuoChatOverlaySize; // +0x2d0
    CGRect _cropFrame; // +0x2e0
    CGRect _cropOriginalFrame; // +0x300
    CGRect _cropTouchFrame; // +0x320
    CGRect _containerLastFrame; // +0x340
}
+ (CGRect)getVideoCropFrameWithViewFrame:(CGRect)arg1 viewCropFrame:(CGRect)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)loadingView;
- (void)willMoveToWindow:(id)arg1;
- (id)shareLongVideoModel;
- (BOOL)useVideoCompositionPreview;
- (void)onEditVideo;
- (void)reportForTimelineEditVideoExposeWithoutCrop;
- (void)reportForTimelineEditVideoExposeWithCrop:(unsigned int)arg1;
- (BOOL)shouldAddCropLogic;
- (BOOL)isOriginalVideoMute;
- (BOOL)isClickBgmButton;
- (void)onClickDoneBtn:(id /* block */)arg1;
- (id)getEditImageAttr;
- (id)getVideoComposition;
- (void)updateAccessibilityLabel:(id)arg1;
- (void)initView;
- (BOOL)previewStyleForSNSHeader;
- (BOOL)shouldIgnoreToolbarToggleForSNSHeaderPreviewTap;
- (void)updateTopBarVisibilityForNavigationStyle;
- (double)snsHeaderPreviewContentTop;
- (void)setupSubviewForSNSHeader;
- (void)updateVideoPreviewFrameForSNSHeader;
- (void)showSubviewForSNSHeader;
- (void)hideSubviewForSNSHeader;
- (double)bottomBarBottomMargin;
- (double)bottomBarEditToolListLeft;
- (void)layoutBottomBarButtonVertically:(id)arg1 inView:(id)arg2;
- (void)addBlurView;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (BOOL)enableShowFinderLongVideoEntry;
- (void)initFinderButtonForLongVideo;
- (void)initFinderButtonForShortVideo;
- (void)initSendLongVideoBtn;
- (void)initSendByWeishiBtn;
- (void)initTopBar;
- (void)setSendBtnTitle:(id)arg1;
- (void)setCancelBtnIcon:(id)arg1 length:(double)arg2;
- (void)adjustVideoPromotionEntranceButton;
- (void)initBottomBar;
- (void)_initBottomBarEditTool;
- (void)_initBottomBarEditToolListView;
- (void)initPenToolAttrBar;
- (void)initEmotionBtn;
- (void)initEmotionToolAttrBar;
- (unsigned long long)setBGMViewButtonOption;
- (void)initBGMToolAttrBar;
- (BOOL)recoverBGMViewForEditVideoAttr:(id)arg1;
- (void)_reloadBGMView;
- (void)initTextToolAttrBar;
- (void)initBGMLogicAndBtn;
- (void)addPatMusicInfoToBGMLogic;
- (void)initBgmLogic;
- (void)customBGMSelectedOptionalConfig:(id)arg1;
- (void)stopRawAndBGMMusicPlay;
- (void)initBGMBtn;
- (id)getMusicLogoName;
- (void)setPlayerTimeControlStatusChangeBlock;
- (void)initSendBtn;
- (void)initCropBtn;
- (void)initCropSizeBtn;
- (void)initCropToolAttrBar;
- (void)getNewCropToolAttrBar;
- (void)initLaunchMiaoJianBtn;
- (void)_onClickLaunchMiaoJian:(id)arg1;
- (void)initJumpMoreBtn;
- (void)_onClickJumpMoreBtn:(id)arg1;
- (BOOL)isUniversalSecondCutPromotionEnabled:(long long)arg1;
- (void)initSecondCutPromotionBtn;
- (void)onClickSecondCutPromotionButton:(id)arg1;
- (void)initVideoCompositionEffectPreview;
- (void)initVideoPreview;
- (void)initEditImageView;
- (CGRect)getPreviewFrame;
- (void)reloadPenToolAttrBar;
- (void)reloadEmotionToolAttrBar;
- (void)reloadCropToolAttrBar;
- (void)reloadTopEditVideoBar;
- (void)reloadBottomEditVideoBar;
- (void)_relayoutBottomEditToolBarGradientMask;
- (CGSize)_getBottomBarEditToolIconSize;
- (double)_getBottomBarEditToolIconMarginLeft;
- (double)_getBottomBarEditToolIconMarginBottom;
- (id)_generateLayerMaskForBottomBarEditToolList;
- (id)_generateGradientLayerForBottomBarEditToolList;
- (BOOL)canVideoSizeCrop;
- (id)getCustomBottomButtonOrder;
- (void)adjustBottomBarYIfNeeded;
- (id)_getAllCustomBottomBarBtns;
- (id)_getAllBottomBarBtns;
- (CGRect)getBtnAccessibilityFrameWithButton:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandler:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(BOOL)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setEmotionToolAttrViewHidden:(BOOL)arg1;
- (void)setBGMToolAttrViewHidden:(BOOL)arg1;
- (void)easeInOutTopAndBottomBar:(BOOL)arg1;
- (void)easeInOutTopAndBottomBar:(BOOL)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)showTopAndBottomBar:(BOOL)arg1;
- (void)_showTopBottomBars;
- (void)_hideTopBottomBars;
- (void)layoutTopBottomBars;
- (void)showCropVideo:(BOOL)arg1;
- (void)showCropVideo:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)layoutScrollView:(double)arg1;
- (void)firstShowCrop;
- (id)snapshotAtVideoTime:(double)arg1;
- (id)generateWidgetStateList;
- (id)avAsset;
- (void)initWeSeeReportData:(BOOL)arg1;
- (double)getVideoScaleForCrop;
- (void)onSendByWeishiBtnClick;
- (void)didClickFinderButtonForLongVideo:(id)arg1;
- (void)didClickFinderButtonForShortVideo:(id)arg1;
- (void)postVideoByFinderFromEntrance:(long long)arg1;
- (void)onSendLongVideoBtnClick;
- (void)returnToTimelineOrAlbum;
- (void)hiddenBottomEditImageBarSubViewExceptNextBtn:(BOOL)arg1;
- (void)onClickCancel;
- (void)onClickDone;
- (void)onClickPenEdit:(id)arg1;
- (void)onClickEmotionEdit:(id)arg1;
- (void)onClickTextEdit:(id)arg1;
- (void)onClickCropEdit:(id)arg1;
- (void)onClickCropTimeLength;
- (void)removeBlurView;
- (void)onClickSizeCropEdit:(id)arg1;
- (void)setupNewMusicPanelIfNeeded;
- (void)onBGMSelectedViewControllerInit;
- (void)setupNewMusicTopEntranceBarIfNeeded;
- (void)onClickBGMEdit:(id)arg1;
- (void)updateBtns;
- (void)updateToolBtns;
- (void)selectLastToolType;
- (void)startEmotionTool;
- (void)onEmotionToolBarDoneBtnClicked:(BOOL)arg1;
- (void)clearEmotionToolOperation;
- (void)startTextToolWithDisplayStr:(id)arg1 lineColor:(id)arg2 textStyle:(unsigned long long)arg3;
- (void)_reloadTextInputView;
- (void)startCropView:(CGRect)arg1;
- (void)postStartCropView;
- (void)showCropToolBarViewWithAnimated:(BOOL)arg1;
- (void)startAnimateToCropFrame;
- (void)initContentImage;
- (void)setScrollViewMaxMinZoomScale:(BOOL)arg1;
- (void)restoreLayoutContentImage;
- (void)revertLayoutContentImage;
- (void)setAspectRatio:(CGSize)arg1 withAnimation:(BOOL)arg2;
- (void)checkForCanRevert;
- (BOOL)isCropped;
- (void)moveContentToCenter;
- (void)matchOverlayViewToCropGridView;
- (void)startTimer;
- (void)startTimer:(double)arg1;
- (void)resetTimer;
- (void)triggerTimer;
- (void)croppingView;
- (void)finishCroppingView;
- (unsigned long long)cropEdgeForPoint:(CGPoint)arg1;
- (void)updateCropLinesWithPoint:(CGPoint)arg1;
- (void)gridPanGestureRecognized:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)triggerScrollViewDidEndZooming;
- (void)cancelCropToolBar;
- (void)onCropToolBarCancelBtnClicked;
- (void)onCropToolBarDoneBtnClicked;
- (void)onCropToolBarRevertBtnClicked;
- (void)onCropToolBarCropProportionBtnClick:(BOOL)arg1 aspectRatio:(double)arg2;
- (CGRect)calculateTrueEditImageViewFrameWithRatioImage:(CGSize)arg1;
- (void)goBackToEditView;
- (void)saveProperties;
- (void)clearOperation;
- (CGRect)_contentFrame;
- (void)set_cropFrame:(CGRect)arg1;
- (CGSize)_oldStartImageFrameSize;
- (id)sizeCropViewModel;
- (BOOL)shouldShowNewBGMPanel;
- (id)createBGMPanelTabModels;
- (id)createBGMSelectedConfigWithPreferDuration:(unsigned long long)arg1;
- (void)editVideoToolListScrollViewDidScroll:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(BOOL)arg5;
- (void)handleBGMSelectedViewController:(id)arg1 didSelectedMusic:(id)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickMusicOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewController:(id)arg1 didClickOSTOnBtn:(BOOL)arg2;
- (void)bgmSelectedViewControllerWillClose:(id)arg1;
- (void)bgmSelectedViewControllerDidClose:(id)arg1;
- (void)bgmSelectedViewController:(id)arg1 didChangeVisibleHeight:(double)arg2;
- (void)handleBGMSelectedViewController:(id)arg1 didChangeVisibleHeight:(double)arg2;
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)undoPenEditImage;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)didSelectEmoticonWithWrap:(id)arg1 decodedImage:(id)arg2;
- (id)currentViewController;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)editImageShowTextInputView:(id)arg1 displayStr:(id)arg2 lineColor:(id)arg3 textStyle:(unsigned long long)arg4;
- (CGRect)getAssetPreviewFrame;
- (BOOL)scrollViewDidZoom:(id)arg1;
- (BOOL)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)dragaAndDropWidget;
- (void)onEditSuccess:(BOOL)arg1 withTimeRange:(struct)arg2;
- (void)seekToTime:(double)arg1;
- (void)seekToTimeNoPause:(double)arg1;
- (void)onCropTimeChange:(struct)arg1;
- (id)currentPlayingVideoPreview;
- (void)EditVideoBGMDone:(id)arg1;
- (void)_closeEditVideoBGMViewAndHideToolbar:(BOOL)arg1;
- (BOOL)isOnCropProcess;
- (void)EditVideoBGMViewDidClickTurnOffMusicButton:(BOOL)arg1;
- (void)EditVideoBGMViewMusicOnOffStateChange:(BOOL)arg1;
- (id)editVideoLogicController;
- (void)onRestartVideoPlayAt:(double)arg1;
- (void)onEditVideoViewControllerWillDisappear;
- (void)cancelEditText:(id)arg1;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (double)listenTimeIntervalInSection;
- (double)compositionViewlistenTimeIntervalInSection;
- (void)listenPlayProgressWithCMTime:(struct)arg1;
- (void)previewBrowserViewDidReachEnd:(id)arg1;
- (void)videoCompositionBrowserViewPlayReachEnd:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)avAssets;
- (void)setAvAssets:(id)arg1;
- (id)avComposition;
- (void)setAvComposition:(id)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (id)finderReportDelegate;
- (void)setFinderReportDelegate:(id)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (id)initialEditWidgetStates;
- (void)setInitialEditWidgetStates:(id)arg1;
- (BOOL)shouldHideTopRightEntrance;
- (void)setShouldHideTopRightEntrance:(BOOL)arg1;
- (BOOL)shouldSkipAutoCrop;
- (void)setShouldSkipAutoCrop:(BOOL)arg1;
- (BOOL)isShowingTopBottomBars;
- (id)topBarView;
- (void)setTopBarView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)sendBtn;
- (void)setSendBtn:(id)arg1;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg1;
- (id)bottomBarEditToolListView;
- (void)setBottomBarEditToolListView:(id)arg1;
- (id)eIScrollView;
- (void)setEIScrollView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)bgmAttrView;
- (void)setBgmAttrView:(id)arg1;
- (unsigned long long)filterIndex;
- (void)setFilterIndex:(unsigned long long)arg1;
- (int)lastToolType;
- (void)setLastToolType:(int)arg1;
- (id)bgmBtn;
- (void)setBgmBtn:(id)arg1;
- (id)textBtn;
- (void)setTextBtn:(id)arg1;
- (void)setEditVideoLogicController:(id)arg1;
- (id)videoPreview;
- (void)setVideoPreview:(id)arg1;
- (id)musicController;
- (void)setMusicController:(id)arg1;
- (id)cropSizeBtn;
- (void)setCropSizeBtn:(id)arg1;
- (id)cropBtn;
- (void)setCropBtn:(id)arg1;
- (id)emotionBtn;
- (void)setEmotionBtn:(id)arg1;
- (id)launchMiaoJianBtn;
- (void)setLaunchMiaoJianBtn:(id)arg1;
- (id)jumpMoreBtn;
- (void)setJumpMoreBtn:(id)arg1;
- (id)cropAttrView;
- (void)setCropAttrView:(id)arg1;
- (BOOL)enterCropVideoView;
- (void)setEnterCropVideoView:(BOOL)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (BOOL)defaultOriginalSoundMute;
- (void)setDefaultOriginalSoundMute:(BOOL)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (id)customBottomButtonOrder;
- (void)setCustomBottomButtonOrder:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (id)videoCompositionEffectView;
- (void)setVideoCompositionEffectView:(id)arg1;
- (BOOL)shouldHideTopBarViewOnShowNewBGMPanel;
- (void)setShouldHideTopBarViewOnShowNewBGMPanel:(BOOL)arg1;
- (BOOL)shouldHideMusicEntranceView;
- (void)setShouldHideMusicEntranceView:(BOOL)arg1;
- (id)bgmPanelVC;
- (void)setBgmPanelVC:(id)arg1;
- (BOOL)isShowingBGMPanelVC;
- (void)setIsShowingBGMPanelVC:(BOOL)arg1;
- (BOOL)showTopAndBottomBarWithoutAnimate;
- (void)setShowTopAndBottomBarWithoutAnimate:(BOOL)arg1;
- (id)snsSceneReportDict;
- (void)setSnsSceneReportDict:(id)arg1;
- (id)currentMusicId;
- (void)setCurrentMusicId:(id)arg1;
- (id)textWidget;
- (void)setTextWidget:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)promotionButtonInFirstCropping;
- (void)setPromotionButtonInFirstCropping:(id)arg1;
- (id)promotionButtonInEditing;
- (void)setPromotionButtonInEditing:(id)arg1;
- (id)secondCutPromotionButton;
- (void)setSecondCutPromotionButton:(id)arg1;
- (void)setShareLongVideoModel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)bgBlurView;
- (void)setBgBlurView:(id)arg1;
- (id)outterBorderView;
- (void)setOutterBorderView:(id)arg1;
- (id)innterBorderView;
- (void)setInnterBorderView:(id)arg1;
- (id)imageMaskLayer;
- (void)setImageMaskLayer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (CGRect)cropFrame;
- (void)setCropFrame:(CGRect)arg1;
- (CGRect)cropOriginalFrame;
- (void)setCropOriginalFrame:(CGRect)arg1;
- (CGRect)cropTouchFrame;
- (void)setCropTouchFrame:(CGRect)arg1;
- (CGPoint)cropTouchPoint;
- (void)setCropTouchPoint:(CGPoint)arg1;
- (unsigned long long)cropEdge;
- (void)setCropEdge:(unsigned long long)arg1;
- (BOOL)isCropOver;
- (void)setIsCropOver:(BOOL)arg1;
- (BOOL)isCropStartAnimationReady;
- (void)setIsCropStartAnimationReady:(BOOL)arg1;
- (double)naturalTopLength;
- (void)setNaturalTopLength:(double)arg1;
- (BOOL)isAspectRatioLocked;
- (void)setIsAspectRatioLocked:(BOOL)arg1;
- (CGPoint)originalScrollViewOffset;
- (void)setOriginalScrollViewOffset:(CGPoint)arg1;
- (void)setSizeCropViewModel:(id)arg1;
- (id)cropToolBar;
- (void)setCropToolBar:(id)arg1;
- (id)overlayView;
- (void)setOverlayView:(id)arg1;
- (id)cropGridView;
- (void)setCropGridView:(id)arg1;
- (id)gridPanGes;
- (void)setGridPanGes:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)hasSizeCropEdit;
- (void)setHasSizeCropEdit:(BOOL)arg1;
- (id)firstCropTipsView;
- (void)setFirstCropTipsView:(id)arg1;
- (id)toolListDelegateProxy;
- (void)setToolListDelegateProxy:(id)arg1;
- (id)toolListGradientLayer;
- (void)setToolListGradientLayer:(id)arg1;
- (id)bgmPanelTabModels;
- (void)setBgmPanelTabModels:(id)arg1;
- (id)bgmPanelConfig;
- (void)setBgmPanelConfig:(id)arg1;
- (id)musicEntranceView;
- (void)setMusicEntranceView:(id)arg1;
- (BOOL)isFirstCropping;
- (void)setIsFirstCropping:(BOOL)arg1;
- (double)lastScale;
- (void)setLastScale:(double)arg1;
- (double)lastMinScale;
- (void)setLastMinScale:(double)arg1;
- (double)lastMaxScale;
- (void)setLastMaxScale:(double)arg1;
- (CGSize)lastContentSize;
- (void)setLastContentSize:(CGSize)arg1;
- (CGPoint)lastContentOffset;
- (void)setLastContentOffset:(CGPoint)arg1;
- (CGRect)containerLastFrame;
- (void)setContainerLastFrame:(CGRect)arg1;
- (CGSize)lastDuoChatOverlaySize;
- (void)setLastDuoChatOverlaySize:(CGSize)arg1;
- (void).cxx_destruct;
@end
