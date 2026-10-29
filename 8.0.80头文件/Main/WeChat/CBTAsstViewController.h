@interface CBTAsstViewController : ChatBotBaseVoIPViewController <IChatBotAvatarUpdateExt, CBTAsstTalkingViewDelegate, CBTAsstMoreViewControllerDelegate, CBTAsstNotionViewControllerDelegate, ICBTAsstBoardDataControllerExt, MMEdgeTipsViewDelegate, MMPageSheetGestureRecognizerDelegate>
{
    BOOL _isHalfScreenMode; // +0x70
    BOOL _isXiaoWeiPresenting; // +0x71
    BOOL _skipMultimodalCardDisplay; // +0x72
    BOOL _textInputMergedInMultimodal; // +0x73
    BOOL _hasSentHalfScreenBypass; // +0x74
    BOOL _pendingReuseLegalGateOnAppear; // +0x75
    BOOL _chatHistoryAuthRequired; // +0x76
    BOOL _halfScreenLocalTTSMuted; // +0x77
    BOOL _showTempChatTips; // +0x78
    BOOL _currentSideInfoSeqReset; // +0x79
    BOOL _resendSeqContinuationOverride; // +0x7a
    BOOL _pendingSendAsNormalTextMessage; // +0x7b
    BOOL _isHalfScreenMultiSelectMode; // +0x7c
    BOOL _scanLogReuse; // +0x7d
    BOOL _isClickClose; // +0x7e
    BOOL _isPoppedByCallEnd; // +0x7f
    BOOL _legalAlertHandled; // +0x80
    BOOL _hasFetchedRecallPushContent; // +0x81
    BOOL _isFirstReddotFetchInFlight; // +0x82
    BOOL _hasTriggeredBannerLocateBeforePresent; // +0x83
    BOOL _legalAlertPresentingByMe; // +0x84
    BOOL _halfScreenEdgeSlideFailureRelationInstalled; // +0x85
    BOOL _halfScreenHasDismissed; // +0x86
    BOOL _privacyNoticeBubbleInsertionPending; // +0x87
    BOOL _newMsgSeparatorInsertedThisVC; // +0x88
    int _multimodalType; // +0x8c
    int _enterSceneType; // +0x90
    unsigned int _pendingReceivedFileAppType; // +0x94
    unsigned int _pendingReceivedFileType; // +0x98
    unsigned int _scene; // +0x9c
    int _pendingNewMsgSeparatorCount; // +0xa0
    double _halfScreenContentHeight; // +0xa8
    NSLayoutConstraint * _halfScreenHeightConstraint; // +0xb0
    NSString * _multimodalXml; // +0xb8
    NSData * _multimodalWrapData; // +0xc0
    NSArray * _imagePaths; // +0xc8
    unsigned long long _sourceType; // +0xd0
    NSString * _sourceId; // +0xd8
    NSString * _pendingSendMsgContent; // +0xe0
    NSString * _currentSideInfoGroupId; // +0xe8
    NSString * _pendingSendImagePath; // +0xf0
    NSString * _pendingFilePath; // +0xf8
    NSString * _pendingFileName; // +0x100
    NSString * _pendingReceivedFileId; // +0x108
    NSString * _pendingReceivedFileAesKey; // +0x110
    unsigned long long _pendingReceivedFileSize; // +0x118
    NSString * _pendingReceivedFileMd5; // +0x120
    NSString * _pendingTimelineFeedId; // +0x128
    NSString * _contextFeedId; // +0x130
    NSString * _pendingForwardXml; // +0x138
    NSString * _pendingForwardGroupId; // +0x140
    unsigned long long _pendingForwardContextWrapId; // +0x148
    unsigned long long _pendingForwardWrapLen; // +0x150
    long long _askXiaoWeiDisplayType; // +0x158
    MMPageSheetAdapter * _pageSheetAdapter; // +0x160
    id /* block */ _bannerLocateCompletion; // +0x168
    NSString * _askXiaoweiSrcInfo; // +0x170
    NSString * _scanReportScene; // +0x178
    UserLocationInfo * _askXiaoweiUserLocation; // +0x180
    long long _currentTaskSessionIndex; // +0x188
    NSString * _currentTaskSessionId; // +0x190
    unsigned long long _currentEdgeTipsType; // +0x198
    NSMutableSet * _shownEdgeTipsKeys; // +0x1a0
    MMFlutterInstance * _settingsFlutterInstance; // +0x1a8
    MMFlutterInstance * _fullScreenLegalControlFlutterInstance; // +0x1b0
    CBTAsstLegalFullScreenViewController * _fullScreenLegalControlFlutterVC; // +0x1b8
    long long _halfScreenMultiSelectCount; // +0x1c0
    CBTAsstReportSession * _reportSession; // +0x1c8
    MMUIButton * _halfScreenTTSReadBtn; // +0x1d0
    UIView * _bannerLocateLoadingCover; // +0x1d8
    NSTimer * _bannerLocateCoverFallbackTimer; // +0x1e0
    UIView * _reddotLocateLoadingCover; // +0x1e8
    NSTimer * _reddotLocateCoverFallbackTimer; // +0x1f0
    CBTAsstReddotInsertManager * _reddotInsertManager; // +0x1f8
    NSDictionary * _pendingShortcutBarReportExtraParams; // +0x200
    NSArray * _pendingLocalShortcutItems; // +0x208
    unsigned long long _halfScreenPageInTimeMs; // +0x210
    unsigned long long _negativeScreenPageInTimeMs; // +0x218
    NSMutableArray * _privacyNoticeBubblePendingBlocks; // +0x220
    CBTAsstTitleContainerView * _halfScreenTitleContainerView; // +0x228
    MMEdgeTipsView * _reddotEdgeTipsView; // +0x230
    long long _newMsgSeparatorInsertMode; // +0x238
    CGRect _lastNotifiedHalfScreenFrame; // +0x240
}
+ (id)settingsProtocolArguments;
+ (id)_effectiveProtocolListJSON:(id)arg1;
- (id)initWithScene:(unsigned int)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupFullScreenLegalControlFlutterViewWithPassedBlock:(id /* block */)arg1;
- (void)bringFullScreenLegalControlToFrontIfNeeded;
- (void)teardownFullScreenLegalControlFlutterView;
- (void)setupAmoebaReport;
- (id)activeRecSessionID;
- (void)setAskXiaoweiSrcInfo:(id)arg1;
- (void)notifyHeadlessOpenMic;
- (void)notifyHeadlessCloseMicWithCanceled:(BOOL)arg1;
- (void)headlessInjectSubmittedQuestion:(id)arg1 matchKey:(id)arg2;
- (void)reportAmoebaPageInIfNeeded;
- (void)reportAmoebaPageOutIfNeeded;
- (void)cleanupAmoebaReportMgr;
- (void)warmUpSettingsFlutterInstance;
- (void)_preloadTaskCenterLiteApp;
- (void)sendPredefinedUserQuery:(id)arg1;
- (void)sendPredefinedUserQueryAndCloseSettings:(id)arg1;
- (void)openTaskCenterLiteApp;
- (void)fetchAuthorizedNoteIdsFromCGI;
- (id)createHalfScreenMultiSelectCancelButton;
- (void)updateHalfScreenPageSheetTitle:(id)arg1;
- (void)updateHalfScreenPageSheetLeftButton:(id)arg1;
- (void)updateHalfScreenPageSheetRightButton:(id)arg1;
- (void)updateHalfScreenPageSheetCloseEnabled:(BOOL)arg1;
- (void)refreshHalfScreenPageSheetHeaderLayout;
- (void)applyHalfScreenMultiSelectUIWithCount:(long long)arg1;
- (void)restoreHalfScreenDefaultUI;
- (void)_ensureHalfScreenTTSReadBtn;
- (BOOL)_halfScreenTTSReadEnabled;
- (void)_setupHalfScreenTTSReadBtnReporting;
- (void)reportHalfScreenTTSReadBtnExp;
- (BOOL)_isFinderHalfScreenLocalMute;
- (void)_refreshHalfScreenTTSReadBtnIcon;
- (void)_onHalfScreenTTSReadBtnClick;
- (void)onHalfScreenMultiSelectCancelTapped;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)updateAgentRuntimeInstanceVisible:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)halfScreenLocateToLocalId:(int)arg1;
- (void)halfScreenLocateToSvrId:(long long)arg1;
- (void)fullScreenLocateToSvrId:(long long)arg1;
- (void)addBannerLocateLoadingCover;
- (void)removeBannerLocateLoadingCover;
- (void)addReddotLocateLoadingCover;
- (void)removeReddotLocateLoadingCover;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)_onAppDidEnterBackground;
- (void)_onAppWillEnterForeground;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned int)getChatbotVoIPScene;
- (int)getOpenScene;
- (void)fetchRoomInfo;
- (id)genStartSessionParams;
- (void)startSession;
- (BOOL)needWelcomeEvent;
- (id)genAiCarryInfo;
- (id)sendMultimodalMessage;
- (id)sendMultimodalMessageAllowingSeqReset:(BOOL)arg1;
- (id)sendHalfScreenBypassMessage;
- (id)sendHalfScreenBypassMessageWithBypassInfo:(id)arg1;
- (id)sendHalfScreenBypassMessageWithBypassInfo:(id)arg1 textInput:(id)arg2;
- (void)resendContentOnReuse;
- (void)resendSearchContinueAskOnReuse;
- (void)sendPendingMsgContentIfNeededWithAiClientMsgid:(id)arg1;
- (void)sendPendingTextAsNormalMessage;
- (void)sendPendingFileIfNeeded;
- (void)sendPendingReceivedFileIfNeeded;
- (void)startReceivedFileCopyTransferWithViewModel:(id)arg1 fileId:(id)arg2 appType:(unsigned int)arg3 fileType:(unsigned int)arg4 fileSize:(unsigned long long)arg5 md5:(id)arg6 aiClientMsgid:(id)arg7;
- (void)persistUplinkFileIdWithViewModel:(id)arg1 aiClientMsgid:(id)arg2 oldFileId:(id)arg3 newFileId:(id)arg4 retryCount:(long long)arg5;
- (void)insertPrivacyNoticeBubbleForSource:(long long)arg1 completion:(id /* block */)arg2;
- (void)insertPrivacyNoticeBubbleIfNeeded;
- (void)insertPendingTimelineSendCardIfNeededWithAiClientMsgid:(id)arg1;
- (void)insertPendingForwardCardIfNeededWithAiClientMsgid:(id)arg1;
- (void)layoutTalkingView;
- (id)reddotFallbackIPForAnchor:(id)arg1 dataController:(id)arg2;
- (void)updateShowTempChatTips:(BOOL)arg1;
- (void)layoutBackground;
- (void)setupFakeSnapshot;
- (void)onTalkSucc;
- (void)sendHalfScreenBypassMessageIfNeeded;
- (void)sendPendingSendImageWithTextIfNeeded;
- (BOOL)isImageEditAskDeferredUploadScene;
- (void)sendImageEditAskWithDeferredCDNUpload;
- (void)sendImageEditAskWithDeferredCDNUploadAllowingSeqReset:(BOOL)arg1;
- (id)cbt_finderReportInfo;
- (void)insertMultimodalCardToBoardWithCompleteHandle:(id /* block */)arg1;
- (int)cardWrapTypeFromMultimodalType:(int)arg1;
- (void)close;
- (void)closeVCByCallEnd;
- (void)destroySession;
- (void)onStarBtnClick;
- (void)onHalfScreenMultiSelectEnter;
- (void)onHalfScreenMultiSelectExit;
- (void)onHalfScreenMultiSelectCountChanged:(long long)arg1;
- (void)onNotionBtnClick;
- (void)onTitleClick;
- (double)getContentViewLayoutTop;
- (void)viewDidLayoutSubviews;
- (unsigned int)getCurrentVCVoIPScene;
- (id)edgeTipsKeySuffixForType:(unsigned long long)arg1;
- (void)onEdgeTipsViewClick;
- (void)setDismissGestureEnabled:(BOOL)arg1;
- (void)onBoardEnterMultiSelectMode;
- (void)onBoardExitMultiSelectMode;
- (void)onBoardEnterTextSelectState;
- (void)onBoardExitTextSelectState;
- (void)updateHalfScreenDragToCloseState;
- (void)onHistoryNoMoreChanged:(BOOL)arg1;
- (void)onTaskSessionStart:(id)arg1 startIndex:(long long)arg2;
- (void)onTaskSessionCompleted:(id)arg1 startIndex:(long long)arg2;
- (void)onTaskSessionCancel:(id)arg1 startIndex:(long long)arg2;
- (void)onTaskSessionCallUser:(id)arg1 startIndex:(long long)arg2;
- (void)onSubAgentJoinedWithName:(id)arg1 headImageUrl:(id)arg2;
- (void)onSubAgentRemovedWithName:(id)arg1;
- (void)onUpdateAvatar:(id)arg1;
- (void)moreViewController:(id)arg1 didRequestAdjustWithMemoryId:(id)arg2 memoryContent:(id)arg3 userPostfix:(id)arg4;
- (void)fetchReddotReminderCardsOrFallbackToRecallPush;
- (void)locateForReusedVCIfNeededWithOffscreenQueryCreateTime:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (BOOL)displayReddotReminderCards:(id)arg1;
- (void)onAsstVoIPReminderInserted:(id)arg1;
- (BOOL)displayReddotReminderCardsInternal:(id)arg1;
- (void)tryNotifyReddotDisplayedForImplicitUplink;
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (void)tryFetchRecallPushContentWithLegalAlertCheck;
- (void)runWithLegalAlertCheck:(id /* block */)arg1;
- (void)fetchRecallPushContent;
- (void)_displayRecallPushCards:(id)arg1;
- (void)sendNotionChatQuery:(id)arg1 notionId:(id)arg2;
- (void)notionViewController:(id)arg1 didRequestChatWithNotionId:(id)arg2 notionContent:(id)arg3 chatPrefix:(id)arg4 chatPostfix:(id)arg5;
- (id)getDragToCloseScrollView;
- (void)updateShortcutBarReportExtraParams:(id)arg1;
- (void)updateLocalShortcutItems:(id)arg1;
- (void)updateEnterSceneType:(int)arg1;
- (void)setupHalfScreenEdgeSlideFailureRelationIfNeeded;
- (void)showReddotEdgeTipsWithTitle:(id)arg1;
- (void)hideReddotEdgeTips;
- (long long)newMessageCountAfterSeparator:(id)arg1;
- (void)checkAndUpdateEdgeTipsVisibilityWithInsertedIP:(id)arg1 reason:(id)arg2;
- (void)onClickEdgeTipsView:(id)arg1;
- (void)onNewMessageDidInsertAtIndexPath:(id)arg1 viewModel:(id)arg2;
- (void)onScrollViewDidScroll:(id)arg1;
- (BOOL)isHalfScreenMode;
- (void)setIsHalfScreenMode:(BOOL)arg1;
- (BOOL)isXiaoWeiPresenting;
- (void)setIsXiaoWeiPresenting:(BOOL)arg1;
- (double)halfScreenContentHeight;
- (void)setHalfScreenContentHeight:(double)arg1;
- (id)halfScreenHeightConstraint;
- (void)setHalfScreenHeightConstraint:(id)arg1;
- (id)multimodalXml;
- (void)setMultimodalXml:(id)arg1;
- (BOOL)skipMultimodalCardDisplay;
- (void)setSkipMultimodalCardDisplay:(BOOL)arg1;
- (BOOL)textInputMergedInMultimodal;
- (void)setTextInputMergedInMultimodal:(BOOL)arg1;
- (int)multimodalType;
- (void)setMultimodalType:(int)arg1;
- (id)multimodalWrapData;
- (void)setMultimodalWrapData:(id)arg1;
- (id)imagePaths;
- (void)setImagePaths:(id)arg1;
- (BOOL)hasSentHalfScreenBypass;
- (void)setHasSentHalfScreenBypass:(BOOL)arg1;
- (BOOL)pendingReuseLegalGateOnAppear;
- (void)setPendingReuseLegalGateOnAppear:(BOOL)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (BOOL)chatHistoryAuthRequired;
- (void)setChatHistoryAuthRequired:(BOOL)arg1;
- (int)enterSceneType;
- (void)setEnterSceneType:(int)arg1;
- (BOOL)halfScreenLocalTTSMuted;
- (void)setHalfScreenLocalTTSMuted:(BOOL)arg1;
- (BOOL)showTempChatTips;
- (void)setShowTempChatTips:(BOOL)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (id)pendingSendMsgContent;
- (void)setPendingSendMsgContent:(id)arg1;
- (id)currentSideInfoGroupId;
- (void)setCurrentSideInfoGroupId:(id)arg1;
- (BOOL)currentSideInfoSeqReset;
- (void)setCurrentSideInfoSeqReset:(BOOL)arg1;
- (BOOL)resendSeqContinuationOverride;
- (void)setResendSeqContinuationOverride:(BOOL)arg1;
- (id)pendingSendImagePath;
- (void)setPendingSendImagePath:(id)arg1;
- (BOOL)pendingSendAsNormalTextMessage;
- (void)setPendingSendAsNormalTextMessage:(BOOL)arg1;
- (id)pendingFilePath;
- (void)setPendingFilePath:(id)arg1;
- (id)pendingFileName;
- (void)setPendingFileName:(id)arg1;
- (id)pendingReceivedFileId;
- (void)setPendingReceivedFileId:(id)arg1;
- (id)pendingReceivedFileAesKey;
- (void)setPendingReceivedFileAesKey:(id)arg1;
- (unsigned int)pendingReceivedFileAppType;
- (void)setPendingReceivedFileAppType:(unsigned int)arg1;
- (unsigned long long)pendingReceivedFileSize;
- (void)setPendingReceivedFileSize:(unsigned long long)arg1;
- (id)pendingReceivedFileMd5;
- (void)setPendingReceivedFileMd5:(id)arg1;
- (unsigned int)pendingReceivedFileType;
- (void)setPendingReceivedFileType:(unsigned int)arg1;
- (id)pendingTimelineFeedId;
- (void)setPendingTimelineFeedId:(id)arg1;
- (id)contextFeedId;
- (void)setContextFeedId:(id)arg1;
- (id)pendingForwardXml;
- (void)setPendingForwardXml:(id)arg1;
- (id)pendingForwardGroupId;
- (void)setPendingForwardGroupId:(id)arg1;
- (unsigned long long)pendingForwardContextWrapId;
- (void)setPendingForwardContextWrapId:(unsigned long long)arg1;
- (unsigned long long)pendingForwardWrapLen;
- (void)setPendingForwardWrapLen:(unsigned long long)arg1;
- (long long)askXiaoWeiDisplayType;
- (void)setAskXiaoWeiDisplayType:(long long)arg1;
- (BOOL)isHalfScreenMultiSelectMode;
- (void)setIsHalfScreenMultiSelectMode:(BOOL)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id /* block */)bannerLocateCompletion;
- (void)setBannerLocateCompletion:(id /* block */)arg1;
- (id)askXiaoweiSrcInfo;
- (BOOL)scanLogReuse;
- (void)setScanLogReuse:(BOOL)arg1;
- (id)scanReportScene;
- (void)setScanReportScene:(id)arg1;
- (id)askXiaoweiUserLocation;
- (void)setAskXiaoweiUserLocation:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (long long)currentTaskSessionIndex;
- (void)setCurrentTaskSessionIndex:(long long)arg1;
- (id)currentTaskSessionId;
- (void)setCurrentTaskSessionId:(id)arg1;
- (unsigned long long)currentEdgeTipsType;
- (void)setCurrentEdgeTipsType:(unsigned long long)arg1;
- (id)shownEdgeTipsKeys;
- (void)setShownEdgeTipsKeys:(id)arg1;
- (id)settingsFlutterInstance;
- (void)setSettingsFlutterInstance:(id)arg1;
- (id)fullScreenLegalControlFlutterInstance;
- (void)setFullScreenLegalControlFlutterInstance:(id)arg1;
- (id)fullScreenLegalControlFlutterVC;
- (void)setFullScreenLegalControlFlutterVC:(id)arg1;
- (BOOL)isClickClose;
- (void)setIsClickClose:(BOOL)arg1;
- (long long)halfScreenMultiSelectCount;
- (void)setHalfScreenMultiSelectCount:(long long)arg1;
- (BOOL)isPoppedByCallEnd;
- (void)setIsPoppedByCallEnd:(BOOL)arg1;
- (id)reportSession;
- (void)setReportSession:(id)arg1;
- (id)halfScreenTTSReadBtn;
- (void)setHalfScreenTTSReadBtn:(id)arg1;
- (CGRect)lastNotifiedHalfScreenFrame;
- (void)setLastNotifiedHalfScreenFrame:(CGRect)arg1;
- (BOOL)legalAlertHandled;
- (void)setLegalAlertHandled:(BOOL)arg1;
- (BOOL)hasFetchedRecallPushContent;
- (void)setHasFetchedRecallPushContent:(BOOL)arg1;
- (BOOL)isFirstReddotFetchInFlight;
- (void)setIsFirstReddotFetchInFlight:(BOOL)arg1;
- (BOOL)hasTriggeredBannerLocateBeforePresent;
- (void)setHasTriggeredBannerLocateBeforePresent:(BOOL)arg1;
- (id)bannerLocateLoadingCover;
- (void)setBannerLocateLoadingCover:(id)arg1;
- (id)bannerLocateCoverFallbackTimer;
- (void)setBannerLocateCoverFallbackTimer:(id)arg1;
- (id)reddotLocateLoadingCover;
- (void)setReddotLocateLoadingCover:(id)arg1;
- (id)reddotLocateCoverFallbackTimer;
- (void)setReddotLocateCoverFallbackTimer:(id)arg1;
- (id)reddotInsertManager;
- (void)setReddotInsertManager:(id)arg1;
- (BOOL)legalAlertPresentingByMe;
- (void)setLegalAlertPresentingByMe:(BOOL)arg1;
- (id)pendingShortcutBarReportExtraParams;
- (void)setPendingShortcutBarReportExtraParams:(id)arg1;
- (id)pendingLocalShortcutItems;
- (void)setPendingLocalShortcutItems:(id)arg1;
- (BOOL)halfScreenEdgeSlideFailureRelationInstalled;
- (void)setHalfScreenEdgeSlideFailureRelationInstalled:(BOOL)arg1;
- (BOOL)halfScreenHasDismissed;
- (void)setHalfScreenHasDismissed:(BOOL)arg1;
- (unsigned long long)halfScreenPageInTimeMs;
- (void)setHalfScreenPageInTimeMs:(unsigned long long)arg1;
- (unsigned long long)negativeScreenPageInTimeMs;
- (void)setNegativeScreenPageInTimeMs:(unsigned long long)arg1;
- (BOOL)privacyNoticeBubbleInsertionPending;
- (void)setPrivacyNoticeBubbleInsertionPending:(BOOL)arg1;
- (id)privacyNoticeBubblePendingBlocks;
- (void)setPrivacyNoticeBubblePendingBlocks:(id)arg1;
- (id)halfScreenTitleContainerView;
- (void)setHalfScreenTitleContainerView:(id)arg1;
- (id)reddotEdgeTipsView;
- (void)setReddotEdgeTipsView:(id)arg1;
- (long long)newMsgSeparatorInsertMode;
- (void)setNewMsgSeparatorInsertMode:(long long)arg1;
- (BOOL)newMsgSeparatorInsertedThisVC;
- (void)setNewMsgSeparatorInsertedThisVC:(BOOL)arg1;
- (int)pendingNewMsgSeparatorCount;
- (void)setPendingNewMsgSeparatorCount:(int)arg1;
- (void).cxx_destruct;
@end
