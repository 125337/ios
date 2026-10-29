@interface WASpecializedAgentContentView : UIView <WAAgentRuntimeChannelServiceExt, WAAgentSessionPageDelegate, WAAgentRuntimeChannelServiceDelegate, WAAgentCardRecycleManagerDelegate, WAAgentFrameSetViewObserver, WAAgentAuthCardDirectPresenting, IChatbotAudioStateExt>
{
    BOOL _isColdLaunch; // +0x8
    BOOL _isDarkModeEnabled; // +0x9
    BOOL _didFullyDisappear; // +0xa
    BOOL _lastIsColdLaunch; // +0xb
    BOOL _roundContentArrived; // +0xc
    BOOL _awaitingNewRoundDownstream; // +0xd
    BOOL _pendingVConsoleSwitch; // +0xe
    BOOL _vConsoleSwitched; // +0xf
    unsigned int _savedEnterSceneBeforeLink; // +0x10
    unsigned int _promptIdCounter; // +0x14
    unsigned int _instanceTag; // +0x18
    WAContact * _contact; // +0x20
    WAAgentSessionPage * _sessionPage; // +0x28
    UIView * _vConsoleContainerOverride; // +0x30
    id <WASpecializedAgentContentViewDelegate> _delegate; // +0x38
    NSString * _agentContext; // +0x40
    unsigned long long _openAgentScene; // +0x48
    id /* block */ _contextReadyCompletion; // +0x50
    NSString * _openedSubAgentAppId; // +0x58
    NSString * _chatSessionId; // +0x60
    WAAgentCardRecycleManager * _recycleManager; // +0x68
    NSMutableDictionary * _containerIdToFrameIdMap; // +0x70
    NSMutableDictionary * _containerIdToCardContextMap; // +0x78
    NSMutableDictionary * _containerIdToContainerSizeMap; // +0x80
    NSMutableDictionary * _containerIdToCardMetadataMap; // +0x88
    NSMutableDictionary * _halfScreenManagers; // +0x90
    NSMutableDictionary * _thinkContentMap; // +0x98
    NSMutableArray * _thinkIdOrder; // +0xa0
    NSMutableSet * _staleThinkIds; // +0xa8
    NSString * _aggregatedThinkMessageId; // +0xb0
    NSString * _pendingLocalThinkId; // +0xb8
    NSString * _pinnedThinkText; // +0xc0
    NSString * _lastStreamedNormalChunk; // +0xc8
    NSString * _currentRoundStartMessageId; // +0xd0
    NSString * _currentRoundEndMessageId; // +0xd8
    NSString * _lastDownstreamMsgId; // +0xe0
    unsigned long long _firstMessageId; // +0xe8
    unsigned long long _lastMessageId; // +0xf0
    NSMutableSet * _dispatchedWeAppCardMessageIds; // +0xf8
    WAAgentClientReportContext * _reportCtx; // +0x100
    NSString * _chatAgentSource; // +0x108
    long long _savedCapsuleNavMode; // +0x110
    NSArray * _pendingRecordImages; // +0x118
    double _pendingRecordImagesTimestamp; // +0x120
    NSArray * _pendingRecordFileItems; // +0x128
    double _pendingRecordFileItemsTimestamp; // +0x130
    NSMutableDictionary * _authCardItems; // +0x138
    NSString * _thinkTextBeforeAuthCard; // +0x140
    NSString * _thinkHistoryPrefix; // +0x148
}
- (BOOL)isVoiceRecordingInProgress;
- (void)cancelPendingVoiceRecordingTransition;
- (void)scheduleVoiceRecordingTransition;
- (void)transitionToVoiceRecordingState;
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (id)nearestHostViewController;
- (void)setNavBarHidden:(BOOL)arg1;
- (BOOL)navBarHidden;
- (void)syncCapsuleCenterYFromHostTask;
- (void)resetAppearState;
- (void)prepareForAppear:(BOOL)arg1;
- (void)didAppear:(BOOL)arg1;
- (void)prepareForDisappear:(BOOL)arg1;
- (void)didDisappear:(BOOL)arg1;
- (void)handleReturnFromHalfScreenSubAgent;
- (BOOL)isMatchingSpecializedAgentHostAppId:(id)arg1;
- (void)onSpecializedAgentChannelReadyStateChanged:(BOOL)arg1 hostAppId:(id)arg2;
- (void)onSpecializedAgentVoIPConnectionStateChanged:(unsigned long long)arg1 username:(id)arg2 hostAppId:(id)arg3;
- (BOOL)isUIContentEventTargetingCurrentAgentPage:(id)arg1;
- (void)onSpecializedAgentEvent:(id)arg1;
- (void)onSpecializedAgentAsrText:(id)arg1 hostAppId:(id)arg2;
- (void)onSpecializedAgentInputPeakChanged:(float)arg1 hostAppId:(id)arg2;
- (void)onSpecializedAgentUpstreamSendFailed:(id)arg1 hostAppId:(id)arg2;
- (void)onAgentChannelReadyStateChanged:(BOOL)arg1;
- (void)onAgentVoIPConnectionStateChanged:(unsigned long long)arg1 username:(id)arg2;
- (void)onAgentTextEvent:(id)arg1;
- (void)onThinkEvent:(id)arg1;
- (void)onTypingStateChange:(BOOL)arg1 appId:(id)arg2 username:(id)arg3;
- (void)onHeadlessAppClosed;
- (void)onAgentMessageRateLimit:(id)arg1;
- (void)onAgentMessageOutOfLength:(id)arg1;
- (void)onRenderCardEvent:(id)arg1;
- (void)bindCardMetadataForContainerId:(unsigned int)arg1 context:(id)arg2 appVersion:(id)arg3;
- (void)onSuggestionEvent:(id)arg1;
- (void)onInsertUserMessage:(id)arg1;
- (void)onSendWeAppCard:(id)arg1;
- (id)parseAppMsgItemFromCardXml:(id)arg1;
- (id)extractAppMsgXmlFromCardContent:(id)arg1;
- (void)onAgentSessionPageThinkToggle:(BOOL)arg1;
- (void)onAgentSessionPageBackButtonClick;
- (void)onAgentSessionPageInputTapped;
- (void)onAgentSessionPagePlusButtonClicked;
- (void)onAgentSessionPagePlusPanelExposed;
- (void)onAgentSessionPagePhotoButtonClicked;
- (void)onAgentSessionPageCameraButtonClicked;
- (void)onAgentSessionPageFileButtonClicked;
- (void)onAgentSessionPagePreviewClicked;
- (void)onAgentSessionPage:(id)arg1 willDisplayContainerCellWithContainerIds:(id)arg2;
- (void)onAgentSessionPage:(id)arg1 endDisplayContainerCellWithContainerIds:(id)arg2 atIndexPath:(id)arg3;
- (void)onAgentSessionPage:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)onAgentSessionPageStartRecord;
- (void)onRecordStartStateChange:(long long)arg1 error:(id)arg2;
- (void)onAgentSessionPageEndRecord:(id)arg1 fileItems:(id)arg2;
- (void)onAgentSessionPageRecordCancel;
- (void)onAgentSessionPageSendText:(id)arg1 images:(id)arg2 fileItems:(id)arg3;
- (void)onAgentSessionPageSendSuggestion:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 agentContext:(id)arg2;
- (void)sendMessage:(id)arg1 agentContext:(id)arg2 openAgentScene:(unsigned long long)arg3;
- (void)onCapsuleMenuExit;
- (void)onAgentSessionPage:(id)arg1 didDestroyContainerId:(unsigned int)arg2;
- (id)onAgentSessionPage:(id)arg1 requestFrameSetViewForFrameId:(unsigned int)arg2;
- (id)onAgentSessionPage:(id)arg1 requestFrameSetViewForContainerId:(unsigned int)arg2;
- (void)onAgentSessionPage:(id)arg1 requestRecoverFrameSetViewForContainerId:(unsigned int)arg2 frameId:(unsigned int)arg3 containerSize:(CGSize)arg4 sectionId:(id)arg5;
- (void)onAgentSessionPage:(id)arg1 didTapMiniAppLink:(id)arg2 path:(id)arg3 linkContent:(id)arg4;
- (void)onAgentSessionPage:(id)arg1 didTapThinkingLinkURL:(id)arg2;
- (void)onAgentSessionPage:(id)arg1 didTapAuthCardUrl:(id)arg2;
- (BOOL)onAgentSessionPage:(id)arg1 didTapAuthCardWeAppLink:(id)arg2;
- (id)handoffIdFromAppMsgItem:(id)arg1;
- (id)cardTitleFromHandoffJSONString:(id)arg1;
- (void)resolveHandoffAndDispatchForCellItem:(id)arg1 appMsgItem:(id)arg2;
- (void)applyHandoffInfo:(id)arg1 handoffId:(id)arg2 toCellItem:(id)arg3 appMsgItem:(id)arg4 waitedSec:(double)arg5 waitTimedOut:(BOOL)arg6 autoJump:(BOOL)arg7;
- (BOOL)acquireDispatchForWeAppCardMessageId:(id)arg1;
- (void)markWeAppCardMessageIdDispatched:(id)arg1;
- (void)routeWeAppCardWithAppMsgItem:(id)arg1 handoffInfo:(id)arg2 handoffId:(id)arg3 autoJump:(BOOL)arg4 waitedSec:(double)arg5 waitTimedOut:(BOOL)arg6;
- (void)onAgentSessionPage:(id)arg1 didTapWeAppCardWithMessageId:(id)arg2 appMsgItem:(id)arg3;
- (void)onAgentSessionPage:(id)arg1 didAutoJumpWeAppCardWithAppMsgItem:(id)arg2;
- (void)onAgentSessionPage:(id)arg1 didTapExpandButtonWithAppId:(id)arg2 path:(id)arg3 debugMode:(unsigned long long)arg4;
- (void)prepareNavigateForPath:(id)arg1 scene:(unsigned long long)arg2;
- (void)cancelPendingNavigateForScene:(unsigned long long)arg1;
- (void)onAgentInputPeakChange:(float)arg1;
- (void)handleSpecializedAgentAsrText:(id)arg1;
- (BOOL)presentAuthCardSessionInline:(id)arg1;
- (void)wrapFinishHookForAuthCardSession:(id)arg1;
- (void)applyAuthCardCompletedStateForCardId:(id)arg1 status:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (void)expirePendingAuthCardsForNewUserMessage;
- (void)finalizeThinkingBeforeAuthCard;
- (void)startNewThinkingAfterAuthCard;
- (void)onSendTextMessage:(id)arg1 method:(id)arg2 params:(id)arg3 sourceAppId:(id)arg4;
- (void)sendTurnNewIfNeeded;
- (id)buildReportItemWithEventType:(unsigned long long)arg1;
- (id)buildReportItemWithEventType:(unsigned long long)arg1 fromEvent:(id)arg2;
- (void)sendTextMessage:(id)arg1 msgSendType:(unsigned long long)arg2;
- (void)sendTextMessage:(id)arg1 msgSendType:(unsigned long long)arg2 method:(id)arg3 params:(id)arg4 images:(id)arg5;
- (void)sendTextMessage:(id)arg1 msgSendType:(unsigned long long)arg2 method:(id)arg3 params:(id)arg4 images:(id)arg5 fileItems:(id)arg6;
- (void)sendTextMessage:(id)arg1 msgSendType:(unsigned long long)arg2 method:(id)arg3 params:(id)arg4 images:(id)arg5 agentContext:(id)arg6;
- (void)sendTextMessage:(id)arg1 msgSendType:(unsigned long long)arg2 method:(id)arg3 params:(id)arg4 images:(id)arg5 fileItems:(id)arg6 agentContext:(id)arg7 isColdLaunch:(BOOL)arg8;
- (void)sendTextMessage:(id)arg1 msgSendType:(unsigned long long)arg2 method:(id)arg3 params:(id)arg4 images:(id)arg5 fileItems:(id)arg6 agentContext:(id)arg7 isColdLaunch:(BOOL)arg8 openAgentScene:(unsigned long long)arg9 sourceAppId:(id)arg10;
- (void)notifyDelegateUserDidSendMessage;
- (void)notifyDelegateDidReceiveAgentContent;
- (void)addEmptyThinkCell;
- (void)handlePromptText:(id)arg1 scrollToBottom:(BOOL)arg2;
- (void)handleInputImages:(id)arg1 scrollToBottom:(BOOL)arg2;
- (void)handleInputFileItems:(id)arg1 scrollToBottom:(BOOL)arg2;
- (void)handlePromptText:(id)arg1 images:(id)arg2 fileItems:(id)arg3;
- (void)updateAgentLoading:(BOOL)arg1;
- (void)finalizeRunningThinkCells;
- (id)buildLiveThinkTextWithLatestChunk:(id)arg1;
- (id)buildAggregatedThinkText;
- (void)cleanupPendingLocalThinkCell;
- (BOOL)isThinkingActive;
- (double)currentRoundChatContentHeight;
- (double)currentRoundChatContentHeightForWidth:(double)arg1;
- (void)applyThinkingVisibleWindow;
- (void)clearThinkingVisibleWindow;
- (void)notifyDelegateDidUpdateThinkingContent;
- (id)generateMessageId;
- (void)markDownstreamMessageReceived:(id)arg1;
- (void)reportUpstreamSendTextForAgent:(id)arg1 msgSendType:(unsigned long long)arg2 method:(id)arg3 params:(id)arg4;
- (void)reportSendEventWithImages:(id)arg1 fileItems:(id)arg2;
- (void)cleanupFrameSetViewCacheForContainerId:(unsigned int)arg1;
- (id)recycleScrollView;
- (id)currentIndexPathForContainerId:(unsigned int)arg1;
- (CGRect)rectForRowAtIndexPath:(id)arg1;
- (BOOL)rebuildFrameSetViewForContainerId:(unsigned int)arg1;
- (void)recycleManager:(id)arg1 didRecycleFrameSetView:(id)arg2 containerId:(unsigned int)arg3;
- (void)onFrameSetViewCreated:(id)arg1 frameId:(unsigned int)arg2 containerId:(unsigned int)arg3;
- (void)onFrameSetViewDestroyedForContainerId:(unsigned int)arg1;
- (void)onCardExpired:(id)arg1 containerId:(unsigned int)arg2;
- (void)onUpdateCardRelatedPage:(unsigned int)arg1 appId:(id)arg2 path:(id)arg3 envVersion:(id)arg4;
- (void)onPresentCardInHalfScreen:(id)arg1 containerId:(unsigned int)arg2;
- (void)onDismissHalfScreenCard:(unsigned int)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)sessionPage;
- (void)setSessionPage:(id)arg1;
- (id)vConsoleContainerOverride;
- (void)setVConsoleContainerOverride:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isColdLaunch;
- (void)setIsColdLaunch:(BOOL)arg1;
- (id)agentContext;
- (void)setAgentContext:(id)arg1;
- (unsigned long long)openAgentScene;
- (void)setOpenAgentScene:(unsigned long long)arg1;
- (id /* block */)contextReadyCompletion;
- (void)setContextReadyCompletion:(id /* block */)arg1;
- (id)openedSubAgentAppId;
- (void)setOpenedSubAgentAppId:(id)arg1;
- (id)chatSessionId;
- (void)setChatSessionId:(id)arg1;
- (BOOL)isDarkModeEnabled;
- (void)setIsDarkModeEnabled:(BOOL)arg1;
- (BOOL)didFullyDisappear;
- (void)setDidFullyDisappear:(BOOL)arg1;
- (BOOL)lastIsColdLaunch;
- (void)setLastIsColdLaunch:(BOOL)arg1;
- (id)recycleManager;
- (void)setRecycleManager:(id)arg1;
- (id)containerIdToFrameIdMap;
- (void)setContainerIdToFrameIdMap:(id)arg1;
- (id)containerIdToCardContextMap;
- (void)setContainerIdToCardContextMap:(id)arg1;
- (id)containerIdToContainerSizeMap;
- (void)setContainerIdToContainerSizeMap:(id)arg1;
- (id)containerIdToCardMetadataMap;
- (void)setContainerIdToCardMetadataMap:(id)arg1;
- (id)halfScreenManagers;
- (void)setHalfScreenManagers:(id)arg1;
- (id)thinkContentMap;
- (void)setThinkContentMap:(id)arg1;
- (id)thinkIdOrder;
- (void)setThinkIdOrder:(id)arg1;
- (id)staleThinkIds;
- (void)setStaleThinkIds:(id)arg1;
- (id)aggregatedThinkMessageId;
- (void)setAggregatedThinkMessageId:(id)arg1;
- (id)pendingLocalThinkId;
- (void)setPendingLocalThinkId:(id)arg1;
- (id)pinnedThinkText;
- (void)setPinnedThinkText:(id)arg1;
- (id)lastStreamedNormalChunk;
- (void)setLastStreamedNormalChunk:(id)arg1;
- (id)currentRoundStartMessageId;
- (void)setCurrentRoundStartMessageId:(id)arg1;
- (id)currentRoundEndMessageId;
- (void)setCurrentRoundEndMessageId:(id)arg1;
- (BOOL)roundContentArrived;
- (void)setRoundContentArrived:(BOOL)arg1;
- (id)lastDownstreamMsgId;
- (void)setLastDownstreamMsgId:(id)arg1;
- (BOOL)awaitingNewRoundDownstream;
- (void)setAwaitingNewRoundDownstream:(BOOL)arg1;
- (unsigned long long)firstMessageId;
- (void)setFirstMessageId:(unsigned long long)arg1;
- (unsigned long long)lastMessageId;
- (void)setLastMessageId:(unsigned long long)arg1;
- (id)dispatchedWeAppCardMessageIds;
- (void)setDispatchedWeAppCardMessageIds:(id)arg1;
- (id)reportCtx;
- (void)setReportCtx:(id)arg1;
- (id)chatAgentSource;
- (void)setChatAgentSource:(id)arg1;
- (long long)savedCapsuleNavMode;
- (void)setSavedCapsuleNavMode:(long long)arg1;
- (unsigned int)savedEnterSceneBeforeLink;
- (void)setSavedEnterSceneBeforeLink:(unsigned int)arg1;
- (unsigned int)promptIdCounter;
- (void)setPromptIdCounter:(unsigned int)arg1;
- (unsigned int)instanceTag;
- (void)setInstanceTag:(unsigned int)arg1;
- (BOOL)pendingVConsoleSwitch;
- (void)setPendingVConsoleSwitch:(BOOL)arg1;
- (BOOL)vConsoleSwitched;
- (void)setVConsoleSwitched:(BOOL)arg1;
- (id)pendingRecordImages;
- (void)setPendingRecordImages:(id)arg1;
- (double)pendingRecordImagesTimestamp;
- (void)setPendingRecordImagesTimestamp:(double)arg1;
- (id)pendingRecordFileItems;
- (void)setPendingRecordFileItems:(id)arg1;
- (double)pendingRecordFileItemsTimestamp;
- (void)setPendingRecordFileItemsTimestamp:(double)arg1;
- (id)authCardItems;
- (void)setAuthCardItems:(id)arg1;
- (id)thinkTextBeforeAuthCard;
- (void)setThinkTextBeforeAuthCard:(id)arg1;
- (id)thinkHistoryPrefix;
- (void)setThinkHistoryPrefix:(id)arg1;
- (void).cxx_destruct;
@end
