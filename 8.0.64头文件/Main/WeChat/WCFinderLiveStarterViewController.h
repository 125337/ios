@interface WCFinderLiveStarterViewController : MMLiveStarterViewController <ILinkEventExt, WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, ILBSLifeMgrExt, MMImagePickerManagerDelegate, MMLiveNameVerifyViewControllerDelegate, WCFinderLiveControlItemCellDelegate, MMLiveBeautyOperationContainerViewDelegate, MMLiveFilterOperationPanelDelegate, MMLiveMakeupOperationPanelDelegate, MMLiveBeautyEffectsBaseOperationPanelDelegate, MMLiveCountdownTipsViewDelegate, MMScrollActionSheetDelegate, MMFinderLiveSelectTagViewControllerDelegate, ILocationMgrExt, MMFinderLiveNewShareSettingViewControllerDelegate, WCFinderLiveStartPOIViewDelegate, WCTimelinePOIPickerViewControllerDelegate, MultiSelectContactsViewControllerDelegate, WCFinderHeadImageViewDelegate, MMLiveCameraOperationPanelDelegate, MMFinderLiveBulletinViewControllerDelegate, MMFinderLiveMusicSettingReportDelegate, MMFinderLiveFansGroupOperationReportDelegate, MMFinderLivePromoteManageReportDelegate, MMFinderLiveSetQuickReplyViewDelegate, MMFinderLiveFansGroupGiftCustomizationPanelExt, MMLiveMusicOperationPanelDelegate, MMFinderCreateLiveSpamCheckWarnPageVCDelegate, MMFinderLivePaymentSettingViewControllerDelegate, MMFinderLiveGesturePageSheetDelegate, WCFinderLiveStarterViewControllerBadgeExt, MMLiveSystemMentionsViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WCFinderLiveStarterBaseViewDelegate, MMLiveMoreFunctionManagerDelegate, MMLiveTaskMgrExt, UIViewControllerTransitioningDelegate, MMFinderLiveStickerEditorChromeFadingExt, MMLiveViewExt, WCFinderLiveStarterSwitchModeDelegate, MMFinderLiveChooseLiveModeDelegate, WCFinderStarterLiveGameViewModelDelegate, LiveNoticeModReminderViewDelegate, MMFinderLiveConnectMicAnchorModeSettingPanelDelegate, MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate, MMLiveGenerateReplaySettingPanelDelegate, LiveStarterSimpleLocationDelegate, MMFinderLiveCreateLiveGuideLogicDelegate, MMFinderLiveCreateLiveGuidePanelDelegate, MMFinderLiveSimpleVersionChooseViewDelegate>
{
    BOOL _allowLandscapeLive; // +0x70
    BOOL _shouldStartLiveAfterSelectTag; // +0x71
    BOOL _showSearchMoreGames; // +0x72
    BOOL _recommendOptionState; // +0x73
    BOOL _hasFetchedLBS; // +0x74
    BOOL _hasSelectPOI; // +0x75
    BOOL _hasStartLive; // +0x76
    BOOL _topicCompleteInit; // +0x77
    BOOL _testtingSpeed; // +0x78
    BOOL _needShowWeakNetTip; // +0x79
    BOOL _canUseCamGesture; // +0x7a
    BOOL _showwingTopic; // +0x7b
    BOOL _hasChooseSimpleVersion; // +0x7c
    BOOL _isCoverImageUpdated; // +0x7d
    BOOL _useFinderHeadAsCoverImage; // +0x7e
    BOOL _isAssociateNotice; // +0x7f
    BOOL _hasCheckTheme; // +0x80
    BOOL _hasAppear; // +0x81
    BOOL _hasEndAnimation; // +0x82
    BOOL _hasShowVideo; // +0x83
    BOOL _needFefreshGameCover; // +0x84
    BOOL _anchorTaskEntranceViewNeedAni; // +0x85
    BOOL _anchorTaskEntranceViewAnimating; // +0x86
    unsigned int _finderLocationSource; // +0x88
    int _triggerType; // +0x8c
    unsigned int _targetItemType; // +0x90
    id <WCFinderLiveStarterViewControllerDelegate> _delegate; // +0x98
    MMLiveVisibilitySelectButton * _visibilitySelectButton; // +0xa0
    MMUIButton * _closeButton; // +0xa8
    MMUIButton * _miniWindowButton; // +0xb0
    MMUIButton * _mockNewControllerButton; // +0xb8
    MMFinderLiveSharePubbleTipView * _starterGuideTipsView; // +0xc0
    UIView * _tipDependentView; // +0xc8
    UIView * _inviteView; // +0xd0
    CAGradientLayer * _topGradientLayer; // +0xd8
    CAGradientLayer * _bottomGradientLayer; // +0xe0
    MMUIMaskContainerView * _controlPanelContainerView; // +0xe8
    NSMutableSet * _notExposedPanelCells; // +0xf0
    NSMutableSet * _exposedPanelCellRedDotPathSet; // +0xf8
    UIView * _gestureContainerView; // +0x100
    UIPinchGestureRecognizer * _pinchGesture; // +0x108
    UITapGestureRecognizer * _tapGesture; // +0x110
    UIView * _videoZoomGuideView; // +0x118
    MMLiveBeautyOperationContainerView * _beautyContainerView; // +0x120
    MMLiveFilterOperationPanel * _filterOperationPanel; // +0x128
    MMLiveMakeupOperationPanel * _makeupOperationPanel; // +0x130
    MMLiveCameraOperationPageSheet * _cameraOperationPanel; // +0x138
    MMLiveMusicOperationPanel * _musicOperationPanel; // +0x140
    MMLiveDecorationOperationPanel * _decorOperationPanel; // +0x148
    MMLiveVisionEffectsOperationPanel * _visionEffectsOperationPanel; // +0x150
    MMFinderLiveBannerView * _bannerView; // +0x158
    unsigned long long _geoTag; // +0x160
    MMLiveStarterWeakNetTipView * _weakNetTipView; // +0x168
    MMLiveStarterTestSpeedManager * _testSpeedManager; // +0x170
    MMFinderLiveSpeedTestNotifyModel * _uploadPacket; // +0x178
    FinderCreateLiveWarnPage * _warnPageNeedShowAfterCountDownTimeout; // +0x180
    MMFinderLiveSetQuickReplyView * _quickReplyView; // +0x188
    MMLiveControlItem * _cameraControlItem; // +0x190
    MMStarterLiveMoreFunctionManager * _moreFunctionManager; // +0x198
    MMLiveSystemMentionsView * _systemMentionsView; // +0x1a0
    NSSet * _settingSheetValidRedDotPaths; // +0x1a8
    NSMutableArray * _waitingPortraitCallbacks; // +0x1b0
    NSMutableArray * _waitingLandscapeCallbacks; // +0x1b8
    WCFinderLiveStarterSimpleButton * _simpleButton; // +0x1c0
    WCFinderLiveStarterSimpleCamera * _simpleCamera; // +0x1c8
    WCFinderLiveStarterSimpleLocation * _simpleLocation; // +0x1d0
    WCFinderLiveStarterSimpleTopic * _simpleTopic; // +0x1d8
    WCFinderLiveStarterSimpleSetting * _simpleSetting; // +0x1e0
    MMFinderLiveSharePubbleTipView * _simpleGuideTipsView; // +0x1e8
    WCFinderLiveSimpleVersionChooseView * _simpleVersionChooseView; // +0x1f0
    WCFinderLiveStarterSwitchModeView * _switchModeView; // +0x1f8
    WCFinderLiveChooseLiveModeView * _chooseLiveModeView; // +0x200
    WCActionSheet * _chooseCoverActionSheet; // +0x208
    UIView * _separateLineUnderDesc; // +0x210
    UIView * _stickerEditingActivatorContainerView; // +0x218
    MMLiveCategorySelectButton * _categorySelectView; // +0x220
    MMLiveRoomSelectButton * _redPacketRoomSelectButton; // +0x228
    WCFinderLiveStartPOIView * _startPOIView; // +0x230
    MMLiveScreenMapSelectButton * _screenMapSelectButton; // +0x238
    MMLiveNoticeSelectButton * _noticeSelectButton; // +0x240
    MMFinderLiveNoticeModReminderView * _modReminderView; // +0x248
    MMFinderLiveNoticeShowReminderView * _showReminderView; // +0x250
    WCFinderLiveStarterThemeGuideView * _themeGuideView; // +0x258
    WCFinderLiveStarterControlPanelView * _controlPanelView; // +0x260
    WCFinderLiveControlItemCell * _bottomMoreCell; // +0x268
    UIScrollView * _checkBoxView; // +0x270
    MMUIButton * _agreementCheckbox; // +0x278
    RichTextView * _agreementText; // +0x280
    MMUIButton * _startLiveButton; // +0x288
    MMFinderLiveAudioRoomInfoView * _audioRoomInfoView; // +0x290
    unsigned long long _hiddenItemsFlagForActionSheet; // +0x298
    double _gameScale; // +0x2a0
    MMFinderLiveNewAnchorTaskEntranceView * _anchorTaskEntranceView; // +0x2a8
    MMTimer * _anchorTaskEntranceAniTimer; // +0x2b0
    WCFinderLiveControlItemCell * _musicCell; // +0x2b8
    WCFinderLiveControlItemCell * _lotteryCell; // +0x2c0
    WCFinderLiveControlItemCell * _fansGroupCell; // +0x2c8
    WCFinderLiveControlItemCell * _promoteCell; // +0x2d0
    WCFinderLiveControlItemCell * _rewardWishCell; // +0x2d8
    MMFinderLiveCreateLiveGuidePanel * _createLiveGuidePanel; // +0x2e0
    MMFinderLiveCreateLiveGuideLogic * _createLiveGuideLogic; // +0x2e8
}
- (void)startRecordScreenWithCompleteBlock:(id /* block */)arg1;
- (void)stopRecordScreen;
- (void)setUpService;
- (void)clearReplayKitLive;
- (id)currentReplayKitManager;
- (void)reportWithType:(unsigned long long)arg1;
- (void)game_chooseCompleteWithLiveGameUserInfo:(id)arg1 gameEntryScene:(long long)arg2;
- (void)game_chooseGameWithAppId:(id)arg1 gameEntryScene:(long long)arg2;
- (void)game_viewDidLoad;
- (void)game_viewWillAppear;
- (void)showGameJoinTeamSettingView;
- (void)game_onClickCoverImageView;
- (void)onBackButtonClicked;
- (void)dismissStarterLiveViewController;
- (void)updateDataItemForLivePrepare;
- (BOOL)isGameLivePolicyCheckedAlready;
- (void)openSongSettingsOperationPanel;
- (void)game_on3DButtonClick;
- (void)internalEnter3DEntrance;
- (void)game_onClickPlayTogether:(id)arg1 gameAppId:(id)arg2;
- (void)internalShowPlayTogether;
- (void)game_onClickStartAction:(id)arg1;
- (void)game_realStartLive;
- (BOOL)shouldInteractivePop;
- (void)startLivePrepare:(BOOL)arg1;
- (void)startRecordLive:(BOOL)arg1;
- (void)startMiniGameLive:(BOOL)arg1;
- (void)showEducateHalfScreenForFirstCreateGameLive:(BOOL)arg1;
- (void)syncBGM;
- (void)startGameLivePrepare:(id)arg1;
- (void)showSelectSheet:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)startGameLivePrepare:(id)arg1 showSelectSheet:(BOOL)arg2;
- (void)game_showWarnPage:(id)arg1;
- (void)showSuccessPageViewController;
- (void)showErrorPageViewController;
- (void)sendReqLaunchAppMsgWithGameBuffer:(id)arg1 notPassOpenId:(BOOL)arg2;
- (id /* block */)launchGameAppCallbackHandler;
- (void)showTipsForNeedDownloadGame;
- (BOOL)canDownloadGameOnAppstore;
- (BOOL)isGameLiveStartFromFinder;
- (BOOL)isGameLiveStartFromApp;
- (BOOL)isAppGameLive;
- (BOOL)isMiniGameLiveStartFromFinder;
- (BOOL)isMiniGameLive;
- (void)onGameJoinTeamSettingButtonClick:(id)arg1;
- (BOOL)game_showJoinTeamSticker;
- (void)game_onJoinTeamStickerButtonClick:(id)arg1;
- (void)game_actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showGameFinderCameraViewController;
- (void)game_showFinderPublishView;
- (void)setGameCoverAsFinderHeadURL;
- (void)game_MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)game_onSightCameraCancel:(id)arg1;
- (void)game_onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)game_MMImagePickerManagerDidCancel:(id)arg1;
- (void)game_MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)uploadImageIfNeeded;
- (void)checkAysncGetCoverImgOcrSpamCheckInfoAndPrepare;
- (void)updateImageWithDataItem:(id)arg1;
- (BOOL)cacheCoverImage:(id)arg1;
- (void)removeCacheCoverImage;
- (void)game_onUpdateGameUserInfo:(id)arg1;
- (void)showViewsOnGameStarterPrepared;
- (void)game_onGetGameUserInfoErr:(int)arg1 errMsg:(id)arg2;
- (BOOL)isGameUserInfoValidForLivePrepare:(id)arg1;
- (BOOL)isGameQualifyForJoinTeam;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onMMLiveGameJoinTeamSettingViewChooseJoinTeamMode:(unsigned int)arg1 curPayment:(unsigned int)arg2;
- (void)onMMLiveGameJoinTeamSettingViewChooseCoinValue:(unsigned int)arg1;
- (void)onJoinMiniGameLiveError:(id)arg1;
- (void)forceRotateToPortrait;
- (BOOL)game_enableSettingBGMusic;
- (BOOL)game_canCreateLiveSongs;
- (BOOL)game_enablePlayTogether;
- (BOOL)shouldShowGameLiveAngelBtn;
- (void)game_onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (void)gameReportWithAction:(unsigned long long)arg1;
- (unsigned int)game_getTypeReportValue;
- (void)onMMLiveGamePlayTogetherTeamCornerJump:(id)arg1;
- (void)onClickJoinTeamSettingEntry:(id)arg1;
- (id)presentJoinTeamSettingItem;
- (double)baseViewHeight;
- (void)game_GotoSelectGameWithTaskid:(id)arg1 gameUserInfoList:(id)arg2 showSearch:(BOOL)arg3;
- (void)onJoinRecordGameLiveError:(id)arg1;
- (BOOL)canShowRecordGuideView;
- (void)showRecordGuideView;
- (BOOL)handleLiteAppDispatchWithActionName:(id)arg1 params:(id)arg2 instanceId:(unsigned long long)arg3 callbackId:(int)arg4 finderJumpInfo:(id)arg5;
- (void)onGameSetTeamConditon:(id)arg1 finderJumpInfo:(id)arg2;
- (void)onGameTeamClosePlayTogetherActionSheet:(id)arg1 finderJumpInfo:(id)arg2;
- (id)initWithFinderLiveTaskId:(id)arg1 shareItem:(id)arg2 andLiveNoticeList:(id)arg3 viewModel:(id)arg4;
- (void)configStartVMCallback;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)loadView;
- (void)videoRealStartLive;
- (unsigned long long)systemCapabilityAuthScene;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (void)removeFromParentViewController;
- (void)updateLiveTagInfo:(id)arg1;
- (void)markShowWarnPageAfterCountDownTimeout:(id)arg1;
- (void)fetchLocation;
- (BOOL)checkAndFetchRecommendGPSInfo;
- (void)fetchRecommendGPSInfoByUserGpsCache;
- (void)getRecommendPOIInfoByUserGPS;
- (void)getGPSListAccordingWithLatitude:(double)arg1 andLongitude:(double)arg2;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (id)convertLbsLifeToWCLocationInfoWithLbsLife:(id)arg1;
- (id)evolvePoiAddressFromLbsLife:(id)arg1;
- (void)fetchAddressByCurrentLocation;
- (void)stopGeocoder;
- (void)updateCurrentLocationInfo:(id)arg1 fromSrc:(unsigned long long)arg2;
- (void)updateLocationCityInfo:(id)arg1;
- (BOOL)isCurrentShoppingCategory;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (BOOL)canSelectVisibility;
- (void)initSubViews;
- (void)layoutUI;
- (void)layoutSystemMentionsView;
- (void)updateSubviewsStatusOnAppear;
- (void)layoutTopAndBottomLayer;
- (void)layoutTopButtons;
- (void)minimizeAnchorTaskEntrance;
- (void)hideOrShowAnchorTaskEntrance:(BOOL)arg1;
- (void)layoutBottomViews;
- (double)getRightViewsLeftEdgeInLandscape;
- (double)getLeftViewsRightEdgeInLandscape;
- (double)getGrowTextViewWidth;
- (double)getWidgetBottomWithBottomView:(id)arg1;
- (void)initHeadSubViews;
- (BOOL)needDisplayAnchorTaskImgView;
- (void)initControlPanelViewAndResetItems;
- (void)initInviteView;
- (void)initCoverImageView;
- (void)initGrowTextView;
- (void)initSeparateLine;
- (void)layoutNoticeView;
- (void)initLiveButtons;
- (void)initStartPOIView;
- (void)initScreenMap;
- (void)initCategorySelectView;
- (void)initVisibilitySelectButton;
- (void)layoutCountdownTipsView;
- (BOOL)shouldAgreementCheckBoxShown;
- (void)addShakeOnCheckBoxView;
- (void)updateAccessbility;
- (void)layoutBeautyOperationContainerView;
- (void)layoutFilterOperationPanel;
- (void)layoutMakeupOperationPanel;
- (void)layoutCameraOperationPanel;
- (double)getPanelLeftMargin;
- (double)getPanelRightMargin;
- (double)getLandscapeEdgePadding;
- (double)getPanelLandscapeEdgePadding;
- (void)layoutMusicOperationPanel;
- (void)layoutDecorOperationPanel;
- (void)layoutVisionEffectsOperationPanel;
- (id)weakNetTipView;
- (void)onCheckBoxClicked;
- (void)onCloseButtonClicked;
- (void)onMiniWindowButtonClicked;
- (void)onMockNewControllerClicked;
- (void)onAddGoodsButtonClick;
- (void)onBgMusicButtonClick;
- (void)onSongButtonClick;
- (void)onPromoteButtonClick;
- (void)onLotteryButtonClick;
- (void)onCameraButtonClick;
- (void)onMoreButtonClicked;
- (void)showReplaySettingPanel;
- (void)forcePortraitWithCompletion:(id /* block */)arg1;
- (void)flushPortraitCallbacksIfCan;
- (void)forceLandscapeWithCompletion:(id /* block */)arg1;
- (void)flushLandscapeCallbacksIfCan;
- (void)removeAllPanels;
- (void)onClickStartLiveAction:(id)arg1;
- (void)realStartLive;
- (void)showConfirmViewWithTitle:(id)arg1;
- (BOOL)hasSelectedValidTag;
- (void)startFinderLive;
- (void)showLiveStarterWarnPage:(id)arg1;
- (void)showWarnPage:(id)arg1;
- (void)onOrientationChanged;
- (void)onCurrAnchorMainShouldSupportOrientationMaskChanged:(unsigned long long)arg1;
- (void)changePresentedViewControllersOverrideOrientationMask:(unsigned long long)arg1;
- (BOOL)isLivePolicyCheckedElsewhere;
- (void)updateDataItemInfos;
- (void)onCategorySelectButtonClick:(id)arg1;
- (void)showLiveCategoryPickerView;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)onSelectRoomButtonClickForRedPacket:(id)arg1;
- (void)openConnectMicSettingPanel;
- (void)onLiveNoticeClick;
- (void)selectRoomForRedPacket;
- (void)showFansGroupPanel;
- (void)showCreateWishPanel;
- (void)showAnchorCustomizeRewardListPanel;
- (void)onVisibilityLabelClicked:(id)arg1;
- (void)onPaymentSettingActionSheetItemClick;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)checkUpdateVisibilityChatroomListWithRedpacketRoomContacts:(id)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onMMFinderLiveSelectTagViewControllerTapDoneWithTagInfo:(id)arg1;
- (void)updateLiveTagInfo:(id)arg1 fetchGPSInfo:(BOOL *)arg2;
- (void)checkAndStartFinderLiveAfterSelectTag:(id)arg1;
- (void)updateCameraButtonReddot;
- (void)onMMFinderLiveShareSettingViewControllerTapDoneWithShareSettingResult:(id)arg1;
- (void)onMMFinderLivePaymentSettingViewControllerTapDoneWithPaymentOpened:(BOOL)arg1 liveMode:(int)arg2 priceInWecoin:(unsigned int)arg3 andFreeContactUsernameList:(id)arg4 andFreeContactChatroomList:(id)arg5 andFreeContactListForDigestDisplay:(id)arg6 selectedFreeFileLists:(id)arg7 purchaseLivePreviewType:(long long)arg8 trialTimeHour:(unsigned int)arg9 trialTimeMinute:(unsigned int)arg10;
- (void)onMMLiveCountdownStart;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownTimeOut;
- (void)cancelLiveAndUpdateData;
- (void)showCountdownView;
- (void)hideCountdownView;
- (void)hiddenSubviewsShowCountdown:(BOOL)arg1;
- (BOOL)shouldHideNavigationBar;
- (unsigned long long)currentSupportedOrientationMask;
- (id)startLiveButton;
- (id)closeButton;
- (id)miniWindowButton;
- (id)mockNewControllerButton;
- (id)getMinimizeIconName;
- (void)showStarterGuideTipsViewWith:(id)arg1 type:(long long)arg2;
- (void)updateGuideTip;
- (BOOL)tryShowPaidMicGuide;
- (void)tryHidePaidMicGuide;
- (void)layoutStarterGuideTipsView;
- (void)dismissStarterGuideTipsViewView;
- (id)liveTask;
- (BOOL)enableShowNoticeView;
- (BOOL)enableBindNoticeView;
- (void)createAnchorTaskbannerView;
- (void)reportAnchorTaskActivityExposeAction:(id)arg1;
- (void)reportAnchorTaskActivityClickAction:(id)arg1;
- (void)createAnchorTaskEntranceView;
- (void)markControlPanelCellRedDotExposedIfNeeded;
- (id)getCamCellRedDotPath;
- (id)getMusicButtonRedDotPath;
- (id)getRedDotShowInfoAtPath:(id)arg1;
- (BOOL)reloadMoreButtonRedDot;
- (BOOL)shouldShowRedDotForMoreButton;
- (void)reloadControlPanelCellRedDotWithName:(id)arg1 path:(id)arg2;
- (void)reloadControlPanelCellRedDot:(id)arg1 path:(id)arg2;
- (void)markExposeForAllSheetItem;
- (id)getDefaultText;
- (id)currentLiveTask;
- (void)onWCFinderLiveStarterBaseViewHitTestCalledWithView:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showFinderCameraViewController;
- (BOOL)isFrontCamera;
- (void)showFinderPublishView;
- (void)game_showAudioOnlyBackgroundPicker;
- (void)setCoverAsFinderHeadURL;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)updateCoverImageViewWith:(id)arg1;
- (void)hiddenSubviewsTextViewBecomeFirstRespond:(BOOL)arg1;
- (void)saveCoverImageToLocalPath;
- (void)clearLocalCoverImageFiles;
- (void)onFinderLiveStartFailWith:(id)arg1 errorType:(int)arg2;
- (void)onWCFinderLiveStarterControlItemCellClicked:(id)arg1 item:(id)arg2;
- (void)onMMLiveBeautyOperationContainerViewClose:(BOOL)arg1;
- (void)onMMLiveFilterOperationPanelClose:(BOOL)arg1;
- (void)onMMLiveMakeupOperationPanelClose:(BOOL)arg1;
- (void)onMMLiveCameraOperationPanelCloseWithNextState:(unsigned long long)arg1;
- (void)onMMLiveCameraOperationPanelExposedRedDotAtPath:(id)arg1;
- (void)onMMLiveCameraOperationPanelClickedRedDotAtPath:(id)arg1;
- (void)onMMLiveCameraOperationPanelWillShow:(id)arg1;
- (void)showCameraConfirmActionSheetForEnabingCamera:(BOOL)arg1;
- (void)showStickerActionSheet;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)delayShowLoading;
- (void)showLoading;
- (void)onUpdateGameUserInfoList:(id)arg1;
- (void)onUpdateGameUserInfo:(id)arg1 needClearClientLocalCache:(BOOL)arg2;
- (void)onUpdateGameUserStickerInfo:(id)arg1 needClearClientLocalCache:(BOOL)arg2;
- (void)onGetGameUserInfoErr:(int)arg1 errMsg:(id)arg2;
- (void)onUpdateShowSearch:(BOOL)arg1;
- (void)onGameLiveButtonClick;
- (id)getCurrentGameLiveCoverImage;
- (void)onPOIViewClickAction;
- (void)onPOIPickerFinished:(id)arg1;
- (void)onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (void)onMMFinderLiveBulletinViewControllerTapDone:(id)arg1;
- (void)updateGrowTextViewFrameWhenEdit;
- (double)getGrowTextViewMaxHeight;
- (BOOL)enableDescExtend;
- (void)onBulletinViewClickAction:(BOOL)arg1;
- (id)getDescriptionPromptWording;
- (void)onReportFansGroupOperationActionType:(long long)arg1;
- (void)onReportFansGroupNoticeActionType:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4 visibility:(long long)arg5;
- (void)onLiveStaterPromoteOperationReport:(long long)arg1 promoteActionType:(long long)arg2 reportData:(id)arg3;
- (void)onPromoteAddedReport:(long long)arg1 businessId:(id)arg2;
- (long long)getPromoteUserType;
- (void)onCustomizationPanelOpening:(id)arg1;
- (void)onCustomizationPanelClosed:(id)arg1;
- (id)tempAnchorLogReporter;
- (void)updateBadgeEnablementForCameraControlItem;
- (void)updateGestureEnablementWithSelectedLiveTag:(id)arg1;
- (void)jumpFromStarterPageWith:(id)arg1;
- (BOOL)isPortrait;
- (unsigned long long)getSupportedOrientationMaskForSecondaryVC;
- (BOOL)shouldUseCustomPresent;
- (id)topButtonImgNormalColor;
- (id)topButtonImgHighlightColor;
- (void)tryShowVideoZoomGuideView;
- (void)tryRemoveVideoZoomGuideView;
- (void)initGestureContainerView;
- (void)handlePinchGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)layoutGestureContainerView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)operationPanel:(id)arg1 didCloseWithSelection:(unsigned long long)arg2;
- (void)startTestSpeedRequest;
- (void)testSpeedMethod:(id)arg1 sender:(id)arg2;
- (void)showWeakNetTip;
- (id)testSpeedManager;
- (void)quickReplyEditClick;
- (void)reportQuickReplyExpose;
- (void)quickReplyComplete:(id)arg1 showToast:(BOOL)arg2 hasContent:(BOOL)arg3;
- (void)showQuickReplySuccessToast:(BOOL)arg1;
- (id)quickReplyView;
- (void)reportYSdkCustomPageOut;
- (void)onMMLiveCreateLiveSpamCheckNameVerifySucceeded;
- (void)updateAssociateNoticeState:(BOOL)arg1;
- (void)onFinderLiveGesturePageSheetClosing:(id)arg1;
- (void)onBadgeStatusChangedForElement:(id)arg1;
- (void)onGestureCacheDidUpdate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openLiveCommentManage;
- (void)openLiveMoreFuntion;
- (void)updatenLiveMoreFuntion;
- (id)moreFunctionManager;
- (void)updateLiveMoreFunctionOperationView;
- (void)operationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (void)onLiveMoreFunctionWillOpen;
- (void)moreFunctionOperationViewWillDisappear;
- (void)showAlertForLocationAuthorization;
- (void)goToSettingLocationAuthorization;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(BOOL)arg1;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)checkAudioRoomLocationAuth;
- (BOOL)onNeedJumpWithMention:(id)arg1;
- (void)onLiveSystemMentionsDismiss:(id)arg1;
- (void)onMMLiveBeautyEffectsOperationPanelClose:(id)arg1 directly:(BOOL)arg2;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveTask:(id)arg1 trtcLocalVideoSizeChanged:(CGSize)arg2;
- (void)onCollapseAnimationDidEnd:(id)arg1;
- (void)onMinimizeInteractiveDidEnd:(id)arg1;
- (void)onLiveTask:(id)arg1 minimizeWindowWillClose:(BOOL)arg2 pipMode:(BOOL)arg3;
- (void)onStickerEditorChromeFadingBeginningWithBottomBarCleared:(BOOL)arg1;
- (void)onStickerEditorChromeFadingEndingRequested;
- (void)onLiveGenerateReplaySettingPanelUpdateSetting:(id)arg1;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (BOOL)miniGameUpdate;
- (CGRect)getCurrentMainVideoViewFrame;
- (double)getCurrentMainVideoViewMaxY;
- (void)updateCacheSubItem;
- (void)updateCacheLandscapVideo;
- (BOOL)isVideoLandscapSubItemWithSubItem:(id)arg1;
- (double)getControlPanelViewBottom;
- (void)resetToLiveVideoMode;
- (void)startLiveStarterWhenEntry;
- (BOOL)isChangeLiveModeWithItem:(id)arg1 lastItem:(id)arg2;
- (double)getSwitchModeViewScale;
- (id)getCurrentModeAllTagInfos;
- (id)getCurrentModeCurrentTagInfo;
- (int)currentFinderLiveMode;
- (BOOL)isVideoMode;
- (BOOL)isAudioMode;
- (BOOL)isGameMode;
- (BOOL)isKTVMode;
- (BOOL)enableSettingBGMusic;
- (BOOL)canCreateLiveSongs;
- (void)resetCoverImageView;
- (BOOL)isRewardAnchorEntrenceEnable;
- (void)didSelectItemAtIndexPath:(id)arg1 item:(id)arg2 didConsumeRedDot:(BOOL)arg3;
- (void)onSwitchLiveModeClick:(id)arg1 didConsumeRedDot:(BOOL)arg2;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(id)arg1 currentController:(id)arg2;
- (void)onMMLiveStarterViewControllerRepoortWithActionType:(unsigned long long)arg1 gameId:(id)arg2;
- (void)fetchGameUserInfoWithAppId:(id)arg1;
- (void)switchToGameModeWithLiveStarterViewModel:(id)arg1;
- (id)lastSwitchModeItem;
- (void)realSwitchMode:(id)arg1 closeLandscap:(BOOL)arg2 forceChange:(BOOL)arg3;
- (void)updateGameUserInfoWithSubItem:(id)arg1 forceChange:(BOOL)arg2;
- (BOOL)isVideoModeNeedChange:(id)arg1;
- (void)runRealSwitchVideoMode:(id)arg1;
- (void)runRealSwitchAudioMode:(id)arg1;
- (void)runRealSwitchKTVMode:(id)arg1 forceChange:(BOOL)arg2;
- (void)runRealSwitchGameMode:(id)arg1 forceChange:(BOOL)arg2;
- (void)updateSwitchModeData:(id)arg1;
- (void)updateSwitchModeUI:(id)arg1;
- (void)layoutSwitchModeUI;
- (void)createAudioRoomInfoViewIfNeeded;
- (void)layoutAudioRoomInfoView;
- (void)resetToPublicLive;
- (void)onFinderLiveChooseLiveModeViewSelectItem:(id)arg1;
- (id)chooseLiveModeView;
- (void)layoutSwitchModeView;
- (id)switchModeView;
- (void)layoutGrowTextViewPortraitArea;
- (void)layoutGrowTextViewLandScapeArea;
- (void)layoutStickerEditingActivatorContainerView;
- (void)layoutControlPanelView;
- (void)layoutCheckBoxView;
- (void)createCheckBoxView;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)reportStarterPlayTogetherAction:(unsigned long long)arg1;
- (void)setStartGameLiveButtonDisable:(BOOL)arg1;
- (id)minimizeSrcView;
- (void)noticeSelectClick;
- (id)reminderReportDicWithActionType:(unsigned long long)arg1;
- (void)reminderBottomViewClick:(BOOL)arg1;
- (void)onModReminderViewSelectWithLiveNoticeInfo:(id)arg1 selectType:(int)arg2;
- (id)themeGuideView;
- (BOOL)showThemeGuideView;
- (id)getLiveGuideInfoItemWithType:(int)arg1;
- (BOOL)isLiveThemeReminderSwitchOpen;
- (void)initRedPacketBindData;
- (void)anchorConnectMicModeSettingPanelDidCloseWithSelectedMode:(unsigned long long)arg1 paidMicSetting:(id)arg2;
- (void)anchorConnectMicModeSettingPanelReportWithExtraDict:(id)arg1 subElementType:(unsigned int)arg2;
- (BOOL)isConnectMicAvailable;
- (BOOL)isPaidConnectMicAvailable;
- (BOOL)shoppingCategoryNeedPoi;
- (void)updateSettingScrollActionSheetToTop;
- (void)simpleButtonClick:(id)arg1;
- (void)simpleCameraButtonClick:(id)arg1;
- (void)onSimpleLocationClickWithType:(unsigned long long)arg1 lbsLife:(id)arg2;
- (void)changeVersion:(BOOL)arg1;
- (void)hiddenSubviewsShowSimpleVersion:(BOOL)arg1 animateDuration:(double)arg2;
- (BOOL)showScreenMap;
- (void)layoutSimpleView;
- (void)initSimpleView;
- (id)simpleCamera;
- (id)simpleLocation;
- (BOOL)isSimpleVersion;
- (unsigned long long)saveLastSimpleVersionType;
- (BOOL)canShowSimpleVersion;
- (id)simpleButton;
- (id)simpleVersionChooseView;
- (void)onSimpleVersionChooseViewSelect:(BOOL)arg1;
- (void)showSimpleGuideTipsViewWith:(id)arg1 type:(long long)arg2;
- (void)dismissSimpleGuideTipsViewView;
- (void)layoutSimpleGuideTipsView;
- (void)updateWithBulletinInfo:(id)arg1;
- (id)showBulletinInfo;
- (void)updateTopicfNeeded;
- (BOOL)showNoticeInfo;
- (void)updateGrowTextViewWithBulletinInfo:(id)arg1;
- (id)showTopicString:(id)arg1;
- (void)updateWithSimpleBulletinInfo:(id)arg1;
- (void)updateSimpleGrowTextViewWithDescription:(id)arg1;
- (BOOL)canShowCreateLiveGuide;
- (BOOL)showCreateLiveGuidePanel;
- (id)createLiveGuideLogic;
- (id)createLiveGuidePanel;
- (void)updateCreateLiveGuideLbsLifeData:(id)arg1;
- (BOOL)checkCreateLiveHasTopicInfo;
- (BOOL)checkCreateLiveHasPOIInfo;
- (long long)getCurrentCreateLivePageMode;
- (void)onCreateLiveGuidePanelUpdateLiveTopicTitle:(id)arg1;
- (void)onCreateLiveGuidePanelUpdateLivePOIInfo:(id)arg1;
- (void)onCreateLiveGuidePanelTryStartLive;
- (BOOL)enablePlayTogether:(id)arg1;
- (void)handleSimpleModeRearCameraSwitch;
- (BOOL)openSimpleModeRearCameraSwitch;
- (void)onShareSettingViewConfirmedReport:(id)arg1;
- (void)reportWithPoi:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)visibilitySelectButton;
- (void)setVisibilitySelectButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setMiniWindowButton:(id)arg1;
- (void)setMockNewControllerButton:(id)arg1;
- (BOOL)allowLandscapeLive;
- (void)setAllowLandscapeLive:(BOOL)arg1;
- (id)starterGuideTipsView;
- (void)setStarterGuideTipsView:(id)arg1;
- (id)tipDependentView;
- (void)setTipDependentView:(id)arg1;
- (id)inviteView;
- (void)setInviteView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (id)controlPanelContainerView;
- (void)setControlPanelContainerView:(id)arg1;
- (id)notExposedPanelCells;
- (void)setNotExposedPanelCells:(id)arg1;
- (id)exposedPanelCellRedDotPathSet;
- (void)setExposedPanelCellRedDotPathSet:(id)arg1;
- (id)gestureContainerView;
- (void)setGestureContainerView:(id)arg1;
- (id)pinchGesture;
- (void)setPinchGesture:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)videoZoomGuideView;
- (void)setVideoZoomGuideView:(id)arg1;
- (id)beautyContainerView;
- (void)setBeautyContainerView:(id)arg1;
- (id)filterOperationPanel;
- (void)setFilterOperationPanel:(id)arg1;
- (id)makeupOperationPanel;
- (void)setMakeupOperationPanel:(id)arg1;
- (id)cameraOperationPanel;
- (void)setCameraOperationPanel:(id)arg1;
- (id)musicOperationPanel;
- (void)setMusicOperationPanel:(id)arg1;
- (id)decorOperationPanel;
- (void)setDecorOperationPanel:(id)arg1;
- (id)visionEffectsOperationPanel;
- (void)setVisionEffectsOperationPanel:(id)arg1;
- (BOOL)shouldStartLiveAfterSelectTag;
- (void)setShouldStartLiveAfterSelectTag:(BOOL)arg1;
- (unsigned int)finderLocationSource;
- (void)setFinderLocationSource:(unsigned int)arg1;
- (BOOL)showSearchMoreGames;
- (void)setShowSearchMoreGames:(BOOL)arg1;
- (BOOL)recommendOptionState;
- (void)setRecommendOptionState:(BOOL)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (BOOL)hasFetchedLBS;
- (void)setHasFetchedLBS:(BOOL)arg1;
- (BOOL)hasSelectPOI;
- (void)setHasSelectPOI:(BOOL)arg1;
- (BOOL)hasStartLive;
- (void)setHasStartLive:(BOOL)arg1;
- (unsigned long long)geoTag;
- (void)setGeoTag:(unsigned long long)arg1;
- (BOOL)topicCompleteInit;
- (void)setTopicCompleteInit:(BOOL)arg1;
- (void)setWeakNetTipView:(id)arg1;
- (void)setTestSpeedManager:(id)arg1;
- (id)uploadPacket;
- (void)setUploadPacket:(id)arg1;
- (BOOL)testtingSpeed;
- (void)setTesttingSpeed:(BOOL)arg1;
- (BOOL)needShowWeakNetTip;
- (void)setNeedShowWeakNetTip:(BOOL)arg1;
- (id)warnPageNeedShowAfterCountDownTimeout;
- (void)setWarnPageNeedShowAfterCountDownTimeout:(id)arg1;
- (BOOL)canUseCamGesture;
- (void)setCanUseCamGesture:(BOOL)arg1;
- (BOOL)showwingTopic;
- (void)setShowwingTopic:(BOOL)arg1;
- (void)setQuickReplyView:(id)arg1;
- (id)cameraControlItem;
- (void)setCameraControlItem:(id)arg1;
- (void)setMoreFunctionManager:(id)arg1;
- (id)systemMentionsView;
- (void)setSystemMentionsView:(id)arg1;
- (id)settingSheetValidRedDotPaths;
- (void)setSettingSheetValidRedDotPaths:(id)arg1;
- (id)waitingPortraitCallbacks;
- (void)setWaitingPortraitCallbacks:(id)arg1;
- (id)waitingLandscapeCallbacks;
- (void)setWaitingLandscapeCallbacks:(id)arg1;
- (BOOL)hasChooseSimpleVersion;
- (void)setHasChooseSimpleVersion:(BOOL)arg1;
- (void)setSimpleButton:(id)arg1;
- (void)setSimpleCamera:(id)arg1;
- (void)setSimpleLocation:(id)arg1;
- (id)simpleTopic;
- (void)setSimpleTopic:(id)arg1;
- (id)simpleSetting;
- (void)setSimpleSetting:(id)arg1;
- (id)simpleGuideTipsView;
- (void)setSimpleGuideTipsView:(id)arg1;
- (void)setSimpleVersionChooseView:(id)arg1;
- (void)setSwitchModeView:(id)arg1;
- (void)setChooseLiveModeView:(id)arg1;
- (BOOL)isCoverImageUpdated;
- (void)setIsCoverImageUpdated:(BOOL)arg1;
- (BOOL)useFinderHeadAsCoverImage;
- (void)setUseFinderHeadAsCoverImage:(BOOL)arg1;
- (id)chooseCoverActionSheet;
- (void)setChooseCoverActionSheet:(id)arg1;
- (id)separateLineUnderDesc;
- (void)setSeparateLineUnderDesc:(id)arg1;
- (id)stickerEditingActivatorContainerView;
- (void)setStickerEditingActivatorContainerView:(id)arg1;
- (id)categorySelectView;
- (void)setCategorySelectView:(id)arg1;
- (id)redPacketRoomSelectButton;
- (void)setRedPacketRoomSelectButton:(id)arg1;
- (id)startPOIView;
- (void)setStartPOIView:(id)arg1;
- (id)screenMapSelectButton;
- (void)setScreenMapSelectButton:(id)arg1;
- (id)noticeSelectButton;
- (void)setNoticeSelectButton:(id)arg1;
- (id)modReminderView;
- (void)setModReminderView:(id)arg1;
- (id)showReminderView;
- (void)setShowReminderView:(id)arg1;
- (int)triggerType;
- (void)setTriggerType:(int)arg1;
- (BOOL)isAssociateNotice;
- (void)setIsAssociateNotice:(BOOL)arg1;
- (void)setThemeGuideView:(id)arg1;
- (BOOL)hasCheckTheme;
- (void)setHasCheckTheme:(BOOL)arg1;
- (id)controlPanelView;
- (void)setControlPanelView:(id)arg1;
- (id)bottomMoreCell;
- (void)setBottomMoreCell:(id)arg1;
- (id)checkBoxView;
- (void)setCheckBoxView:(id)arg1;
- (id)agreementCheckbox;
- (void)setAgreementCheckbox:(id)arg1;
- (id)agreementText;
- (void)setAgreementText:(id)arg1;
- (void)setStartLiveButton:(id)arg1;
- (id)audioRoomInfoView;
- (void)setAudioRoomInfoView:(id)arg1;
- (unsigned long long)hiddenItemsFlagForActionSheet;
- (void)setHiddenItemsFlagForActionSheet:(unsigned long long)arg1;
- (double)gameScale;
- (void)setGameScale:(double)arg1;
- (BOOL)hasAppear;
- (void)setHasAppear:(BOOL)arg1;
- (BOOL)hasEndAnimation;
- (void)setHasEndAnimation:(BOOL)arg1;
- (BOOL)hasShowVideo;
- (void)setHasShowVideo:(BOOL)arg1;
- (BOOL)needFefreshGameCover;
- (void)setNeedFefreshGameCover:(BOOL)arg1;
- (id)anchorTaskEntranceView;
- (void)setAnchorTaskEntranceView:(id)arg1;
- (id)anchorTaskEntranceAniTimer;
- (void)setAnchorTaskEntranceAniTimer:(id)arg1;
- (BOOL)anchorTaskEntranceViewNeedAni;
- (void)setAnchorTaskEntranceViewNeedAni:(BOOL)arg1;
- (BOOL)anchorTaskEntranceViewAnimating;
- (void)setAnchorTaskEntranceViewAnimating:(BOOL)arg1;
- (id)musicCell;
- (void)setMusicCell:(id)arg1;
- (id)lotteryCell;
- (void)setLotteryCell:(id)arg1;
- (id)fansGroupCell;
- (void)setFansGroupCell:(id)arg1;
- (id)promoteCell;
- (void)setPromoteCell:(id)arg1;
- (id)rewardWishCell;
- (void)setRewardWishCell:(id)arg1;
- (unsigned int)targetItemType;
- (void)setTargetItemType:(unsigned int)arg1;
- (void)setCreateLiveGuidePanel:(id)arg1;
- (void)setCreateLiveGuideLogic:(id)arg1;
- (void).cxx_destruct;
@end
