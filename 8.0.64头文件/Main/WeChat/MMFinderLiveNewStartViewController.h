@interface MMFinderLiveNewStartViewController : MMUIViewController <MMFinderLiveNewStartViewDelegate, MMFinderLiveChooseModeViewDelegate, ILinkEventExt, WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, MMImagePickerManagerDelegate, MMLiveNameVerifyViewControllerDelegate, WCFinderLiveControlItemCellDelegate, MMLiveBeautyOperationContainerViewDelegate, MMLiveFilterOperationPanelDelegate, MMLiveMakeupOperationPanelDelegate, MMLiveBeautyEffectsBaseOperationPanelDelegate, MMLiveCountdownTipsViewDelegate, MMScrollActionSheetDelegate, MMFinderLiveSelectTagViewControllerDelegate, ILocationMgrExt, MMFinderLiveNewShareSettingViewControllerDelegate, WCFinderLiveStartPOIViewDelegate, WCTimelinePOIPickerViewControllerDelegate, MultiSelectContactsViewControllerDelegate, WCFinderHeadImageViewDelegate, MMLiveCameraOperationPanelDelegate, MMFinderLiveBulletinViewControllerDelegate, MMFinderLiveMusicSettingReportDelegate, MMFinderLiveFansGroupOperationReportDelegate, MMFinderLivePromoteManageReportDelegate, MMFinderLiveFansGroupGiftCustomizationPanelExt, MMLiveMusicOperationPanelDelegate, MMFinderCreateLiveSpamCheckWarnPageVCDelegate, MMFinderLivePaymentSettingViewControllerDelegate, MMFinderLiveGesturePageSheetDelegate, MMLiveSystemMentionsViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, MMLiveMoreFunctionManagerDelegate, MMLiveTaskMgrExt, UIViewControllerTransitioningDelegate, MMFinderLiveStickerEditorChromeFadingExt, MMLiveViewExt, MMFinderLiveChooseLiveModeDelegate, WCFinderStarterLiveGameViewModelDelegate, LiveNoticeModReminderViewDelegate, MMFinderLiveConnectMicAnchorModeSettingPanelDelegate, MMFinderLiveConnectMicAnchorModeSettingPanelReportDelegate, MMLiveGenerateReplaySettingPanelDelegate, MMFinderLiveCreateLiveGuideLogicDelegate, MMFinderLiveCreateLiveGuidePanelDelegate, MMFinderLiveSimpleVersionChooseViewDelegate, MMFinderLiveAgreementViewDelegate, MMFinderLiveSetQuickReplyViewDelegate, MMFinderLiveNewStartScrollActionSheetDelegate>
{
    BOOL _hasShowVideo; // +0x70
    BOOL _showSearchMoreGames; // +0x71
    BOOL _useFinderHeadAsCoverImage; // +0x72
    BOOL _isCoverImageUpdated; // +0x73
    BOOL _topicCompleteInit; // +0x74
    BOOL _isAssociateNotice; // +0x75
    BOOL _hasAppear; // +0x76
    BOOL _hasCheckTheme; // +0x77
    BOOL _hasFetchedLBS; // +0x78
    BOOL _hasSelectPOI; // +0x79
    BOOL _hasStartLive; // +0x7a
    BOOL _needShowWeakNetTip; // +0x7b
    BOOL _testtingSpeed; // +0x7c
    BOOL _shouldStartLiveAfterSelectTag; // +0x7d
    BOOL _isRecordPermissionCheckOK; // +0x7e
    BOOL _isInRecordPermissionCheckProcess; // +0x7f
    BOOL _jumpToSticker; // +0x80
    BOOL _isAgreementChecked; // +0x81
    BOOL _uploadCoverImageRequired; // +0x82
    int _noticeTriggerType; // +0x84
    unsigned int _finderLocationSource; // +0x88
    unsigned int _versionType; // +0x8c
    unsigned int _curCoinValue; // +0x90
    id <MMFinderLiveNewStartViewControllerDelegate> _delegate; // +0x98
    MMLiveTaskId * _liveTaskId; // +0xa0
    NSDictionary * _startExtraInfo; // +0xa8
    MMLiveCountdownTipsView * _countdownTipsView; // +0xb0
    NSMutableArray * _portraitCallbacks; // +0xb8
    NSMutableArray * _landscapeCallbacks; // +0xc0
    MMFinderLiveControlButtonItem * _moreToolItem; // +0xc8
    MMFinderLiveControlButtonItem * _beautyItem; // +0xd0
    MMFinderLiveControlButtonItem * _switchCameraItem; // +0xd8
    MMLiveBeautyOperationContainerView * _beautyContainerView; // +0xe0
    MMLiveFilterOperationPanel * _filterOperationPanel; // +0xe8
    MMLiveMakeupOperationPanel * _makeupOperationPanel; // +0xf0
    MMLiveCameraOperationPageSheet * _cameraOperationPanel; // +0xf8
    MMLiveMusicOperationPanel * _musicOperationPanel; // +0x100
    MMLiveDecorationOperationPanel * _decorOperationPanel; // +0x108
    MMLiveVisionEffectsOperationPanel * _visionEffectsOperationPanel; // +0x110
    UIView * _stickerEditingActivatorContainerView; // +0x118
    MMFinderLiveAudioRoomInfoView * _audioRoomInfoView; // +0x120
    MMFinderLiveControlButtonItem * _musicItem; // +0x128
    MMFinderLiveControlButtonItem * _songItem; // +0x130
    MMFinderLiveControlButtonItem * _prizeItem; // +0x138
    MMFinderLiveControlButtonItem * _playTogetherButton; // +0x140
    MMFinderLiveControlButtonItem * _gameAngleButton; // +0x148
    MMFinderLiveNoticeModReminderView * _modReminderView; // +0x150
    MMFinderLiveNoticeShowReminderView * _showReminderView; // +0x158
    MMStarterLiveMoreFunctionManager * _moreFunctionManager; // +0x160
    MMLiveVisibilitySelectButton * _visibilitySelectButton; // +0x168
    WCFinderLiveStarterThemeGuideView * _themeGuideView; // +0x170
    MMFinderLiveCreateLiveGuidePanel * _createLiveGuidePanel; // +0x178
    MMFinderLiveCreateLiveGuideLogic * _createLiveGuideLogic; // +0x180
    FinderCreateLiveWarnPage * _warnPageNeedShowAfterCountDownTimeout; // +0x188
    MMLiveStarterWeakNetTipView * _weakNetTipView; // +0x190
    MMFinderLiveSpeedTestNotifyModel * _uploadPacket; // +0x198
    MMLiveStarterTestSpeedManager * _testSpeedManager; // +0x1a0
    MMFinderLiveSetQuickReplyView * _quickReplyView; // +0x1a8
    unsigned long long _geoTag; // +0x1b0
    WCFinderStarterLiveViewModel * _starterVM; // +0x1b8
    MMFinderLiveAgreementLogic * _agreementLogic; // +0x1c0
    MMFinderLiveReplayKitManager * _replayKitManager; // +0x1c8
    MMFinderLiveNewStartView * _baseView; // +0x1d0
    MMFinderLiveAgreementView * _agreementView; // +0x1d8
    MMFinderLiveNewStartScrollActionSheet * _moreActionSheet; // +0x1e0
    MMFinderLiveMusicSettingOperationPanel * _musicSettingOprationPanel; // +0x1e8
    MMFinderLiveSongSettingOperationPanel * _songSettingOperationPanel; // +0x1f0
    WCFinderLiveStarterChooseGamePanelView * _chooseGamePanelView; // +0x1f8
    WCFinderLiveStarterReporter * _reporter; // +0x200
    WCFinderLiveAnchorLogReporter * _anchorLogReporter; // +0x208
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
- (void)registerExtensions;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (void)removeFromParentViewController;
- (void)createAudioRoomInfoViewIfNeeded;
- (void)layoutUI;
- (void)layoutAudioRoomInfoView;
- (void)layoutBeauty;
- (void)layoutCountdownTipsView;
- (void)layoutUIOnSwitchToMode:(id)arg1;
- (void)operateSubviewsToHidden:(BOOL)arg1;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)loadView;
- (unsigned long long)systemCapabilityAuthScene;
- (void)initBeauty;
- (void)onMMLiveCameraOperationPanelCloseWithNextState:(unsigned long long)arg1;
- (void)showStickerActionSheet;
- (void)onMMLiveCameraOperationPanelExposedRedDotAtPath:(id)arg1;
- (void)onMMLiveCameraOperationPanelClickedRedDotAtPath:(id)arg1;
- (void)onMMLiveCameraOperationPanelWillShow:(id)arg1;
- (void)showCameraConfirmActionSheetForEnabingCamera:(BOOL)arg1;
- (void)onFinderLiveGesturePageSheetClosing:(id)arg1;
- (void)onMMLiveBeautyEffectsOperationPanelClose:(id)arg1 directly:(BOOL)arg2;
- (void)onMMLiveBeautyOperationContainerViewClose:(BOOL)arg1;
- (void)onMMLiveFilterOperationPanelClose:(BOOL)arg1;
- (void)onMMLiveMakeupOperationPanelClose:(BOOL)arg1;
- (void)onStickerEditorChromeFadingBeginningWithBottomBarCleared:(BOOL)arg1;
- (void)onStickerEditorChromeFadingEndingRequested;
- (BOOL)enableDescExtend;
- (void)updateWithBulletinInfo:(id)arg1;
- (id)getBulletinInfo;
- (void)updateTopicIfNeeded;
- (void)onBulletinViewClickAction:(BOOL)arg1;
- (id)getDescriptionPromptWording;
- (void)onMMFinderLiveBulletinViewControllerTapDone:(id)arg1;
- (void)refreshControlPanel;
- (id)beautyItem;
- (id)switchCameraItem;
- (id)musicItem;
- (id)songItem;
- (id)prizeItem;
- (id)playTogetherButton;
- (id)gameAngleButton;
- (id)moreToolItem;
- (BOOL)enableShowNoticeView;
- (BOOL)bottomNoticeClickEnabled;
- (void)initNoticeData;
- (void)updateNoticeData;
- (BOOL)showNoticeInfoForTopic;
- (id)getNoticeViewText;
- (BOOL)enableBindNoticeView;
- (void)noticeSelectClick;
- (id)reminderReportDicWithActionType:(unsigned long long)arg1;
- (void)reminderBottomViewClick:(BOOL)arg1;
- (void)onModReminderViewSelectWithLiveNoticeInfo:(id)arg1 selectType:(int)arg2;
- (void)updateAssociateNoticeState:(BOOL)arg1;
- (void)resetCoverImage;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)showFinderCameraViewController;
- (void)showFinderPublishView;
- (void)setCoverAsFinderHeadURL;
- (void)clearLocalCoverImageFiles;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithPostSession:(id)arg2;
- (void)updateCoverImageViewWith:(id)arg1;
- (void)saveCoverImageToLocalPath;
- (id)modeModel;
- (void)startLiveStarterWhenEntry;
- (void)refreshModeItems;
- (void)resetToLiveVideoMode;
- (void)onChooseModeViewSelectModeItem:(id)arg1;
- (void)realSwitchMode:(id)arg1 closeLandscap:(BOOL)arg2 forceChange:(BOOL)arg3;
- (void)realSwitchMode:(id)arg1 closeLandscap:(BOOL)arg2 forceChange:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)runRealSwitchVideoMode:(id)arg1;
- (void)runRealSwitchAudioMode:(id)arg1;
- (void)runRealSwitchGameMode:(id)arg1 forceChange:(BOOL)arg2;
- (void)updateSwitchModeData:(id)arg1;
- (void)updateCacheSubItem;
- (void)initGameData;
- (double)getSwitchModeViewScale;
- (void)setStartGameLiveButtonDisable:(BOOL)arg1;
- (void)onGameLiveButtonClick;
- (id)getCurrentGameLiveCoverImage;
- (void)game_showAudioOnlyBackgroundPicker;
- (void)onUpdateGameUserInfoList:(id)arg1;
- (void)onUpdateGameUserInfo:(id)arg1 needClearClientLocalCache:(BOOL)arg2;
- (void)onUpdateGameUserStickerInfo:(id)arg1 needClearClientLocalCache:(BOOL)arg2;
- (void)onGetGameUserInfoErr:(int)arg1 errMsg:(id)arg2;
- (void)onUpdateShowSearch:(BOOL)arg1;
- (void)checkRecordPermissionAndStartLive;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)onLiveNewStartViewControllerStartGameLiveWithViewModel:(id)arg1 currentController:(id)arg2;
- (void)fetchGameUserInfoWithAppId:(id)arg1;
- (void)updateGameUserInfoWithSubItem:(id)arg1 forceChange:(BOOL)arg2;
- (BOOL)isPortrait;
- (void)onOrientationChanged;
- (void)forceChangeOrientationIsPortrait:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)onClickStartLiveAction:(id)arg1;
- (void)onLiveAgreementChecked;
- (void)realStartLive;
- (void)videoRealStartLive;
- (void)showConfirmViewWithTitle:(id)arg1;
- (void)startFinderLive;
- (void)updateDataItemInfos;
- (void)initCountdownTipsView;
- (void)onFinderLiveStartFailWith:(id)arg1 errorType:(int)arg2;
- (void)onMMLiveCountdownStart;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownTimeOut;
- (void)cancelLiveAndUpdateData;
- (void)showCountdownView;
- (void)hideCountdownView;
- (void)markShowWarnPageAfterCountDownTimeout:(id)arg1;
- (void)showLiveStarterWarnPage:(id)arg1;
- (void)showWarnPage:(id)arg1;
- (void)onMMLiveCreateLiveSpamCheckNameVerifySucceeded;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
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
- (BOOL)showThemeGuideView;
- (id)getLiveGuideInfoItemWithType:(int)arg1;
- (void)startTestSpeedRequest;
- (void)testSpeedMethod:(id)arg1 sender:(id)arg2;
- (void)showWeakNetTip;
- (id)testSpeedManager;
- (void)onCategorySelectButtonClick:(id)arg1;
- (void)showLiveCategoryPickerView;
- (BOOL)hasSelectedValidTag;
- (void)onMMFinderLiveSelectTagViewControllerTapDoneWithTagInfo:(id)arg1;
- (void)updateLiveTagInfo:(id)arg1 fetchGPSInfo:(BOOL *)arg2;
- (void)checkAndStartFinderLiveAfterSelectTag:(id)arg1;
- (void)showAlertForLocationAuthorization;
- (void)goToSettingLocationAuthorization;
- (void)onLiveMoreFunctionWillOpen;
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
- (BOOL)isCurrentShoppingCategory;
- (void)updateLocationCityInfo:(id)arg1;
- (void)updateCurrentLocationInfo:(id)arg1 fromSrc:(unsigned long long)arg2;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)onPOIViewClickAction;
- (void)onPOIPickerFinished:(id)arg1;
- (void)initVisibilitySelectButton;
- (void)updateLiveShareSettingOnAppear;
- (void)onVisibilityLabelClicked:(id)arg1;
- (void)onMMFinderLiveShareSettingViewControllerTapDoneWithShareSettingResult:(id)arg1;
- (void)initRedPacketBindData;
- (void)selectRoomForRedPacket;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)checkUpdateVisibilityChatroomListWithRedpacketRoomContacts:(id)arg1;
- (id)moreActionSheet;
- (void)onClickCameraButton;
- (void)onClickMoreAction;
- (void)showFansGroupPanel;
- (void)showCreateWishPanel;
- (void)showAnchorCustomizeRewardListPanel;
- (void)openLiveMoreFuntion;
- (void)onAddGoodsButtonClick;
- (void)onBgMusicButtonClick;
- (void)onSongButtonClick;
- (void)onPromoteButtonClick;
- (void)onLotteryButtonClick;
- (void)openConnectMicSettingPanel;
- (void)updatenLiveMoreFuntion;
- (id)moreFunctionManager;
- (void)updateLiveMoreFunctionOperationView;
- (void)onPaymentSettingActionSheetItemClick;
- (void)onMMFinderLivePaymentSettingViewControllerTapDoneWithPaymentOpened:(BOOL)arg1 liveMode:(int)arg2 priceInWecoin:(unsigned int)arg3 andFreeContactUsernameList:(id)arg4 andFreeContactChatroomList:(id)arg5 andFreeContactListForDigestDisplay:(id)arg6 selectedFreeFileLists:(id)arg7 purchaseLivePreviewType:(long long)arg8 trialTimeHour:(unsigned int)arg9 trialTimeMinute:(unsigned int)arg10;
- (void)showReplaySettingPanel;
- (void)onLiveGenerateReplaySettingPanelUpdateSetting:(id)arg1;
- (void)anchorConnectMicModeSettingPanelDidCloseWithSelectedMode:(unsigned long long)arg1 paidMicSetting:(id)arg2;
- (void)onReportFansGroupOperationActionType:(long long)arg1;
- (void)onReportFansGroupNoticeActionType:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4 visibility:(long long)arg5;
- (void)onLiveStaterPromoteOperationReport:(long long)arg1 promoteActionType:(long long)arg2 reportData:(id)arg3;
- (void)onPromoteAddedReport:(long long)arg1 businessId:(id)arg2;
- (long long)getPromoteUserType;
- (void)onCustomizationPanelOpening:(id)arg1;
- (void)onCustomizationPanelClosed:(id)arg1;
- (void)onReportMusicSettingActionType:(long long)arg1 songIdList:(id)arg2;
- (void)anchorConnectMicModeSettingPanelReportWithExtraDict:(id)arg1 subElementType:(unsigned int)arg2;
- (void)onPlayTogetherClick;
- (void)operationPanel:(id)arg1 didCloseWithSelection:(unsigned long long)arg2;
- (void)quickReplyEditClick;
- (void)reportQuickReplyExpose;
- (void)quickReplyComplete:(id)arg1 showToast:(BOOL)arg2 hasContent:(BOOL)arg3;
- (void)showQuickReplySuccessToast:(BOOL)arg1;
- (id)quickReplyView;
- (void)onLiveNewStartViewClickClose;
- (void)onLiveNewStartViewClickMockController;
- (void)onLiveNewStartViewClickStartLive;
- (void)onLiveNewStartViewClickControlButton:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)operationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLiveTask:(id)arg1 trtcLocalVideoSizeChanged:(CGSize)arg2;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (id)liveTask;
- (void)delayShowLoading;
- (void)showLoading;
- (id)agreementLogic;
- (id)agreementView;
- (BOOL)isCameraEnabled;
- (void)jumpFromStarterPageWith:(id)arg1;
- (CGRect)getCurrentMainVideoViewFrame;
- (unsigned long long)currentSupportedOrientationMask;
- (unsigned long long)getSupportedOrientationMaskForSecondaryVC;
- (BOOL)isVideoMode;
- (BOOL)isGameMode;
- (BOOL)isAudioMode;
- (BOOL)isKTVMode;
- (BOOL)enableSettingBGMusic;
- (BOOL)canCreateLiveSongs;
- (id)getMusicButtonRedDotPath;
- (BOOL)shoppingCategoryNeedPoi;
- (double)getPanelLeftMargin;
- (double)getPanelRightMargin;
- (double)getLandscapeEdgePadding;
- (double)getPanelLandscapeEdgePadding;
- (void)updateGestureEnablementWithSelectedLiveTag:(id)arg1;
- (void)configStartVMCallback;
- (id)getRedDotShowInfoAtPath:(id)arg1;
- (void)markExposeForAllSheetItem;
- (void)updateStartExtraInfo:(id)arg1;
- (void)reportWithPoi:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)startExtraInfo;
- (void)setStartExtraInfo:(id)arg1;
- (id)countdownTipsView;
- (void)setCountdownTipsView:(id)arg1;
- (id)portraitCallbacks;
- (void)setPortraitCallbacks:(id)arg1;
- (id)landscapeCallbacks;
- (void)setLandscapeCallbacks:(id)arg1;
- (void)setMoreToolItem:(id)arg1;
- (BOOL)hasShowVideo;
- (void)setHasShowVideo:(BOOL)arg1;
- (void)setBeautyItem:(id)arg1;
- (void)setSwitchCameraItem:(id)arg1;
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
- (id)stickerEditingActivatorContainerView;
- (void)setStickerEditingActivatorContainerView:(id)arg1;
- (id)audioRoomInfoView;
- (void)setAudioRoomInfoView:(id)arg1;
- (void)setMusicItem:(id)arg1;
- (void)setSongItem:(id)arg1;
- (void)setPrizeItem:(id)arg1;
- (BOOL)showSearchMoreGames;
- (void)setShowSearchMoreGames:(BOOL)arg1;
- (void)setPlayTogetherButton:(id)arg1;
- (void)setGameAngleButton:(id)arg1;
- (BOOL)useFinderHeadAsCoverImage;
- (void)setUseFinderHeadAsCoverImage:(BOOL)arg1;
- (BOOL)isCoverImageUpdated;
- (void)setIsCoverImageUpdated:(BOOL)arg1;
- (BOOL)topicCompleteInit;
- (void)setTopicCompleteInit:(BOOL)arg1;
- (BOOL)isAssociateNotice;
- (void)setIsAssociateNotice:(BOOL)arg1;
- (int)noticeTriggerType;
- (void)setNoticeTriggerType:(int)arg1;
- (id)modReminderView;
- (void)setModReminderView:(id)arg1;
- (id)showReminderView;
- (void)setShowReminderView:(id)arg1;
- (void)setMoreFunctionManager:(id)arg1;
- (id)visibilitySelectButton;
- (void)setVisibilitySelectButton:(id)arg1;
- (id)themeGuideView;
- (void)setThemeGuideView:(id)arg1;
- (void)setCreateLiveGuidePanel:(id)arg1;
- (void)setCreateLiveGuideLogic:(id)arg1;
- (id)warnPageNeedShowAfterCountDownTimeout;
- (void)setWarnPageNeedShowAfterCountDownTimeout:(id)arg1;
- (id)weakNetTipView;
- (void)setWeakNetTipView:(id)arg1;
- (id)uploadPacket;
- (void)setUploadPacket:(id)arg1;
- (void)setTestSpeedManager:(id)arg1;
- (void)setQuickReplyView:(id)arg1;
- (BOOL)hasAppear;
- (void)setHasAppear:(BOOL)arg1;
- (BOOL)hasCheckTheme;
- (void)setHasCheckTheme:(BOOL)arg1;
- (BOOL)hasFetchedLBS;
- (void)setHasFetchedLBS:(BOOL)arg1;
- (BOOL)hasSelectPOI;
- (void)setHasSelectPOI:(BOOL)arg1;
- (BOOL)hasStartLive;
- (void)setHasStartLive:(BOOL)arg1;
- (BOOL)needShowWeakNetTip;
- (void)setNeedShowWeakNetTip:(BOOL)arg1;
- (BOOL)testtingSpeed;
- (void)setTesttingSpeed:(BOOL)arg1;
- (BOOL)shouldStartLiveAfterSelectTag;
- (void)setShouldStartLiveAfterSelectTag:(BOOL)arg1;
- (BOOL)isRecordPermissionCheckOK;
- (void)setIsRecordPermissionCheckOK:(BOOL)arg1;
- (BOOL)isInRecordPermissionCheckProcess;
- (void)setIsInRecordPermissionCheckProcess:(BOOL)arg1;
- (unsigned int)finderLocationSource;
- (void)setFinderLocationSource:(unsigned int)arg1;
- (unsigned long long)geoTag;
- (void)setGeoTag:(unsigned long long)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (unsigned int)curCoinValue;
- (void)setCurCoinValue:(unsigned int)arg1;
- (BOOL)jumpToSticker;
- (void)setJumpToSticker:(BOOL)arg1;
- (id)starterVM;
- (void)setStarterVM:(id)arg1;
- (void)setAgreementLogic:(id)arg1;
- (id)replayKitManager;
- (void)setReplayKitManager:(id)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void)setAgreementView:(id)arg1;
- (void)setMoreActionSheet:(id)arg1;
- (id)musicSettingOprationPanel;
- (void)setMusicSettingOprationPanel:(id)arg1;
- (id)songSettingOperationPanel;
- (void)setSongSettingOperationPanel:(id)arg1;
- (id)chooseGamePanelView;
- (void)setChooseGamePanelView:(id)arg1;
- (BOOL)isAgreementChecked;
- (void)setIsAgreementChecked:(BOOL)arg1;
- (BOOL)uploadCoverImageRequired;
- (void)setUploadCoverImageRequired:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)anchorLogReporter;
- (void)setAnchorLogReporter:(id)arg1;
- (void).cxx_destruct;
@end
