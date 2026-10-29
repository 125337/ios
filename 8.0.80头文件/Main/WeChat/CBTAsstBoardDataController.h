@interface CBTAsstBoardDataController : NSObject <CBTAsstMessageReturnTipControllerDelegate, UITableViewDataSource, UITableViewDelegate, CBTAsstBoardBaseCellViewDelegate, IChatBotVoIPSessionDelegate, ICBTAsstExt, CBTAsstBoardRecQuestionsViewModelDelegate, IChatBotExt, CBTAsstBoardBaseViewModelDelegate, MMRichTextSelectEventDelegate, CBTAsstBoardMultiSelectManagerDelegate, IMMFontMgrExt, WAAgentCardRecycleManagerDelegate>
{
    BOOL _isTTSPlaying; // +0x8
    BOOL _isMicrophoneOpen; // +0x9
    BOOL _skipFirstGreetingBubble; // +0xa
    BOOL _isHalfScreenMode; // +0xb
    BOOL _suspendOffscreenCount; // +0xc
    BOOL _offscreenAppInBackground; // +0xd
    BOOL _isLoadingHistory; // +0xe
    BOOL _noMoreHistory; // +0xf
    BOOL _isInsertingHistoryBatch; // +0x10
    BOOL _needsReloadAfterHistoryInsert; // +0x11
    BOOL _hasPendingHistoryInsertTask; // +0x12
    BOOL _hasUserSentContentFlag; // +0x13
    BOOL _offscreenDetached; // +0x14
    BOOL _hasUserSentMsgPendingShortcutDrop; // +0x15
    BOOL _suppressNextUserSendShortcutEffect; // +0x16
    BOOL _isOnExecutingTask; // +0x17
    BOOL _isWaitingStreamLayout; // +0x18
    BOOL _isTableViewInScrollAnimation; // +0x19
    BOOL _messageNavigationInProgress; // +0x1a
    BOOL _returningToLatestForBottomPanelInteraction; // +0x1b
    BOOL _isFirstUserAsrAfterReleaseVoiceInputBtn; // +0x1c
    BOOL _isCurVoiceInputUploadBeCanceled; // +0x1d
    BOOL _shouldBlockUserASR; // +0x1e
    BOOL _pendingHeadlessASRPaint; // +0x1f
    BOOL _accountBlockedSuppressUserSend; // +0x20
    BOOL _shouldIgnoreFirstTapOnInitialSelectedItem; // +0x21
    BOOL _shouldSkipBottomBlankHeightCorrection; // +0x22
    BOOL _isTransitioningMultiSelectMode; // +0x23
    BOOL _pendingExitMultiSelect; // +0x24
    BOOL _reportNextQAIsActiveRec; // +0x25
    BOOL _reportNextQAIsFromFq; // +0x26
    BOOL _reportNextQAIsFromShortcuts; // +0x27
    BOOL _reportNextQAIsFromEasterEgg; // +0x28
    BOOL _reportIsMultimodalQuery; // +0x29
    BOOL _hasPendingComboUserTurn; // +0x2a
    BOOL _isLastInputVoice; // +0x2b
    BOOL _hasMarkedHapticForCurrentUserSend; // +0x2c
    BOOL _privacyNoticeAgreementTriggered; // +0x2d
    BOOL _agentRuntimeVisibleState; // +0x2e
    BOOL _isForwardOnlyMode; // +0x2f
    long long _askXiaoWeiDisplayType; // +0x30
    ChatBotVoIPSession * _voipSession; // +0x38
    long long _reportEnterScene; // +0x40
    id <CBTAsstBoardDataControllerDelegate> _delegate; // +0x48
    CBTAsstBoardInsetAdjuster * _insetAdjuster; // +0x50
    WAAgentCardRecycleManager * _recycleManager; // +0x58
    double _reddotLocateProtectUntil; // +0x60
    NSString * _recallWelcomeId; // +0x68
    CBTRichTextCoverView * _richTextCoverView; // +0x70
    unsigned long long _emptyPageRetryCount; // +0x78
    UserCardPageContext * _historyUpPageContext; // +0x80
    UserCardPageContext * _historyDownPageContext; // +0x88
    CBTAsstNewerHistoryPagingContext * _newerHistoryPagingContext; // +0x90
    UIView * _historyTopLoadingView; // +0x98
    UIView * _historyTopLoadingHeaderView; // +0xa0
    UIView * _historyBottomLoadingFooterView; // +0xa8
    NSString * _currentTTSPlayingTraceMsgid; // +0xb0
    NSString * _ttsPlayingVoiceId; // +0xb8
    unsigned long long _ttsPlayStartTsMs; // +0xc0
    NSString * _pendingTTSEndReason; // +0xc8
    NSHashTable * _extDelegates; // +0xd0
    UITableView * _tableView; // +0xd8
    NSMutableArray * _viewModelArr; // +0xe0
    NSMutableArray * _taskQueue; // +0xe8
    NSMutableArray * _topTaskQueue; // +0xf0
    NSMutableDictionary * _pendingFileUploadResultByPath; // +0xf8
    CBTAsstBoardTask * _curTask; // +0x100
    double _expectedScrollTargetY; // +0x108
    long long _scrollRetryCount; // +0x110
    CBTAsstMessageReturnTipController * _messageReturnTipController; // +0x118
    unsigned long long _messageNavigationScrollGeneration; // +0x120
    long long _historyPagingDirection; // +0x128
    CBTAsstHistoryNavigationContext * _historyNavigationContext; // +0x130
    CBTAsstBoardLiveWindowState * _liveWindowState; // +0x138
    CBTAsstBoardLiveWindowState * _returnWindowState; // +0x140
    CBTAsstBoardThinkingViewModel * _preThinkingVM; // +0x148
    CBTAsstBoardStreamTextViewModel * _curActiveUserAsrStreamTextVM; // +0x150
    NSTimer * _asrLoadingTimeoutTimer; // +0x158
    NSMutableDictionary * _activeAnswerStreamTextVMDic; // +0x160
    NSMutableSet * _bStopedStreamTextIDSet; // +0x168
    NSMutableSet * _discardedTraceMsgIdSet; // +0x170
    NSMutableSet * _interruptedWeAppTraceMsgIdSet; // +0x178
    NSMutableSet * _closedWeAppProcessIdentitySet; // +0x180
    NSMutableDictionary * _pendingWeAppProcessFrames; // +0x188
    NSString * _weAppProcessVoipSessionID; // +0x190
    NSMutableDictionary * _activeThinkingTextVMDic; // +0x198
    CBTAsstBoardBlankViewModel * _bottomBlankVM; // +0x1a0
    double _lastFontScale; // +0x1a8
    double _lastStreamCompletedTimestamp; // +0x1b0
    CBTAsstBoardWeAppFoldableProcessViewModel * _curWeAppFoldableProcessVM; // +0x1b8
    NSMutableDictionary * _taskSessionInfoMap; // +0x1c0
    NSMutableDictionary * _pendingWeAppViewModels; // +0x1c8
    NSMutableSet * _insertedTextSessionIds; // +0x1d0
    CBTAsstBoardMultiSelectManager * _multiSelectMgr; // +0x1d8
    CBTAsstBoardForwardManager * _forwardMgr; // +0x1e0
    CBTAsstBoardStreamTextCellView * _currentCoverViewCell; // +0x1e8
    CBTAsstBoardBaseViewModel * _pendingFeedbackViewModel; // +0x1f0
    NSString * _lastMsgTraceID; // +0x1f8
    NSMutableDictionary * _answerRefInfoDic; // +0x200
    NSMutableDictionary * _traceToAnswerKeyMap; // +0x208
    NSMutableSet * _traceMsgidHasFQ; // +0x210
    NSString * _reportNextQAWelcomeId; // +0x218
    long long _reportCurrentTurnSeq; // +0x220
    NSMutableArray * _currentTurnAttachmentInfoArray; // +0x228
    CBTCoopSubagentManager * _roomSubagentManager; // +0x230
    CBTCoopMagicBrushChannel * _magicBrushChannel; // +0x238
    unsigned long long _lastVoiceInputReleaseTimestampMs; // +0x240
    unsigned long long _lastTextSendCompleteTimestampMs; // +0x248
    unsigned long long _firstTextOutputTimestampMs; // +0x250
    unsigned long long _lastQueryDisplayTs; // +0x258
    unsigned long long _lastAnswerCompletedTs; // +0x260
    CBTAsstBoardResponseHistory * _pendingResponseHistory; // +0x268
    long long _retryInsertIndex; // +0x270
    NSString * _currentAppTraceId; // +0x278
    NSMutableDictionary * _responseHistoryByAppTraceId; // +0x280
    NSMutableDictionary * _pendingStorageInfoMap; // +0x288
    NSMutableDictionary * _heightCacheWrittenMap; // +0x290
    long long _privacyNoticeAgreementScene; // +0x298
    CBTAsstBoardStreamTextViewModel * _pendingAskXiaoWeiAnchorViewModel; // +0x2a0
    NSDictionary * _reportNextQALiteAppOrigin; // +0x2a8
    NSMutableDictionary * _viewStateRegistrations; // +0x2b0
    NSMutableArray * _viewStateViewModelIdList; // +0x2b8
    NSLock * _viewStateLock; // +0x2c0
    long long _viewStateNextId; // +0x2c8
}
+ (BOOL)hasOffscreenRecord;
+ (void)clearOffscreenRecord;
+ (id)feedIdFromShareTimeLineXml:(id)arg1;
- (id)registerViewModel:(id)arg1 source:(long long)arg2;
- (void)deactivateAllActiveInteractiveViews;
- (void)postStateChangedNotification:(id)arg1 state:(long long)arg2 interactionType:(long long)arg3;
- (id)createInteractiveCardViewModel:(id)arg1;
- (void)applyTaskCenterContextFromCardData:(id)arg1 toViewModel:(id)arg2;
- (id)createSingleContactBadgeViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createSingleContactPickerViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createSendMsgConfirmViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createOpenChatPickerViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createContactVoipPickerViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createSingleGroupPickerViewModel:(id)arg1 cardWrap:(id)arg2;
- (void)handleInteractiveCardEventWithCardData:(id)arg1 actionKey:(id)arg2 viewModel:(id)arg3;
- (void)handleInteractiveCardEventWithCardData:(id)arg1 actionKey:(id)arg2 viewModel:(id)arg3 userInputForm:(id)arg4 extraSaveInfo:(id)arg5;
- (void)dispatchPickerActionForEventListener:(id)arg1 pickerAction:(id)arg2 cardData:(id)arg3 actionKey:(id)arg4 viewModel:(id)arg5;
- (void)reportInteractiveCardEventWithCardData:(id)arg1 actionKey:(id)arg2 viewModel:(id)arg3 userInputForm:(id)arg4;
- (void)restoreInteractiveCardViewModelAfterPickerCancel:(id)arg1;
- (id)_tailTextFromTails:(id)arg1 forActionKey:(id)arg2;
- (void)_showTailHintOnConfirmCard:(id)arg1 hintText:(id)arg2;
- (void)_showTailHintOnTimedSendMsgConfirm:(id)arg1 hintText:(id)arg2;
- (void)_replaceConfirmCardWithGrayHint:(id)arg1 hintText:(id)arg2;
- (id)_appendAddressDescriptionToTail:(id)arg1 address:(id)arg2;
- (void)persistInteractiveCardStateForViewModel:(id)arg1 actionKey:(id)arg2;
- (void)persistInteractiveCardStateForViewModel:(id)arg1 actionKey:(id)arg2 extraSaveInfo:(id)arg3;
- (void)persistInteractiveCardStateForViewModel:(id)arg1 actionKey:(id)arg2 isClicked:(BOOL)arg3 selectedUsername:(id)arg4 selectedOptionValue:(id)arg5 extraSaveInfo:(id)arg6;
- (void)reportInteractiveCardActionWithCardId:(id)arg1 cardName:(id)arg2 actionIndexList:(id)arg3;
- (void)reportInteractiveCardActionWithCardId:(id)arg1 cardName:(id)arg2 actionIndexList:(id)arg3 userInputForm:(id)arg4;
- (id)createTextWithButtonViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createNoteViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createLocationAuthViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createConfirmCardViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)createTimedSendMsgConfirmViewModel:(id)arg1 cardWrap:(id)arg2;
- (id)cbt_pickerLinkViewModels;
- (void)registerPickerLinkViewModel:(id)arg1;
- (void)deactivateAllPickerLinks;
- (BOOL)offscreenGuardHalfScreen;
- (void)offscreenMarkTurnStartedWithUserVM:(id)arg1;
- (void)offscreenMarkTurnStartedForRetryWithQueryCreateTime:(unsigned long long)arg1;
- (void)offscreenBindTurnTraceMsgid:(id)arg1;
- (void)offscreenMarkTurnCompletedForTraceMsgid:(id)arg1;
- (void)offscreenCountStreamTextCompleted:(id)arg1;
- (void)offscreenCountCardWrapWithViewModel:(id)arg1;
- (void)startOffscreenTracking;
- (void)stopOffscreenTracking;
- (void)consumeOffscreenReddots;
- (BOOL)isOffscreenTrackingActive;
- (int)offscreenNewMsgCount;
- (unsigned long long)offscreenQueryCreateTime;
- (id)indexPathForFirstUserVM;
- (id)indexPathForFirstNewMsgVMWithCount:(int)arg1;
- (long long)queryRowNearTimestamp:(unsigned long long)arg1;
- (id)indexPathForQueryVMNearTimestamp:(unsigned long long)arg1;
- (id)indexPathForFirstNewMsgNearTimestamp:(unsigned long long)arg1;
- (id)indexPathForLastNonAuxiliaryVM;
- (id)indexPathForLocalId:(int)arg1;
- (void)offscreenScrollToIndexPath:(id)arg1;
- (void)offscreenLocateIndexPath:(id)arg1 delta:(double)arg2;
- (void)offscreenApplyScrollForIndexPath:(id)arg1 tableView:(id)arg2 delta:(double)arg3;
- (id)bannerLocateIndexPathForLocalId:(int)arg1;
- (id)bannerLocateIndexPathForSvrId:(long long)arg1;
- (void)bannerLocateScrollToIndexPath:(id)arg1;
- (void)bannerLocateApplyScrollForIndexPath:(id)arg1 tableView:(id)arg2 delta:(double)arg3;
- (void)offscreenClearAllState;
- (void)tryRecordReddotLocateAnchor:(unsigned long long)arg1 source:(unsigned long long)arg2 localId:(int)arg3 answerId:(long long)arg4;
- (id)readReddotLocateAnchor;
- (void)clearReddotLocateAnchor;
- (void)offscreenInjectReddotWithViewModel:(id)arg1;
- (id)_offscreenNotificationBodyForViewModel:(id)arg1;
- (void)offscreenSendLocalNotificationWithViewModel:(id)arg1;
- (id)indexPathForAnswerId:(long long)arg1;
- (void)insertNewMsgSeparatorIfNeededAtRow:(long long)arg1;
- (void)removeNewMsgSeparatorIfNeeded;
- (id)indexPathForNewMsgSeparator;
- (id)navigationLoadedViewModelBySvrId:(long long)arg1;
- (BOOL)isMessageVisibleWithSvrId:(long long)arg1;
- (void)highlightNavigationViewModelIfVisible:(id)arg1;
- (void)beginMessageNavigation;
- (void)finishMessageNavigation;
- (void)showNavigationNotFoundToastWithText:(id)arg1;
- (void)showReturnTipForAnchorSvrId:(long long)arg1 title:(id)arg2;
- (void)scrollToLoadedNavigationViewModel:(id)arg1 returnAnchorSvrId:(long long)arg2 returnTipTitle:(id)arg3 notFoundToastText:(id)arg4 shouldHighlight:(BOOL)arg5 completion:(id /* block */)arg6;
- (void)commitHistoryNavigationWithReturnAnchorSvrId:(long long)arg1 returnTipTitle:(id)arg2 notFoundToastText:(id)arg3 shouldHighlight:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)navigateToHistoryMessageWithSvrId:(long long)arg1 returnAnchorSvrId:(long long)arg2 returnTipTitle:(id)arg3 notFoundToastText:(id)arg4 referMsg:(id)arg5 shouldHighlight:(BOOL)arg6 completion:(id /* block */)arg7;
- (void)messageReturnTipController:(id)arg1 didSelectAnchorMessageWithSvrId:(long long)arg2;
- (void)navigateToMessageWithSvrId:(long long)arg1 returnAnchorSvrId:(long long)arg2 returnTipTitle:(id)arg3 notFoundToastText:(id)arg4;
- (void)navigateToMessageWithSvrId:(long long)arg1 returnAnchorSvrId:(long long)arg2 returnTipTitle:(id)arg3 notFoundToastText:(id)arg4 completion:(id /* block */)arg5;
- (void)navigateToMessageWithSvrId:(long long)arg1 returnAnchorSvrId:(long long)arg2 returnTipTitle:(id)arg3 notFoundToastText:(id)arg4 referMsg:(id)arg5 shouldHighlight:(BOOL)arg6 completion:(id /* block */)arg7;
- (void)resetMessageNavigation;
- (void)loadHistoryPageWithCompletion:(id /* block */)arg1;
- (void)loadHistoryPageWithPageSize:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)loadNewerHistoryPageAfterCursor:(id)arg1 pageSize:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)prepareHistoryViewModelsForInsertion:(id)arg1 effectiveWidth:(double)arg2;
- (BOOL)executeBatchInsertHistoryViewModels:(id)arg1 afterViewModel:(id)arg2 preserveVisiblePosition:(BOOL)arg3;
- (void)loadNewerHistoryPageIfNeededForScrollView:(id)arg1 scrollingTowardNewer:(BOOL)arg2;
- (BOOL)isLoadingNewerHistoryPage;
- (BOOL)returnToLatestMessageForBottomPanelInteractionWithCompletion:(id /* block */)arg1;
- (void)loadNextNewerHistoryPage;
- (BOOL)isValidNewerHistoryLoadForContext:(id)arg1 anchorViewModel:(id)arg2 generation:(unsigned long long)arg3;
- (void)handleNewerHistoryPageWithViewModels:(id)arg1 nextPageContext:(id)arg2 hasMore:(BOOL)arg3 context:(id)arg4 anchorViewModel:(id)arg5 generation:(unsigned long long)arg6;
- (void)cancelNewerHistoryLoad;
- (void)invalidateNewerHistoryPaging;
- (BOOL)isBrowsingHistoryWindow;
- (void)switchBackToLiveWindowAndScrollToBottom:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)switchBackToReturnWindowWithCompletion:(id /* block */)arg1;
- (void)switchBackToWindow:(id)arg1 scrollToBottom:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)shouldMergeLiveWindowWithNewPageViewModels:(id)arg1 hasMore:(BOOL)arg2;
- (void)mergeLiveWindowIntoCurrentWindow;
- (void)prepareHistoryNavigationToMessageWithSvrId:(long long)arg1 referMsg:(id)arg2 completion:(id /* block */)arg3;
- (id)commitPreparedHistoryNavigation;
- (void)cancelPreparedHistoryNavigation;
- (void)loadTargetHistoryAroundSvrId:(long long)arg1 referMsg:(id)arg2 pageSize:(unsigned int)arg3 navigationContext:(id)arg4 completion:(id /* block */)arg5;
- (void)handleListMessagesResponse:(id)arg1 pageSize:(unsigned int)arg2 nextPageContext:(id)arg3 isFromServer:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)handleHistoryResponseWithRecords:(id)arg1 hasMore:(BOOL)arg2 isFromServer:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)finishHistoryResponseWithViewModels:(id)arg1 hasMore:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)resetHistoryState;
- (void)handleHistoryResponseWithItems:(id)arg1 hasMore:(BOOL)arg2 nextCursor:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)downloadUserImagesForHistoryItems:(id)arg1;
- (id)buildHistoryViewModelsFromItems:(id)arg1 effectiveWidth:(double)arg2;
- (id)buildHistoryViewModelsFromRecords:(id)arg1 effectiveWidth:(double)arg2 isFromServer:(BOOL)arg3;
- (void)finalizeHistoryViewModel:(id)arg1 record:(id)arg2 firstWrap:(id)arg3 isUserMsg:(BOOL)arg4 effectiveWidth:(double)arg5;
- (id)historyViewModelForCardWrap:(id)arg1;
- (void)applyHistoryExtraInfo:(id)arg1 toViewModel:(id)arg2;
- (BOOL)needsHeightCacheForViewModel:(id)arg1;
- (void)applyHeightCacheFromExtraInfo:(id)arg1 toViewModel:(id)arg2 effectiveWidth:(double)arg3;
- (void)onSyncedMessagesUpdatedAsync:(id)arg1;
- (void)finishPendingHistoryInsertState;
- (void)batchInsertHistoryViewModelsToTop:(id)arg1;
- (void)executeBatchInsertToTopWithViewModels:(id)arg1;
- (void)showHistoryTopLoadingIndicator;
- (void)hideHistoryTopLoadingIndicator;
- (id)makeHistoryLoadingContainerView;
- (void)showTopLoadingHeader;
- (void)hideTopLoadingHeader;
- (void)showBottomLoadingFooter;
- (void)hideBottomLoadingFooter;
- (void)notifyHistoryNoMoreChanged;
- (unsigned long long)cbtReferQueryIdForSourceViewModel:(id)arg1;
- (id)cbtDirectReferTraceIdForViewModel:(id)arg1;
- (id)cbtReferTraceIdForSourceViewModel:(id)arg1 queryId:(unsigned long long)arg2;
- (unsigned long long)cbtReferAnswerIdForSourceViewModel:(id)arg1 queryId:(unsigned long long)arg2;
- (id)cbtReferReportParamsForSourceViewModel:(id)arg1;
- (void)captureReferReportContextForSourceViewModel:(id)arg1 referMsg:(id)arg2;
- (void)markNextQAReferContextForReferMsg:(id)arg1;
- (void)restoreNextQAReferContextFromQueryViewModels:(id)arg1 referMsg:(id)arg2;
- (id)referReportQueryItemKeyForViewModel:(id)arg1;
- (id)referReportParamsByQueryItem;
- (id)referReportParamsByAnswer;
- (void)recordReferReportContextForQueryViewModel:(id)arg1;
- (void)applyReferReportContextToAnswerViewModel:(id)arg1 answerKey:(id)arg2;
- (void)consumeAndClearReferReportContext;
- (BOOL)isThinkingWithVisibleText:(id)arg1;
- (BOOL)shouldParticipateInAnswerBubbleEventsForViewModel:(id)arg1;
- (BOOL)shouldParticipateInAnswerBubbleIndexForViewModel:(id)arg1;
- (id)answerBubbleIndexKeyForViewModel:(id)arg1 traceMsgid:(id)arg2 fallbackAnswerId:(unsigned long long)arg3;
- (void)fillReportRefQueryIdForVM:(id)arg1;
- (id)lastAnswerBubbleViewModelForTraceMsgid:(id)arg1;
- (void)reportPendingFirstTokenIfNeededForViewModel:(id)arg1 cellView:(id)arg2;
- (void)refreshAnswerBubbleReportingIfNeededForViewModel:(id)arg1;
- (void)reportThinkingLinkShowWithViewModel:(id)arg1 cellView:(id)arg2;
- (void)reportFQNotExpWithTraceMsgid:(id)arg1 reason:(long long)arg2;
- (void)reportAllActiveQueriesInterrupted:(id)arg1;
- (void)reportQueryDisplayedForViewModel:(id)arg1;
- (void)reportQueryDisplayedInterruptForViewModel:(id)arg1 interruptType:(id)arg2;
- (id)buildAnswerCompletedParamsForVM:(id)arg1 interruptType:(id)arg2;
- (void)reportAnswerCompletedIfNeededForViewModel:(id)arg1 target:(id)arg2 interruptType:(id)arg3;
- (void)reportAllActiveAnswersInterrupted:(id)arg1;
- (id)buildThinkLinkFinishParamsForVM:(id)arg1 finishTimeMs:(unsigned long long)arg2 interruptType:(id)arg3;
- (void)applyCommonReportContextToViewModel:(id)arg1;
- (void)fillRequiredSessionParams:(id)arg1 forViewModel:(id)arg2 sceneTag:(id)arg3;
- (void)finishThinkLink:(id)arg1;
- (void)reportInterruptedThinkLinkWithType:(id)arg1;
- (void)reportInterruptedFirstTokenForStreamStopWithType:(id)arg1;
- (void)configureUserQueryReportContextForViewModel:(id)arg1 queryType:(long long)arg2 inputAreaType:(long long)arg3 queryText:(id)arg4 talkFinishTs:(unsigned long long)arg5;
- (void)configureAttachmentOnlyQueryReportContextForViewModel:(id)arg1;
- (void)retryReportQueryDisplayedIfNeededForViewModel:(id)arg1;
- (void)retryReportQueryDisplayedIfNeededForViewModel:(id)arg1 trigger:(id)arg2;
- (id)ttsPlayingViewModelForTraceMsgid:(id)arg1;
- (void)reportTTSPlayStartWithChatRoundInfo:(id)arg1;
- (void)reportTTSPlayEndWithChatRoundInfo:(id)arg1 endReason:(id)arg2;
- (void)addExtDelegate:(id)arg1;
- (void)removeExtDelegate:(id)arg1;
- (void)triggerDownlinkHapticFeedback;
- (void)setVoipSession:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setAgentRuntimeVisible:(BOOL)arg1;
- (id)agentRuntimeSceneInstanceHandleForViewModel:(id)arg1;
- (void)sendAgentToolsCardWithCardContext:(id)arg1 containerId:(unsigned int)arg2 containerSize:(CGSize)arg3 autoHeight:(BOOL)arg4 context:(id)arg5 isLocalReplay:(BOOL)arg6;
- (void)onFontSizeChange;
- (BOOL)hasUserSentContent;
- (void)markNextUserSendAsAutoInjection;
- (void)applyUserSendShortcutEffectFromEntry:(id)arg1;
- (void)appendAttachmentInfoWithMsgType:(int)arg1 attachmentSource:(long long)arg2;
- (void)beginNewUserReportTurn;
- (void)beginComboUserReportTurn;
- (void)keyboardWillShow:(id)arg1;
- (void)setupTableView:(id)arg1;
- (void)registerCell;
- (id)getViewModelWithIndex:(long long)arg1;
- (id)horizontalGroupInfoAtIndex:(long long)arg1;
- (id)displayViewModelWithIndex:(long long)arg1;
- (double)displayHeightForCanonicalIndex:(long long)arg1;
- (id)horizontalReloadIndexPathsAroundIndex:(long long)arg1 excludingIndex:(long long)arg2;
- (id)horizontalHiddenContinuationCellForTableView:(id)arg1;
- (void)cleanupScreenWithNeedClearData:(BOOL)arg1;
- (void)resetShortcutDropState;
- (void)stopAllStream;
- (void)stopStreamText;
- (id)getIndexForViewModel:(id)arg1;
- (void)reportMarkNextQAAsActiveRec;
- (void)reportMarkNextQAWelcomeId:(id)arg1;
- (void)reportMarkNextQALiteAppOrigin:(id)arg1;
- (void)reportMarkNextQAAsFromEasterEgg;
- (void)notifyBottomPanelToShowStopOutputBtn;
- (id)weAppProcessIdentityForTraceMsgid:(id)arg1 sessionId:(id)arg2;
- (id)weAppProcessIdentityForViewModel:(id)arg1;
- (void)flushPendingWeAppProcessFramesForViewModel:(id)arg1;
- (void)syncWeAppProcessVoipSession;
- (void)rememberInterruptedWeAppTraces;
- (void)terminateCurrentDialogue;
- (void)terminateCurrentDialogueWithWeAppInterruptType:(long long)arg1;
- (void)terminateCurrentDialogueForAddressPickerSwitch;
- (void)terminateCurrentDialogueWithWeAppInterruptType:(long long)arg1 addressPickerSwitchTipText:(id)arg2;
- (void)handleOpenMicEvent;
- (void)handleOpenMicEventFromHeadless;
- (void)persistReferForActiveASRIfReady:(id)arg1;
- (void)handleCloseMicEvent:(BOOL)arg1 referMsg:(id)arg2;
- (void)tryShowUserASRContentCellWithReferMsg:(id)arg1;
- (void)updateBottomBlankVMHeightForTaskOP:(unsigned int)arg1;
- (void)refreshBottomBlankForViewportChange;
- (double)calculateValidBottomBlankHeight;
- (double)calculateLastRoundDialogueHeight;
- (void)startLoading;
- (void)stopLoading;
- (void)stopPreThinking;
- (void)startPreThinkingWithTitle:(id)arg1 insertCompleteHandle:(id /* block */)arg2;
- (void)stopThinking;
- (long long)currentXiaoweiOutputStatus;
- (id)currentStopOutputReportParams;
- (id)hostViewController;
- (void)scrollCardBottomToVisibleAndStartLoading:(id)arg1;
- (void)startASRLoadingTimeoutTimer;
- (BOOL)isASRLoadingPlaceholderVM:(id)arg1;
- (BOOL)isASRPlaceholderVM:(id)arg1;
- (void)paintUserASRCellWithViewModel:(id)arg1;
- (void)clearPendingHeadlessASRPaint;
- (void)cancelASRLoadingPlaceholderIfNeeded;
- (void)cancelASRLoadingTimeoutTimer;
- (void)onASRLoadingTimeout;
- (void)reserveBottomSlackForViewportGrow:(double)arg1;
- (void)scrollCellToTableViewTopWithIndexPath:(id)arg1;
- (void)checkScrollAnimationToEnd;
- (void)restoreScrollToTopExtraInset;
- (void)bumpScrollToTopExtraInsetIfNeededAfterShrink:(double)arg1 savedOffsetY:(double)arg2 savedContentSizeY:(double)arg3;
- (BOOL)isCellBottomBeyondTableViewBottom:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)isCellTopVisibleInTableView:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)isCellFullyVisibleInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)checkVisibleCellsForExposureReport;
- (void)updateMaxExpPctForVisibleCells;
- (void)stopWeAppProcess;
- (void)stopWeAppProcess:(BOOL)arg1;
- (void)stopWeAppProcessWithSessionId:(id)arg1 dismissTask:(BOOL)arg2;
- (void)stopWeAppProcessWithSessionId:(id)arg1 dismissTask:(BOOL)arg2 showStopTip:(BOOL)arg3;
- (void)onRecvWeAppText:(id)arg1 insertIndex:(long long)arg2;
- (void)onRecvWeAppText:(id)arg1 insertIndex:(long long)arg2 addressPickerTip:(BOOL)arg3;
- (void)endWeAppProcessWithCompleteHandle:(id /* block */)arg1;
- (void)setIsHalfScreenMode:(BOOL)arg1;
- (void)setIsTTSPlaying:(BOOL)arg1;
- (void)updateTTSPlayingTraceMsgidWithChatRoundInfo:(id)arg1;
- (BOOL)isViewModelInLastRound:(id)arg1;
- (void)interruptTTSIfNeededForViewModel:(id)arg1;
- (void)interruptTTSIfNeededForViewModels:(id)arg1;
- (void)setIsMicrophoneOpen:(BOOL)arg1;
- (void)resendViewModels:(id)arg1 agent:(id)arg2;
- (void)resendCoopUplinkViewModels:(id)arg1 agent:(id)arg2;
- (id)coopUplinkMultimodalItemForViewModel:(id)arg1;
- (void)insertCoopUplinkViewModel:(id)arg1 aiClientMsgid:(id)arg2;
- (void)insertImages:(id)arg1 referMsg:(id)arg2 completeHandle:(id /* block */)arg3;
- (void)insertFiles:(id)arg1 completeHandle:(id /* block */)arg2;
- (void)insertFiles:(id)arg1 uploadFilePaths:(id)arg2 uploadState:(unsigned long long)arg3 completeHandle:(id /* block */)arg4;
- (void)insertFiles:(id)arg1 uploadFilePaths:(id)arg2 fileNames:(id)arg3 uploadState:(unsigned long long)arg4 referMsg:(id)arg5 completeHandle:(id /* block */)arg6;
- (void)insertReceivedFileWithFileMsg:(id)arg1 localFilePath:(id)arg2 uploadFilePath:(id)arg3 uploadState:(unsigned long long)arg4 completeHandle:(id /* block */)arg5;
- (void)insertChats:(id)arg1 referMsg:(id)arg2 completeHandle:(id /* block */)arg3;
- (void)onFileUploadResultNotification:(id)arg1;
- (void)onFileUploadProgressNotification:(id)arg1;
- (void)applyFileUploadProgressForPath:(id)arg1 progress:(long long)arg2;
- (void)applyFileUploadResultForPath:(id)arg1 success:(BOOL)arg2 fileId:(id)arg3 aesKey:(id)arg4 storePendingWhenMissing:(BOOL)arg5;
- (void)insertMultimodalCard:(id)arg1 completeHandle:(id /* block */)arg2;
- (BOOL)hasAIMessageBefore;
- (id)lastNonBlankCellIndexPath;
- (id)viewModelsWithTraceMsgId:(id)arg1;
- (void)pauseAndDiscardViewModelsWithTraceMsgId:(id)arg1;
- (BOOL)needScrollLastVMToVisiableWhenKeyboardShow:(double)arg1;
- (void)enumerateViewModel:(id /* block */)arg1 handleTaskQueue:(BOOL)arg2;
- (id)getStreamTextViewModelWithStreamIdentifier:(id)arg1;
- (id)getStreamTextViewModelsWithTraceMsgid:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)configureHiddenStateForCell:(id)arg1 viewModel:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (BOOL)shouldForceCloudHistoryLoad;
- (void)checkBottomPanelOverlapWithBubble;
- (void)checkNavSeparatorOverlapWithBubble;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)notifyVisibleCellsOnAppear;
- (void)safePerformBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)cacheCellHeightIfNeeded:(id)arg1;
- (void)onFoldableTitleBarButtonTappedForCell:(id)arg1;
- (void)onStopWeAppProcessWithSessionId:(id)arg1;
- (void)onCellHeightUpdate:(double)arg1 cell:(id)arg2;
- (void)onCellHeightUpdate:(double)arg1 cell:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (BOOL)checkHasActiveStreamTextOnLayout;
- (id)getBoardTableView;
- (id)getDataController;
- (double)getHalfScreenContentHeight;
- (void)registerCoverViewCell:(id)arg1;
- (void)exitTextSelectState;
- (void)onSingleTapRTCV;
- (void)onRemoveRTCV;
- (id)getScrollView;
- (id)getViewController;
- (void)rtcScrollViewDidScroll:(id)arg1;
- (void)hideToolViewAnimated:(BOOL)arg1;
- (void)onRichTextViewExit;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (void)onCoverViewMultiSelect:(id)arg1;
- (id)getCurrentViewController;
- (void)willShowMenuController:(id)arg1 inMsgWrap:(id)arg2;
- (BOOL)isLeftCursorVisible;
- (BOOL)isRightCursorVisible;
- (void)onRecvToolCallAdaptor:(id)arg1;
- (void)onChatBotVoipNotifyToStopWeAppProcess:(BOOL)arg1;
- (void)onDeleteMessagesSucceededAsync:(id)arg1;
- (void)onClearAllMessagesSucceededAsync;
- (void)collectPendingSvrIdsFromTaskQueue:(id)arg1 intoSet:(id)arg2;
- (id)collectAllExistingSvrIds;
- (void)onSyncedMessagesInsertedAsync:(id)arg1;
- (long long)compareSyncedViewModel:(id)arg1 withViewModel:(id)arg2;
- (unsigned long long)insertionIndexOfSyncedViewModel:(id)arg1 inVMs:(id)arg2;
- (id)groupSyncedViewModelsByQaTurn:(id)arg1;
- (id)positioningViewModelForSyncedTurnGroup:(id)arg1;
- (void)insertSyncedViewModels:(id)arg1;
- (void)insertSyncedViewModels:(id)arg1 retryCount:(long long)arg2;
- (void)enqueueSyncedInsertTaskForViewModels:(id)arg1 rawIndex:(unsigned long long)arg2;
- (void)onShowLinkErrMsg:(int)arg1 errorCode:(int)arg2;
- (BOOL)shouldShowServerBusyBubbleForLinkError:(int)arg1;
- (void)insertServerBusyBubbleForLinkError:(int)arg1;
- (void)insertBlockedByCountryBubble;
- (void)onRecvStreamText:(id)arg1 traceMsgid:(id)arg2 storageInfo:(id)arg3 originExtraInfo:(id)arg4 referMsg:(id)arg5;
- (void)handleThinkingStreamText:(id)arg1 traceMsgid:(id)arg2 storageInfo:(id)arg3;
- (void)scrollCellToTableViewTop:(id)arg1;
- (double)messageNavigationContentOffsetForIndexPath:(id)arg1;
- (void)scrollToMessageAtIndexPath:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)finishMessageNavigationScrollForGeneration:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)cancelMessageNavigationScroll;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 shouldActiveLoading:(BOOL)arg3;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 shouldActiveLoading:(BOOL)arg3 referMsg:(id)arg4;
- (void)insertPrivacyNoticeBubbleWithContent:(id)arg1 agreementScene:(long long)arg2 insertCompleteHandle:(id /* block */)arg3;
- (void)triggerPrivacyNoticeAgreementWithTrigger:(long long)arg1 entry:(id)arg2;
- (void)triggerPrivacyNoticeAgreementForBypass;
- (void)triggerPrivacyNoticeAgreementForAutoContext;
- (BOOL)hasPrivacyNoticeBubbleInBoard;
- (BOOL)hasStarMigrateBubbleInBoard;
- (void)blockPendingUserASR;
- (void)sendRecordCardToBoard:(id)arg1 duration:(double)arg2 meetingId:(id)arg3;
- (BOOL)_isAuxiliaryViewModelForMultiSelectResolution:(id)arg1;
- (BOOL)_isUserSideViewModelForMultiSelectResolution:(id)arg1;
- (BOOL)_shouldBeInitiallySelectedInMultiSelect:(id)arg1;
- (id)_firstAnswerTraceMsgIdAfterIndex:(long long)arg1 withinDialogueId:(long long)arg2;
- (id)_targetTraceMsgIdForMultiSelectTriggerVM:(id)arg1 triggerIndex:(long long)arg2;
- (long long)_firstViewModelIndexForTraceMsgId:(id)arg1;
- (id)_traceGroupViewModelsForTraceMsgId:(id)arg1;
- (id)_queryViewModelsBeforeGroupStartIndex:(long long)arg1;
- (id)_defaultSelectedViewModelsForMultiSelectTriggerVM:(id)arg1 triggerIndex:(long long)arg2;
- (void)onForwardSelectFromCell:(id)arg1;
- (void)onReferMessageFromCell:(id)arg1;
- (void)refreshReferDisplayTextCacheForViewModel:(id)arg1;
- (void)onJumpToReferFromCell:(id)arg1;
- (void)onMultiSelectFromCell:(id)arg1;
- (void)exitMultiSelectMode;
- (void)_reportDeleteSuccessWithViewModel:(id)arg1;
- (void)onDeleteSingleMessageFromCell:(id)arg1;
- (void)deleteMessagesWithEncodedDialogueIds:(id)arg1 checkedSvrIds:(id)arg2 completion:(id /* block */)arg3;
- (id)buildDeleteItemForDialogueId:(long long)arg1 checkedSvrIdsSet:(id)arg2;
- (void)executeSingleDeleteWithViewModel:(id)arg1;
- (void)removeViewModelFromBoard:(id)arg1;
- (BOOL)hasAnswerForTraceMsgid:(id)arg1 excludingIndexes:(id)arg2;
- (void)removePendingAuxiliaryTasksForTraceMsgid:(id)arg1 pendingRemoveIndexes:(id)arg2;
- (void)collectLeadingThinkingVMsFromIndex:(unsigned long long)arg1 intoIndexSet:(id)arg2;
- (void)collectPersistedThinkingSvrIdsForViewModel:(id)arg1 intoArray:(id)arg2;
- (void)collectTrailingAuxiliaryVMsForDialogueId:(long long)arg1 fromIndex:(unsigned long long)arg2 intoIndexSet:(id)arg3 pendingRemoveSet:(id)arg4;
- (BOOL)hasRemainingAnswerForDialogueId:(long long)arg1 excludingIndexes:(id)arg2;
- (void)removeAdjacentDuplicateTimeVMs;
- (void)removeTimeVMBeforeGrayHintIfNeeded;
- (BOOL)isInDeleteSelectMode;
- (void)exitDeleteSelectMode;
- (void)confirmDeleteSelectedDialogues;
- (void)executeDeleteSelectedMessages;
- (void)removeSelectedViewModelsFromBoard:(id)arg1;
- (id)buildEncodedDialogueIdsForSelectedVMs:(id)arg1;
- (long long)countSelectedDialogues;
- (id)viewModelsInSameDialogue:(id)arg1;
- (BOOL)multiSelectManagerShouldDeferModeTransition:(id)arg1;
- (void)multiSelectManagerWillBeginModeTransition:(id)arg1 targetMultiSelectMode:(BOOL)arg2;
- (void)multiSelectManager:(id)arg1 didFinishViewportCompensationForMultiSelectMode:(BOOL)arg2;
- (void)multiSelectManagerDidEnter:(id)arg1;
- (void)multiSelectManagerDidExit:(id)arg1;
- (void)multiSelectManager:(id)arg1 didChangeSelectedCount:(long long)arg2;
- (id)selectedViewModels;
- (BOOL)isInMultiSelectMode;
- (void)forwardSelectedViewModels;
- (void)dismissMultiForwardActionSheetIfNeeded;
- (void)copySelectedViewModels;
- (void)_toggleSelectionForViewModel:(id)arg1 atIndexPath:(id)arg2;
- (void)onForwardViewModel:(id)arg1;
- (void)onForwardViewModels:(id)arg1;
- (void)_saveResponseHistoryAndSendSwitchModelWithTraceMsgId:(id)arg1 agent:(id)arg2 retryAnswer:(BOOL)arg3;
- (void)onFeedbackFromCell:(id)arg1;
- (void)onFeedbackFromCell:(id)arg1 fromDislike:(BOOL)arg2;
- (void)reportFeedbackExposureWithViewModel:(id)arg1 fromDislike:(BOOL)arg2;
- (void)handleFeedbackSubmittedNotification:(id)arg1;
- (void)handleFeedbackPageDismissedNotification:(id)arg1;
- (void)onSwitchAgentFromCell:(id)arg1 agent:(id)arg2 traceMsgId:(id)arg3;
- (void)onRetryFromCell:(id)arg1;
- (id)userUplinkViewModelsWithDialogueId:(long long)arg1;
- (id)amoebaContextViewModelForWeAppTraceMsgid:(id)arg1;
- (void)registerAmoebaCommonParamsForWeAppProcessData:(id)arg1;
- (void)onSwitchToPreviousAnswerFromCell:(id)arg1;
- (void)onSwitchToNextAnswerFromCell:(id)arg1;
- (void)batchReplaceOldViewModels:(id)arg1 withNewViewModels:(id)arg2 responseHistory:(id)arg3;
- (void)onShowDebugLogForViewModel:(id)arg1;
- (void)onRecvWeAppProccessMsg:(id)arg1 svrId:(long long)arg2;
- (void)onSetMicrophoneMute:(BOOL)arg1;
- (void)onRemoveRecQuestionViewModels;
- (void)onMsgStorageIdReady:(id)arg1 storageInfo:(id)arg2;
- (void)flushPendingInteractiveCardStateForViewModel:(id)arg1;
- (void)saveUserFileCacheIfNeededForViewModel:(id)arg1;
- (void)onViewModelDidSetMessageMatchKey:(id)arg1;
- (void)tryBackfillStorageInfoForViewModel:(id)arg1;
- (BOOL)handleAsstCardWrapWithoutViewModel:(id)arg1 traceMsgid:(id)arg2 storageInfo:(id)arg3;
- (BOOL)handleFileCardWrapIfNeeded:(id)arg1 traceMsgid:(id)arg2 storageInfo:(id)arg3;
- (id)specialViewModelForAsstCardWrap:(id)arg1;
- (id)factoryViewModelForAsstCardWrap:(id)arg1;
- (void)configureViewModel:(id)arg1 forCardWrap:(id)arg2 traceMsgid:(id)arg3 storageInfo:(id)arg4;
- (void)onDirectRecvAsstCardWrap:(id)arg1 traceMsgid:(id)arg2;
- (void)onRecvAsstCardWrap:(id)arg1 traceMsgid:(id)arg2 appTraceId:(id)arg3 storageInfo:(id)arg4;
- (void)enqueueTraceAnchoredCardViewModel:(id)arg1 traceMsgid:(id)arg2;
- (BOOL)handleTextAndWeAppInsertion:(id)arg1 viewModel:(id)arg2;
- (void)handleTask:(id)arg1 completeHandle:(id /* block */)arg2;
- (void)markNextQAAsFromShortcuts;
- (id)reportTargetViewForViewModel:(id)arg1;
- (void)onClickQuestion:(id)arg1 viewModel:(id)arg2;
- (id)getPreviousQAForViewModel:(id)arg1;
- (void)removeAllRecQuestionViewModels;
- (void)onNeedRemoveFollowingRecQuestionsForViewModel:(id)arg1;
- (void)onNeedRemoveFollowingTurnCompleteForViewModel:(id)arg1;
- (void)prepareViewportForUserBubbleInsertion:(id)arg1;
- (double)anchorYForUserBubblePrediction;
- (double)lastStreamCompletedTimestamp;
- (void)onChatBotLocationGet:(CLLocationCoordinate2D)arg1 posTitle:(id)arg2 isSuccess:(BOOL)arg3 needAuth:(BOOL)arg4 callId:(id)arg5 context:(id)arg6 voipSessionID:(id)arg7;
- (void)appendViewModelToLiveWindow:(id)arg1;
- (void)insertViewModelToLiveWindow:(id)arg1 atIndex:(long long)arg2;
- (BOOL)removeViewModelFromLiveWindow:(id)arg1;
- (void)tryDeleteViewModel:(id)arg1 completeHandle:(id /* block */)arg2;
- (void)tryDeleteViewModel:(id)arg1 completeHandle:(id /* block */)arg2 priority:(BOOL)arg3;
- (void)tryBatchDeleteViewModels:(id)arg1 completeHandle:(id /* block */)arg2 priority:(BOOL)arg3;
- (void)enqueueBatchInsertToTopWithViewModels:(id)arg1;
- (void)enqueueBatchInsertHistoryViewModels:(id)arg1 afterViewModel:(id)arg2 shouldExecute:(id /* block */)arg3 preserveVisiblePosition:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)tryAddViewModel:(id)arg1;
- (BOOL)turnCompleteRoundHasReadableText:(id)arg1;
- (void)tryAddViewModel:(id)arg1 insertCompleteHandle:(id /* block */)arg2;
- (void)tryInsertViewModel:(id)arg1 atIndex:(long long)arg2 insertCompleteHandle:(id /* block */)arg3;
- (void)tryUpdateViewModelHeight:(id)arg1 completeHandle:(id /* block */)arg2;
- (void)tryUpdateViewModelHeight:(id)arg1 completeHandle:(id /* block */)arg2 priority:(BOOL)arg3;
- (void)finishCurrentInsertTaskWithScheduleNext:(BOOL)arg1;
- (void)tryProcessNextInsertTask;
- (void)initViewState;
- (void)notifyTaskSessionCallUser:(id)arg1 startIndex:(long long)arg2;
- (void)notifyAsstTurnCompleteWithViewModel:(id)arg1;
- (void)notifyAsstTTSReadStateDidChange:(BOOL)arg1;
- (void)setAskXiaoWeiDisplayType:(long long)arg1;
- (void)bindAskXiaoWeiAnchorToViewModelIfNeeded:(id)arg1;
- (void)enqueueCompletedStreamTextHeightUpdate:(id)arg1;
- (void)onViewModelCompleteStreamLayout:(id)arg1;
- (void)_refreshSelectAppearanceForViewModelIfInMultiSelect:(id)arg1;
- (void)onUserAsrViewModelStartLayout:(id)arg1;
- (void)onNeedUpdateViewModel:(id)arg1;
- (id)getFootnoteDefinitionWithTraceMsgId:(id)arg1;
- (void)onNeedMagicBrushCardEnv;
- (id)currentMagicBrushName;
- (void)onRefreshSendTimestamp;
- (void)subAgentJoinWithHeadImageUrl:(id)arg1 name:(id)arg2 summary:(id)arg3 subagentId:(id)arg4 subAgentSource:(unsigned int)arg5;
- (void)tryShowSubAgentUnrepliedNotice;
- (id)magicBrushViewModelForContainerId:(unsigned int)arg1;
- (id)recycleScrollView;
- (id)currentIndexPathForContainerId:(unsigned int)arg1;
- (CGRect)rectForRowAtIndexPath:(id)arg1;
- (BOOL)rebuildFrameSetViewForContainerId:(unsigned int)arg1;
- (void)subAgentRemoveWithSubagentId:(id)arg1 isNeedLoading:(BOOL)arg2;
- (void)checkAndReportFQNotExpForActiveAnswersWithReason:(long long)arg1;
- (long long)askXiaoWeiDisplayType;
- (id)voipSession;
- (long long)reportEnterScene;
- (void)setReportEnterScene:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isTTSPlaying;
- (BOOL)isMicrophoneOpen;
- (BOOL)skipFirstGreetingBubble;
- (void)setSkipFirstGreetingBubble:(BOOL)arg1;
- (BOOL)isHalfScreenMode;
- (id)insetAdjuster;
- (void)setInsetAdjuster:(id)arg1;
- (id)recycleManager;
- (void)setRecycleManager:(id)arg1;
- (BOOL)suspendOffscreenCount;
- (void)setSuspendOffscreenCount:(BOOL)arg1;
- (double)reddotLocateProtectUntil;
- (void)setReddotLocateProtectUntil:(double)arg1;
- (id)recallWelcomeId;
- (void)setRecallWelcomeId:(id)arg1;
- (id)richTextCoverView;
- (void)setRichTextCoverView:(id)arg1;
- (BOOL)offscreenAppInBackground;
- (void)setOffscreenAppInBackground:(BOOL)arg1;
- (BOOL)isLoadingHistory;
- (void)setIsLoadingHistory:(BOOL)arg1;
- (BOOL)noMoreHistory;
- (void)setNoMoreHistory:(BOOL)arg1;
- (unsigned long long)emptyPageRetryCount;
- (void)setEmptyPageRetryCount:(unsigned long long)arg1;
- (BOOL)isInsertingHistoryBatch;
- (void)setIsInsertingHistoryBatch:(BOOL)arg1;
- (BOOL)needsReloadAfterHistoryInsert;
- (void)setNeedsReloadAfterHistoryInsert:(BOOL)arg1;
- (id)historyUpPageContext;
- (void)setHistoryUpPageContext:(id)arg1;
- (id)historyDownPageContext;
- (void)setHistoryDownPageContext:(id)arg1;
- (id)newerHistoryPagingContext;
- (void)setNewerHistoryPagingContext:(id)arg1;
- (id)historyTopLoadingView;
- (void)setHistoryTopLoadingView:(id)arg1;
- (id)historyTopLoadingHeaderView;
- (void)setHistoryTopLoadingHeaderView:(id)arg1;
- (id)historyBottomLoadingFooterView;
- (void)setHistoryBottomLoadingFooterView:(id)arg1;
- (BOOL)hasPendingHistoryInsertTask;
- (void)setHasPendingHistoryInsertTask:(BOOL)arg1;
- (id)currentTTSPlayingTraceMsgid;
- (void)setCurrentTTSPlayingTraceMsgid:(id)arg1;
- (id)ttsPlayingVoiceId;
- (void)setTtsPlayingVoiceId:(id)arg1;
- (unsigned long long)ttsPlayStartTsMs;
- (void)setTtsPlayStartTsMs:(unsigned long long)arg1;
- (id)pendingTTSEndReason;
- (void)setPendingTTSEndReason:(id)arg1;
- (id)extDelegates;
- (void)setExtDelegates:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModelArr;
- (void)setViewModelArr:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (id)topTaskQueue;
- (void)setTopTaskQueue:(id)arg1;
- (id)pendingFileUploadResultByPath;
- (void)setPendingFileUploadResultByPath:(id)arg1;
- (id)curTask;
- (void)setCurTask:(id)arg1;
- (BOOL)hasUserSentContentFlag;
- (void)setHasUserSentContentFlag:(BOOL)arg1;
- (BOOL)offscreenDetached;
- (void)setOffscreenDetached:(BOOL)arg1;
- (BOOL)hasUserSentMsgPendingShortcutDrop;
- (void)setHasUserSentMsgPendingShortcutDrop:(BOOL)arg1;
- (BOOL)suppressNextUserSendShortcutEffect;
- (void)setSuppressNextUserSendShortcutEffect:(BOOL)arg1;
- (BOOL)isOnExecutingTask;
- (void)setIsOnExecutingTask:(BOOL)arg1;
- (BOOL)isWaitingStreamLayout;
- (void)setIsWaitingStreamLayout:(BOOL)arg1;
- (BOOL)isTableViewInScrollAnimation;
- (void)setIsTableViewInScrollAnimation:(BOOL)arg1;
- (double)expectedScrollTargetY;
- (void)setExpectedScrollTargetY:(double)arg1;
- (long long)scrollRetryCount;
- (void)setScrollRetryCount:(long long)arg1;
- (id)messageReturnTipController;
- (void)setMessageReturnTipController:(id)arg1;
- (BOOL)messageNavigationInProgress;
- (void)setMessageNavigationInProgress:(BOOL)arg1;
- (BOOL)returningToLatestForBottomPanelInteraction;
- (void)setReturningToLatestForBottomPanelInteraction:(BOOL)arg1;
- (unsigned long long)messageNavigationScrollGeneration;
- (void)setMessageNavigationScrollGeneration:(unsigned long long)arg1;
- (long long)historyPagingDirection;
- (void)setHistoryPagingDirection:(long long)arg1;
- (id)historyNavigationContext;
- (void)setHistoryNavigationContext:(id)arg1;
- (id)liveWindowState;
- (void)setLiveWindowState:(id)arg1;
- (id)returnWindowState;
- (void)setReturnWindowState:(id)arg1;
- (BOOL)isFirstUserAsrAfterReleaseVoiceInputBtn;
- (void)setIsFirstUserAsrAfterReleaseVoiceInputBtn:(BOOL)arg1;
- (id)preThinkingVM;
- (void)setPreThinkingVM:(id)arg1;
- (id)curActiveUserAsrStreamTextVM;
- (void)setCurActiveUserAsrStreamTextVM:(id)arg1;
- (BOOL)isCurVoiceInputUploadBeCanceled;
- (void)setIsCurVoiceInputUploadBeCanceled:(BOOL)arg1;
- (BOOL)shouldBlockUserASR;
- (void)setShouldBlockUserASR:(BOOL)arg1;
- (BOOL)pendingHeadlessASRPaint;
- (void)setPendingHeadlessASRPaint:(BOOL)arg1;
- (id)asrLoadingTimeoutTimer;
- (void)setAsrLoadingTimeoutTimer:(id)arg1;
- (BOOL)accountBlockedSuppressUserSend;
- (void)setAccountBlockedSuppressUserSend:(BOOL)arg1;
- (id)activeAnswerStreamTextVMDic;
- (void)setActiveAnswerStreamTextVMDic:(id)arg1;
- (id)bStopedStreamTextIDSet;
- (void)setBStopedStreamTextIDSet:(id)arg1;
- (id)discardedTraceMsgIdSet;
- (void)setDiscardedTraceMsgIdSet:(id)arg1;
- (id)interruptedWeAppTraceMsgIdSet;
- (void)setInterruptedWeAppTraceMsgIdSet:(id)arg1;
- (id)closedWeAppProcessIdentitySet;
- (void)setClosedWeAppProcessIdentitySet:(id)arg1;
- (id)pendingWeAppProcessFrames;
- (void)setPendingWeAppProcessFrames:(id)arg1;
- (id)weAppProcessVoipSessionID;
- (void)setWeAppProcessVoipSessionID:(id)arg1;
- (id)activeThinkingTextVMDic;
- (void)setActiveThinkingTextVMDic:(id)arg1;
- (id)bottomBlankVM;
- (void)setBottomBlankVM:(id)arg1;
- (double)lastFontScale;
- (void)setLastFontScale:(double)arg1;
- (void)setLastStreamCompletedTimestamp:(double)arg1;
- (id)curWeAppFoldableProcessVM;
- (void)setCurWeAppFoldableProcessVM:(id)arg1;
- (id)taskSessionInfoMap;
- (void)setTaskSessionInfoMap:(id)arg1;
- (id)pendingWeAppViewModels;
- (void)setPendingWeAppViewModels:(id)arg1;
- (id)insertedTextSessionIds;
- (void)setInsertedTextSessionIds:(id)arg1;
- (id)multiSelectMgr;
- (void)setMultiSelectMgr:(id)arg1;
- (id)forwardMgr;
- (void)setForwardMgr:(id)arg1;
- (BOOL)shouldIgnoreFirstTapOnInitialSelectedItem;
- (void)setShouldIgnoreFirstTapOnInitialSelectedItem:(BOOL)arg1;
- (BOOL)shouldSkipBottomBlankHeightCorrection;
- (void)setShouldSkipBottomBlankHeightCorrection:(BOOL)arg1;
- (BOOL)isTransitioningMultiSelectMode;
- (void)setIsTransitioningMultiSelectMode:(BOOL)arg1;
- (BOOL)pendingExitMultiSelect;
- (void)setPendingExitMultiSelect:(BOOL)arg1;
- (id)currentCoverViewCell;
- (void)setCurrentCoverViewCell:(id)arg1;
- (id)pendingFeedbackViewModel;
- (void)setPendingFeedbackViewModel:(id)arg1;
- (id)lastMsgTraceID;
- (void)setLastMsgTraceID:(id)arg1;
- (id)answerRefInfoDic;
- (void)setAnswerRefInfoDic:(id)arg1;
- (id)traceToAnswerKeyMap;
- (void)setTraceToAnswerKeyMap:(id)arg1;
- (id)traceMsgidHasFQ;
- (void)setTraceMsgidHasFQ:(id)arg1;
- (BOOL)reportNextQAIsActiveRec;
- (void)setReportNextQAIsActiveRec:(BOOL)arg1;
- (id)reportNextQAWelcomeId;
- (void)setReportNextQAWelcomeId:(id)arg1;
- (BOOL)reportNextQAIsFromFq;
- (void)setReportNextQAIsFromFq:(BOOL)arg1;
- (BOOL)reportNextQAIsFromShortcuts;
- (void)setReportNextQAIsFromShortcuts:(BOOL)arg1;
- (BOOL)reportNextQAIsFromEasterEgg;
- (void)setReportNextQAIsFromEasterEgg:(BOOL)arg1;
- (long long)reportCurrentTurnSeq;
- (void)setReportCurrentTurnSeq:(long long)arg1;
- (BOOL)reportIsMultimodalQuery;
- (void)setReportIsMultimodalQuery:(BOOL)arg1;
- (id)currentTurnAttachmentInfoArray;
- (void)setCurrentTurnAttachmentInfoArray:(id)arg1;
- (BOOL)hasPendingComboUserTurn;
- (void)setHasPendingComboUserTurn:(BOOL)arg1;
- (id)roomSubagentManager;
- (void)setRoomSubagentManager:(id)arg1;
- (id)magicBrushChannel;
- (void)setMagicBrushChannel:(id)arg1;
- (unsigned long long)lastVoiceInputReleaseTimestampMs;
- (void)setLastVoiceInputReleaseTimestampMs:(unsigned long long)arg1;
- (unsigned long long)lastTextSendCompleteTimestampMs;
- (void)setLastTextSendCompleteTimestampMs:(unsigned long long)arg1;
- (unsigned long long)firstTextOutputTimestampMs;
- (void)setFirstTextOutputTimestampMs:(unsigned long long)arg1;
- (unsigned long long)lastQueryDisplayTs;
- (void)setLastQueryDisplayTs:(unsigned long long)arg1;
- (unsigned long long)lastAnswerCompletedTs;
- (void)setLastAnswerCompletedTs:(unsigned long long)arg1;
- (BOOL)isLastInputVoice;
- (void)setIsLastInputVoice:(BOOL)arg1;
- (id)pendingResponseHistory;
- (void)setPendingResponseHistory:(id)arg1;
- (long long)retryInsertIndex;
- (void)setRetryInsertIndex:(long long)arg1;
- (id)currentAppTraceId;
- (void)setCurrentAppTraceId:(id)arg1;
- (id)responseHistoryByAppTraceId;
- (void)setResponseHistoryByAppTraceId:(id)arg1;
- (id)pendingStorageInfoMap;
- (void)setPendingStorageInfoMap:(id)arg1;
- (id)heightCacheWrittenMap;
- (void)setHeightCacheWrittenMap:(id)arg1;
- (BOOL)hasMarkedHapticForCurrentUserSend;
- (void)setHasMarkedHapticForCurrentUserSend:(BOOL)arg1;
- (long long)privacyNoticeAgreementScene;
- (void)setPrivacyNoticeAgreementScene:(long long)arg1;
- (BOOL)privacyNoticeAgreementTriggered;
- (void)setPrivacyNoticeAgreementTriggered:(BOOL)arg1;
- (BOOL)agentRuntimeVisibleState;
- (void)setAgentRuntimeVisibleState:(BOOL)arg1;
- (id)pendingAskXiaoWeiAnchorViewModel;
- (void)setPendingAskXiaoWeiAnchorViewModel:(id)arg1;
- (id)reportNextQALiteAppOrigin;
- (void)setReportNextQALiteAppOrigin:(id)arg1;
- (id)viewStateRegistrations;
- (void)setViewStateRegistrations:(id)arg1;
- (id)viewStateViewModelIdList;
- (void)setViewStateViewModelIdList:(id)arg1;
- (id)viewStateLock;
- (void)setViewStateLock:(id)arg1;
- (long long)viewStateNextId;
- (void)setViewStateNextId:(long long)arg1;
- (BOOL)isForwardOnlyMode;
- (void)setIsForwardOnlyMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
