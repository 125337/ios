@interface WASpecializedAgentChannel : NSObject <WAAgentVoIPSessionDelegate, IChatBotVoIPExt, WASpecializedAgentUpstreamMessagePipelineDelegate, WAAgentSceneInstanceDelegate>
{
    BOOL _channelReady; // +0x8
    BOOL _realtimeReady; // +0x9
    BOOL _runtimeReady; // +0xa
    BOOL _permanentlyDestroyed; // +0xb
    BOOL _pageVisible; // +0xc
    BOOL _didReportVoIPConnected; // +0xd
    BOOL _isWaitingBizReadyReport; // +0xe
    BOOL _recording; // +0xf
    NSString * _hostAppId; // +0x10
    WAContact * _contact; // +0x18
    WAAgentSceneInstanceHandle * _sceneHandle; // +0x20
    WAAgentVoIPSession * _voipSession; // +0x28
    WASpecializedAgentUpstreamMessagePipeline * _upstreamPipeline; // +0x30
    unsigned long long _connectionState; // +0x38
    id <WASpecializedAgentChannelDelegate> _delegate; // +0x40
    id <WASpecializedAgentUpstreamMessagePipelineDelegate> _reportDelegate; // +0x48
    WAAgentRuntimeCoreService * _coreService; // +0x50
    MMUIViewController * _hostViewController; // +0x58
    WAAgentChannelReportContext * _channelReportContext; // +0x60
    unsigned long long _pageVisibilityGeneration; // +0x68
    NSMutableArray * _startCompletions; // +0x70
    NSMutableArray * _pendingRealtimeOperations; // +0x78
    id /* block */ _pendingPageVisibleOperation; // +0x80
    id /* block */ _pendingPageCloseOperation; // +0x88
    NSObject<OS_dispatch_source> * _keepAliveTimer; // +0x90
    double _keepAliveDeadline; // +0x98
    unsigned long long _voipConnectStartTsMs; // +0xa0
    unsigned long long _realtimeReconnectCount; // +0xa8
    NSString * _lastToolCallSessionId; // +0xb0
}
- (id)initWithContact:(id)arg1 coreService:(id)arg2;
- (void)dealloc;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)ensureRuntimeReady;
- (void)ensureRealtimeReady;
- (void)finishStartIfPossible;
- (void)failStartWithErrorMessage:(id)arg1;
- (void)stopRealtimeConnection;
- (void)destroy;
- (void)bindHostViewController:(id)arg1;
- (void)refreshContact:(id)arg1;
- (void)updateTaskRunningState:(unsigned long long)arg1;
- (id)consumePendingToolCallSessionId;
- (void)beginRealtimeKeepAlive;
- (void)cancelRealtimeKeepAlive;
- (void)cancelKeepAliveTimerOnly;
- (BOOL)expireRealtimeKeepAliveIfNeededOnForeground;
- (void)expireRealtimeKeepAlive;
- (void)notifyAgentPageVisibleWithContext:(id)arg1 isColdLaunch:(BOOL)arg2 openAgentScene:(unsigned long long)arg3 referrerAppId:(id)arg4;
- (void)notifyAgentPageClosed;
- (void)sendText:(id)arg1 methodData:(id)arg2 images:(id)arg3 fileItems:(id)arg4 agentContext:(id)arg5 isColdLaunch:(BOOL)arg6 openAgentScene:(unsigned long long)arg7 sourceAppId:(id)arg8;
- (void)sendRecordStartWithMedia:(BOOL)arg1 isColdLaunch:(BOOL)arg2 openAgentScene:(unsigned long long)arg3;
- (void)sendRecordEnd;
- (void)sendRecordAsrText:(id)arg1 images:(id)arg2 fileItems:(id)arg3;
- (void)cancelRecord;
- (void)cancelAgentSpeaking;
- (void)executeWhenRealtimeReady:(id /* block */)arg1 cancellation:(id /* block */)arg2;
- (void)executePageVisibleOperationWhenRealtimeReady:(id /* block */)arg1 generation:(unsigned long long)arg2;
- (void)cancelPendingPageVisibleOperation;
- (void)cancelPendingPageCloseOperation;
- (BOOL)hasPendingRealtimeOperationRequiringConnection;
- (void)flushPendingRealtimeOperations;
- (void)cancelPendingRealtimeOperations;
- (void)agentVoIPSessionDidConnect:(id)arg1;
- (void)agentVoIPSessionDidEnd:(id)arg1;
- (void)handleRealtimeSessionEnded:(id)arg1 errorMsg:(id)arg2;
- (void)agentVoIPSession:(id)arg1 didReceiveEvent:(id)arg2;
- (void)agentVoIPSession:(id)arg1 didReceiveAsrData:(id)arg2;
- (void)audioDeviceInputMeterLevel:(id)arg1 Peak:(float)arg2;
- (void)onUpstreamMessage:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4 toolCallClientProfile:(id)arg5 completion:(id /* block */)arg6;
- (void)onFollowupMessage:(id)arg1 sessionId:(id)arg2 method:(id)arg3 params:(id)arg4 appId:(id)arg5;
- (void)onCardRenderError:(id)arg1;
- (void)onBizUnavailable;
- (void)specializedAgentPipeline:(id)arg1 didAssembleUploadEvent:(id)arg2;
- (void)notifyUpstreamSendFailedForEvent:(id)arg1 reason:(id)arg2;
- (void)notifyUpstreamSendFailedForEventType:(int)arg1 reason:(id)arg2;
- (void)specializedAgentPipeline:(id)arg1 didStartImageUploadWithEventId:(id)arg2 appId:(id)arg3 imageCount:(unsigned int)arg4;
- (void)specializedAgentPipeline:(id)arg1 didCompleteImageUploadWithEventId:(id)arg2 appId:(id)arg3 costTimeMs:(unsigned int)arg4 imageCount:(unsigned int)arg5 isSuccess:(BOOL)arg6 errorMessage:(id)arg7;
- (void)scheduleRealtimeReconnectIfNeeded;
- (id)agentReportContext;
- (void)reportVoIPConnectedIfNeeded:(BOOL)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)reportVoIPDisconnectedWithReason:(id)arg1;
- (void)updateConnectionState:(unsigned long long)arg1 errorMsg:(id)arg2;
- (void)updateChannelReady:(BOOL)arg1;
- (id)businessString;
- (id)hostAppId;
- (void)setHostAppId:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)sceneHandle;
- (void)setSceneHandle:(id)arg1;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (id)upstreamPipeline;
- (void)setUpstreamPipeline:(id)arg1;
- (unsigned long long)connectionState;
- (void)setConnectionState:(unsigned long long)arg1;
- (BOOL)isChannelReady;
- (void)setChannelReady:(BOOL)arg1;
- (BOOL)isRealtimeReady;
- (void)setRealtimeReady:(BOOL)arg1;
- (BOOL)isRuntimeReady;
- (void)setRuntimeReady:(BOOL)arg1;
- (BOOL)isPermanentlyDestroyed;
- (void)setPermanentlyDestroyed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)coreService;
- (void)setCoreService:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (id)channelReportContext;
- (void)setChannelReportContext:(id)arg1;
- (BOOL)pageVisible;
- (void)setPageVisible:(BOOL)arg1;
- (unsigned long long)pageVisibilityGeneration;
- (void)setPageVisibilityGeneration:(unsigned long long)arg1;
- (id)startCompletions;
- (void)setStartCompletions:(id)arg1;
- (id)pendingRealtimeOperations;
- (void)setPendingRealtimeOperations:(id)arg1;
- (id /* block */)pendingPageVisibleOperation;
- (void)setPendingPageVisibleOperation:(id /* block */)arg1;
- (id /* block */)pendingPageCloseOperation;
- (void)setPendingPageCloseOperation:(id /* block */)arg1;
- (id)keepAliveTimer;
- (void)setKeepAliveTimer:(id)arg1;
- (double)keepAliveDeadline;
- (void)setKeepAliveDeadline:(double)arg1;
- (unsigned long long)voipConnectStartTsMs;
- (void)setVoipConnectStartTsMs:(unsigned long long)arg1;
- (BOOL)didReportVoIPConnected;
- (void)setDidReportVoIPConnected:(BOOL)arg1;
- (BOOL)isWaitingBizReadyReport;
- (void)setIsWaitingBizReadyReport:(BOOL)arg1;
- (BOOL)isRecording;
- (void)setRecording:(BOOL)arg1;
- (unsigned long long)realtimeReconnectCount;
- (void)setRealtimeReconnectCount:(unsigned long long)arg1;
- (id)lastToolCallSessionId;
- (void)setLastToolCallSessionId:(id)arg1;
- (void).cxx_destruct;
@end
