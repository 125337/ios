@interface WAMiniToolAgentChannel : NSObject <WAAgentVoIPSessionDelegate, WAAppTaskMgrExt>
{
    BOOL _realtimeReady; // +0x8
    BOOL _permanentlyDestroyed; // +0x9
    BOOL _sessionEstablishFailed; // +0xa
    BOOL _bubbleVisible; // +0xb
    BOOL _needsSendVisibleEvents; // +0xc
    NSString * _hostAppId; // +0x10
    NSString * _convoId; // +0x18
    WAContact * _contact; // +0x20
    id <WAMiniToolAgentChannelDelegate> _delegate; // +0x28
    WAAgentVoIPSession * _voipSession; // +0x30
    WAMiniToolAgentUpstreamPipeline * _upstreamPipeline; // +0x38
    MMUIViewController * _hostViewController; // +0x40
    NSMutableArray * _pendingOperations; // +0x48
    unsigned long long _reconnectCount; // +0x50
}
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)destroy;
- (void)bindHostViewController:(id)arg1;
- (void)refreshContact:(id)arg1;
- (void)notifyBubbleVisible;
- (void)sendRecordStart;
- (void)sendTurn;
- (void)finishRecord;
- (void)cancelRecord;
- (void)executeWhenRealtimeReady:(id /* block */)arg1 cancellation:(id /* block */)arg2;
- (void)flushPendingOperations;
- (void)cancelPendingOperations;
- (void)sendBubbleVisibleEventsIfNeeded;
- (void)notifyUpstreamSendFailedWithReason:(id)arg1;
- (void)updateRealtimeReady:(BOOL)arg1;
- (void)scheduleReconnectIfNeeded;
- (void)agentVoIPSessionDidConnect:(id)arg1;
- (void)agentVoIPSessionDidEnd:(id)arg1;
- (void)handleSessionEnded:(id)arg1 reason:(id)arg2;
- (void)agentVoIPSession:(id)arg1 didReceiveRawContent:(id)arg2;
- (void)agentVoIPSession:(id)arg1 didReceiveAsrData:(id)arg2;
- (void)onAppTaskTerminate:(id)arg1;
- (id)sessionKV;
- (id)sessionState;
- (void)persistSessionState:(id)arg1;
- (void)persistConvoId;
- (id)persistedConvoId;
- (BOOL)willReuseConvoIdOnBubbleVisible;
- (id)reusableConvoIdForBubbleVisible;
- (id)businessString;
- (id)hostAppId;
- (void)setHostAppId:(id)arg1;
- (id)convoId;
- (void)setConvoId:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isRealtimeReady;
- (void)setRealtimeReady:(BOOL)arg1;
- (BOOL)isPermanentlyDestroyed;
- (void)setPermanentlyDestroyed:(BOOL)arg1;
- (BOOL)isSessionEstablishFailed;
- (void)setSessionEstablishFailed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (id)upstreamPipeline;
- (void)setUpstreamPipeline:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (BOOL)bubbleVisible;
- (void)setBubbleVisible:(BOOL)arg1;
- (BOOL)needsSendVisibleEvents;
- (void)setNeedsSendVisibleEvents:(BOOL)arg1;
- (id)pendingOperations;
- (void)setPendingOperations:(id)arg1;
- (unsigned long long)reconnectCount;
- (void)setReconnectCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
