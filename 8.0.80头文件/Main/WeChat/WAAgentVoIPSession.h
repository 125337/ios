@interface WAAgentVoIPSession : NSObject <IChatBotVoIPSessionDelegate>
{
    BOOL _isDestroyed; // +0x8
    int _openScene; // +0xc
    int _bizType; // +0x10
    id <WAAgentVoIPSessionDelegate> _delegate; // +0x18
    NSString * _voipSessionId; // +0x20
    NSString * _identifier; // +0x28
    NSString * _appId; // +0x30
    NSString * _businessString; // +0x38
    ChatBotVoIPSession * _session; // +0x40
    long long _state; // +0x48
    MMUIViewController * _hostViewController; // +0x50
}
- (id)initWithVoIPSessionId:(id)arg1 identifier:(id)arg2 appId:(id)arg3 businessString:(id)arg4;
- (BOOL)isConnected;
- (BOOL)isTerminated;
- (void)dealloc;
- (BOOL)start;
- (void)bindHostViewController:(id)arg1;
- (void)destroy;
- (BOOL)sendClient2AgentEvent:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)sendRawContent:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)sendCommandWithId:(unsigned int)arg1 content:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelAgentSpeaking;
- (void)activateAudioSession;
- (void)setMuteMicrophone:(BOOL)arg1;
- (void)setMuteMicrophone:(BOOL)arg1 needFullDuplex:(BOOL)arg2 forbidSendMicStatus:(BOOL)arg3;
- (void)cancelPendingVoiceASR;
- (void)fillCommonFieldsForEvent:(id)arg1;
- (void)onTalkSucc;
- (void)onCallEnd;
- (void)onShowLinkErrMsg:(int)arg1 errorCode:(int)arg2;
- (void)onRecvToCliInfo:(id)arg1 openScene:(int)arg2 msgID:(unsigned long long)arg3;
- (void)onRecvVoIPAsrInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (id)voipSessionId;
- (void)setVoipSessionId:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)businessString;
- (void)setBusinessString:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (BOOL)isDestroyed;
- (void)setIsDestroyed:(BOOL)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (void).cxx_destruct;
@end
