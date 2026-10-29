@interface ChatBotVoIPMgr : MMUserService <ChatbotUICPP2NativeCallerBase, IAUAudioDeviceExt, IWAAgentServiceExt, CNetworkStatusExt, MMActionNotifyCommBizExt, IMMLanguageMgrExt, MMServiceProtocol>
{
    BOOL _isRoomTalkSucc; // +0x8
    BOOL _allowDelayedDestroySession; // +0x9
    BOOL _enableMiniTaskPageChatCache; // +0xa
    BOOL _enableTransferMsgCache; // +0xb
    BOOL _lastNeedFullDuplex; // +0xc
    BOOL _isMeetingRecording; // +0xd
    int _recordingRoomScene; // +0x10
    int _xiaoweiPermissionStatusCache; // +0x14
    int _delayedDestroySessionOpenScene; // +0x18
    int _currentRoomOpenScene; // +0x1c
    ChatBotBaseVoIPViewController * _mainVoIPVC; // +0x20
    ChatbotUICPP2NativeCallerCallback * _cppCallback; // +0x28
    ChatbotUICPP2NativeCaller * _nativeController; // +0x30
    XImageViewRenderer * _localViewRenderer; // +0x38
    NSMutableSet * _completedProcessWeAppSessionIdSet; // +0x40
    CBTAsstSubscriptionLogic * _subscriptionLogic; // +0x48
    unsigned long long _startTTSTime; // +0x50
    ChatbotAudioUnit * _audioUnit; // +0x58
    double _currentScale; // +0x60
    CBTBridgeListener * _xiaoweiPermissionBridgeObserver; // +0x68
    ChatbotOperationReporter * _chatbotReporter; // +0x70
    unsigned long long _startTalkingTime; // +0x78
    NSTimer * _delayedDestroySessionTimer; // +0x80
    ChatBotTransitionBaseViewController * _retainedMainVoIPVC; // +0x88
    NSMutableDictionary * _halfScreenVCCache; // +0x90
    NSMutableDictionary * _delayedDestroySessionTimerCache; // +0x98
    NSMutableDictionary * _delayedDestroySessionSceneCache; // +0xa0
    NSMutableSet * _tempAuthChatIds; // +0xa8
    NSMapTable * _sessionRegistry; // +0xb0
}
+ (id)genStartSessionParamsByRoomInfo:(id)arg1;
- (void)registerAff;
- (void)unregisterAff;
- (void)sendRUDPCmdMsg:(id)arg1 targetId:(int)arg2 voipSessionID:(id)arg3;
- (void)talkSuccAsync:(unsigned long long)arg1;
- (void)callEndAsync:(unsigned long long)arg1 voipSessionID:(id)arg2;
- (void)setCallback:(id)arg1;
- (void)onTTSBeginAsync:(unsigned long long)arg1 roundInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)onTTSEndAsync:(unsigned long long)arg1 roundInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)onRecvMsgAsync:(unsigned long long)arg1 msgInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)onRecvStreamTextAsync:(unsigned long long)arg1 text:(id)arg2 textSeq:(int)arg3 textOutputSource:(int)arg4 identifier:(id)arg5 traceMsgid:(id)arg6 appTraceId:(id)arg7 voipSessionID:(id)arg8;
- (void)onRecvQuestionInfoAsync:(unsigned long long)arg1 questionInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)onRecvWeAppNotifyClientMsgAsync:(unsigned long long)arg1 notifyMsg:(id)arg2 voipSessionID:(id)arg3;
- (void)onRecvWeAppCdpAsync:(unsigned long long)arg1 cdp:(id)arg2 callId:(id)arg3 context:(id)arg4 voipSessionID:(id)arg5;
- (void)onRecvWeAppProccessMsgAsync:(unsigned long long)arg1 proccessMsg:(id)arg2 voipSessionID:(id)arg3;
- (void)onRecvPOIRequestAsync:(unsigned long long)arg1 authText:(id)arg2 isFirstReq:(BOOL)arg3 callId:(id)arg4 context:(id)arg5 voipSessionID:(id)arg6;
- (void)onSocialHistoryUpdateAsync:(unsigned long long)arg1 updateInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)onRecvAiSpeakingInfoAsync:(unsigned long long)arg1 downlinkSideInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)onAIMicSpeakStatusAsync:(unsigned long long)arg1 isMicOn:(BOOL)arg2 voipSessionID:(id)arg3;
- (void)onRecvRecommendMsgInfoAsync:(unsigned long long)arg1 data:(id)arg2 voipSessionID:(id)arg3;
- (id)getWeAppLoadingCheckModelPath;
- (id)getWeAppLoadingCheckConfigPath;
- (void)onRoomMemberChangeAsync:(unsigned long long)arg1 memberCount:(int)arg2;
- (void)onDeleteMessagesSucceededAsync:(unsigned long long)arg1 deletedItems:(id)arg2;
- (void)onClearAllMessagesSucceededAsync:(unsigned long long)arg1;
- (void)onSyncedMessagesInsertedAsync:(unsigned long long)arg1 records:(id)arg2 recordList:(id)arg3;
- (void)onSyncedMessagesUpdatedAsync:(unsigned long long)arg1 records:(id)arg2 recordList:(id)arg3;
- (void)onAuditEvaluationModeChangedAsync:(unsigned long long)arg1 evaluationModeType:(int)arg2 sessionId:(id)arg3 caseId:(id)arg4;
- (void)onAuditAutomaticEvaluationResultAsync:(unsigned long long)arg1 protocolVersion:(int)arg2 resultType:(int)arg3 sessionFinishReason:(int)arg4 jobId:(id)arg5 sessionId:(id)arg6 attempt:(int)arg7 caseId:(id)arg8 query:(id)arg9 answerText:(id)arg10 success:(BOOL)arg11 errorCode:(int)arg12 message:(id)arg13;
- (void)onAuditAutomaticEvaluationResultV2Async:(unsigned long long)arg1 protocolVersion:(int)arg2 resultType:(int)arg3 sessionFinishReason:(int)arg4 jobId:(id)arg5 sessionId:(id)arg6 attempt:(int)arg7 caseId:(id)arg8 modalAccept:(int)arg9 query:(id)arg10 answerText:(id)arg11 success:(BOOL)arg12 errorCode:(int)arg13 message:(id)arg14;
- (void)onAuditSetLocationAsync:(unsigned long long)arg1 protocolVersion:(int)arg2 jobId:(id)arg3 sessionId:(id)arg4 attempt:(int)arg5 voipSessionID:(id)arg6 latitude:(double)arg7 longitude:(double)arg8 hasSpeed:(BOOL)arg9 speed:(double)arg10 hasAccuracy:(BOOL)arg11 accuracy:(double)arg12 hasAltitude:(BOOL)arg13 altitude:(double)arg14 hasVerticalAccuracy:(BOOL)arg15 verticalAccuracy:(double)arg16 hasHorizontalAccuracy:(BOOL)arg17 horizontalAccuracy:(double)arg18;
- (void)onAuditClearMockLocationAsync:(unsigned long long)arg1 voipSessionID:(id)arg2;
- (void)onAuditHumanEvaluationResultAsync:(unsigned long long)arg1 protocolVersion:(int)arg2 jobId:(id)arg3 sessionId:(id)arg4 caseId:(id)arg5 turnSequence:(int)arg6 query:(id)arg7 answerText:(id)arg8 success:(BOOL)arg9 errorCode:(int)arg10 message:(id)arg11;
- (void)onRecvTTSExtraInfoAsync:(unsigned long long)arg1 info:(id)arg2 voipSessionID:(id)arg3;
- (void)onCdpSessionTimeoutAsync:(unsigned long long)arg1 callId:(id)arg2 context:(id)arg3 sessionId:(id)arg4 cmdId:(id)arg5 errorCode:(int)arg6 voipSessionID:(id)arg7;
- (void)onRecvToCliInfoAsync:(unsigned long long)arg1 data:(id)arg2 openScene:(int)arg3 voipSessionID:(id)arg4 msgID:(unsigned long long)arg5;
- (void)onRecvToolCallAdaptorAsync:(unsigned long long)arg1 toolCallArguments:(id)arg2 voipSessionID:(id)arg3;
- (void)onShowLinkErrMsgAsync:(unsigned long long)arg1 openScene:(int)arg2 errorCode:(int)arg3 voipSessionID:(id)arg4;
- (void)onRecvEvaluateJsAsync:(unsigned long long)arg1 appId:(id)arg2 executionContextId:(id)arg3 expression:(id)arg4 captureConsole:(BOOL)arg5 captureExceptions:(BOOL)arg6 timeoutMs:(int)arg7 callId:(id)arg8 context:(id)arg9 voipSessionID:(id)arg10;
- (void)onRecvVoIPAsrInfoAsync:(unsigned long long)arg1 asrInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)notifyChatbotEntryStateChangeAsync:(unsigned long long)arg1 isGreen:(BOOL)arg2;
- (void)onServiceInit;
- (void)prefetchAllCommonSugs;
- (int)curCommonSugLanguage;
- (void)prefetchCommonSugForScene:(int)arg1;
- (void)onLanguageChange;
- (void)onServiceAfterInit;
- (void)tryStartSyncLocalMessagesToServer;
- (void)onServiceClearData;
- (void)applyXiaoweiPermissionStatus:(int)arg1 origin:(id)arg2;
- (void)setEnableMiniTaskPageChatCache:(BOOL)arg1;
- (BOOL)miniTaskPageChatEnabledFromSources;
- (void)handleMiniTaskPageChatEnabledChangedFrom:(BOOL)arg1;
- (void)onServiceTerminate;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (BOOL)needDelayedDestroySessionForOpenScene:(int)arg1;
- (void)startDelayedDestroySession:(int)arg1;
- (void)onDelayedDestroySessionTimer;
- (void)cancelDelayedDestroySession:(int)arg1 needResumeAudio:(BOOL)arg2;
- (void)cancelDelayedDestroySessionIfNeeded:(int)arg1;
- (void)clearDelayedDestroySessionState;
- (BOOL)enableMiniTaskPageChat;
- (int)xiaoweiPrivacyStatesBitmask;
- (BOOL)hasUserEverTappedChatBotEntry;
- (void)markUserEverTappedChatBotEntry;
- (BOOL)enableChatBotFlutterVersion;
- (BOOL)enableBoardLegacyPlatformView;
- (BOOL)enableTransferMsg;
- (id)createAsstVC:(unsigned int)arg1;
- (double)getCurrentScale;
- (id)_startSessionRawWithParams:(id)arg1 aiCarryInfo:(id)arg2 openScene:(int)arg3;
- (id)_startSessionRawWithParams:(id)arg1 aiCarryInfo:(id)arg2 roomInfo:(id)arg3 openScene:(int)arg4;
- (id)_startSessionRawWithBusinessInfo:(id)arg1 identifier:(id)arg2 sessionID:(id)arg3 roomInfo:(id)arg4 openScene:(int)arg5;
- (id)_startSessionRawWithBusinessInfo:(id)arg1 params:(id)arg2 aiCarryInfo:(id)arg3 identifier:(id)arg4 sessionID:(id)arg5 roomInfo:(id)arg6 openScene:(int)arg7;
- (void)prepareSessionEagerly;
- (void)triggerUnmuteHapticFeedback;
- (id)startSessionWithParams:(id)arg1 aiCarryInfo:(id)arg2 openScene:(int)arg3;
- (id)startSessionWithParams:(id)arg1 aiCarryInfo:(id)arg2 roomInfo:(id)arg3 openScene:(int)arg4;
- (id)startSessionWithBusinessInfo:(id)arg1 identifier:(id)arg2 sessionID:(id)arg3 roomInfo:(id)arg4 openScene:(int)arg5;
- (void)registerSession:(id)arg1;
- (void)unregisterSession:(id)arg1;
- (id)sessionForVoIPSessionID:(id)arg1;
- (BOOL)hasOtherActiveSessionExcluding:(id)arg1;
- (BOOL)hasOtherVisibleSessionExcluding:(id)arg1;
- (void)releaseAudioIfNoOtherVisibleSessionExcluding:(id)arg1;
- (BOOL)isUIPresentingForVoIPSessionID:(id)arg1;
- (void)startChatbotAudioWithFullDuplex:(BOOL)arg1;
- (void)setHeadlessRecordingHardwareOpen:(BOOL)arg1;
- (void)switchNewRoomWithParams:(id)arg1 voipSessionID:(id)arg2;
- (void)destroySessionAndJoinNewRoomWithParams:(id)arg1 aiCarryInfo:(id)arg2 groupId:(id)arg3 roomInfoPB:(id)arg4;
- (void)setMuteInternal:(BOOL)arg1 roomScene:(int)arg2 uiState:(unsigned int)arg3 needFullDuplex:(BOOL)arg4 withTransferCtx:(id)arg5 forbidSendMicStatus:(BOOL)arg6 needPlaySound:(BOOL)arg7 responseState:(unsigned int)arg8 imagePaths:(id)arg9 filePaths:(id)arg10 fileNames:(id)arg11 voipSessionID:(id)arg12 attachMsgidMap:(id)arg13 chatUsernames:(id)arg14 referMsg:(id)arg15 isSeqReset:(BOOL)arg16 micBizInfo:(id)arg17 cardWraps:(id)arg18;
- (void)startAIAudioPlayWithOpenScene:(int)arg1;
- (void)stopAIAudioPlayWithOpenScene:(int)arg1;
- (void)enableTTSPlayAndRecordCategory:(BOOL)arg1;
- (void)switchTTSToReceiver:(BOOL)arg1;
- (BOOL)isTTSUsingReceiver;
- (void)onTTSBegin;
- (void)onTTSEnd;
- (void)destroySession:(int)arg1 voipSessionID:(id)arg2;
- (void)destroySessionImmediately:(int)arg1 voipSessionID:(id)arg2;
- (void)destroySessionNow:(int)arg1 voipSessionID:(id)arg2;
- (int)getNetWorkType;
- (BOOL)checkSpecialMode:(id)arg1;
- (void)changeToSpecialModel:(id)arg1 modelName:(id)arg2;
- (BOOL)isChattingWithAI;
- (id)getCurrentChatBotVC;
- (BOOL)needShowActiveSocialRoomRedDot;
- (void)ResetActiveSocialRoomRedDot;
- (void)checkAndUpdateMainFrameLeftTopBtn;
- (void)fetchSocialHistoryForNotifyData:(id)arg1;
- (void)onFlipCamera;
- (double)maxZoomFactor;
- (void)zoomFactor:(double)arg1;
- (BOOL)getIfFrontCamera;
- (void)changeIntoFullDuplexMode:(int)arg1 uiState:(unsigned int)arg2 withTransferCtx:(id)arg3;
- (void)changeInfoHalfDuplexMode;
- (void)setDiscardAudioData:(BOOL)arg1;
- (void)setNeedDiscardPlaybackData:(BOOL)arg1;
- (void)setManualReadAloudActive:(BOOL)arg1;
- (BOOL)getIfDiscardPlaybackData;
- (void)stopCurrentTTSPlayback;
- (void)releaseChatbotAudioUint;
- (void)sendFunctionCallInfoToAI:(id)arg1 outputStr:(id)arg2 voipSessionID:(id)arg3;
- (BOOL)getIsRecordMode;
- (BOOL)getIfChatbotAudioWorking;
- (BOOL)hasOtherActiveAudio;
- (id)getCurrentAudioFmtParams;
- (BOOL)triggerMeetingRecording:(BOOL)arg1 roomScene:(int)arg2;
- (BOOL)isOnMeetingRecording;
- (void)audioDeviceStartedSuccess:(id)arg1;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceInputMeterLevel:(id)arg1 Peak:(float)arg2;
- (id)transferMessageWrap:(id)arg1;
- (id)genPlaygroundCardInfoWithMsg:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)openDefaultRoomForHardware;
- (BOOL)openMic:(int)arg1;
- (BOOL)closeMic:(int)arg1;
- (BOOL)openMic:(int)arg1 uiState:(unsigned int)arg2;
- (BOOL)openMic:(int)arg1 uiState:(unsigned int)arg2 responseState:(unsigned int)arg3;
- (BOOL)closeMic:(int)arg1 uiState:(unsigned int)arg2 responseState:(unsigned int)arg3;
- (BOOL)closeMic:(int)arg1 uiState:(unsigned int)arg2;
- (void)onLogCdpDownWithSessionId:(id)arg1 cmdId:(id)arg2 cmdTaskId:(id)arg3 cmdMethod:(id)arg4;
- (void)onLogCdpUpWithSessionId:(id)arg1 cmdId:(id)arg2 cmdTaskId:(id)arg3 cmdMethod:(id)arg4 retCode:(int)arg5;
- (void)onRequestCdpWithBase64String:(id)arg1 callId:(id)arg2 context:(id)arg3 voipSessionID:(id)arg4;
- (id)onGetFeatureWithImage:(id)arg1;
- (double)onGetSnapShotModelInvokeRes:(id)arg1 otherFeature:(id)arg2;
- (id)onGetFeatureWithParseHTML:(id)arg1;
- (void)sendEndCallUserMsg:(id)arg1 operationInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)onEndCallUser:(id)arg1 operationInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)interruptAISpeaking:(id)arg1;
- (void)cancelSendLastVoiceASR:(id)arg1;
- (void)sendPOI:(CLLocationCoordinate2D)arg1 isSuccess:(BOOL)arg2 needAuth:(BOOL)arg3 callId:(id)arg4 context:(id)arg5 voipSessionID:(id)arg6;
- (void)mockDebugView;
- (void)notifyChatBotVoipNotifyToStopWeAppProcess:(BOOL)arg1;
- (void)reportAction:(unsigned long long)arg1 gesture:(unsigned long long)arg2 contentID:(id)arg3;
- (void)reportAudioLen:(unsigned long long)arg1 isAISpeaking:(BOOL)arg2;
- (void)onMultiTalkReady;
- (void)ilinkDidEnd;
- (id)createHalfScreenVCWithSourceType:(unsigned long long)arg1 sourceId:(id)arg2 scene:(unsigned int)arg3 skipFinderCheck:(BOOL)arg4 enterSceneType:(long long)arg5;
- (void)cancelDelayedDestroySessionForSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)clearCachedVCForSourceType:(unsigned long long)arg1 sourceId:(id)arg2;
- (void)clearAllHalfScreenVCCache;
- (void)startDelayedDestroySessionForSourceType:(unsigned long long)arg1 sourceId:(id)arg2 openScene:(int)arg3;
- (void)onMultiVCDelayedDestroySessionTimer:(id)arg1;
- (void)addTempAuthChatId:(id)arg1;
- (void)removeTempAuthChatId:(id)arg1;
- (id)getTempAuthChatIds;
- (void)resumeAudioAfterDelayedHangupCancel;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (id)mainVoIPVC;
- (void)setMainVoIPVC:(id)arg1;
- (id)cppCallback;
- (void)setCppCallback:(id)arg1;
- (id)nativeController;
- (void)setNativeController:(id)arg1;
- (id)localViewRenderer;
- (void)setLocalViewRenderer:(id)arg1;
- (id)completedProcessWeAppSessionIdSet;
- (void)setCompletedProcessWeAppSessionIdSet:(id)arg1;
- (id)subscriptionLogic;
- (void)setSubscriptionLogic:(id)arg1;
- (BOOL)isRoomTalkSucc;
- (void)setIsRoomTalkSucc:(BOOL)arg1;
- (BOOL)allowDelayedDestroySession;
- (void)setAllowDelayedDestroySession:(BOOL)arg1;
- (unsigned long long)startTTSTime;
- (void)setStartTTSTime:(unsigned long long)arg1;
- (id)audioUnit;
- (void)setAudioUnit:(id)arg1;
- (int)recordingRoomScene;
- (void)setRecordingRoomScene:(int)arg1;
- (double)currentScale;
- (void)setCurrentScale:(double)arg1;
- (BOOL)enableMiniTaskPageChatCache;
- (int)xiaoweiPermissionStatusCache;
- (void)setXiaoweiPermissionStatusCache:(int)arg1;
- (BOOL)enableTransferMsgCache;
- (void)setEnableTransferMsgCache:(BOOL)arg1;
- (id)xiaoweiPermissionBridgeObserver;
- (void)setXiaoweiPermissionBridgeObserver:(id)arg1;
- (id)chatbotReporter;
- (void)setChatbotReporter:(id)arg1;
- (unsigned long long)startTalkingTime;
- (void)setStartTalkingTime:(unsigned long long)arg1;
- (id)delayedDestroySessionTimer;
- (void)setDelayedDestroySessionTimer:(id)arg1;
- (int)delayedDestroySessionOpenScene;
- (void)setDelayedDestroySessionOpenScene:(int)arg1;
- (id)retainedMainVoIPVC;
- (void)setRetainedMainVoIPVC:(id)arg1;
- (int)currentRoomOpenScene;
- (void)setCurrentRoomOpenScene:(int)arg1;
- (BOOL)lastNeedFullDuplex;
- (void)setLastNeedFullDuplex:(BOOL)arg1;
- (id)halfScreenVCCache;
- (void)setHalfScreenVCCache:(id)arg1;
- (id)delayedDestroySessionTimerCache;
- (void)setDelayedDestroySessionTimerCache:(id)arg1;
- (id)delayedDestroySessionSceneCache;
- (void)setDelayedDestroySessionSceneCache:(id)arg1;
- (id)tempAuthChatIds;
- (void)setTempAuthChatIds:(id)arg1;
- (BOOL)isMeetingRecording;
- (void)setIsMeetingRecording:(BOOL)arg1;
- (id)sessionRegistry;
- (void)setSessionRegistry:(id)arg1;
- (void).cxx_destruct;
@end
