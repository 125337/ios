@interface CBTHeadlessBridge : NSObject <IChatBotVoIPSessionDelegate>
{
    BOOL _sessionActive; // +0x8
    BOOL _needsAgentExecution; // +0x9
    BOOL _needsFCHalfScreenDecision; // +0xa
    BOOL _micReady; // +0xb
    BOOL _waitingResult; // +0xc
    BOOL _waitingASR; // +0xd
    int _cbtClientUiState; // +0x10
    int _appUiState; // +0x14
    id /* block */ _onMicReady; // +0x18
    id /* block */ _onEnterProcessing; // +0x20
    id /* block */ _onPresentHalfScreenDone; // +0x28
    id /* block */ _onSessionEnded; // +0x30
    id /* block */ _onASRRecognized; // +0x38
    id /* block */ _onASRFailed; // +0x40
    NSString * _voipSessionIDInternal; // +0x48
    ChatBotVoIPSession * _session; // +0x50
    NSMutableString * _asrText; // +0x58
    NSMutableString * _aiReplyText; // +0x60
    CBTASRBoard * _board; // +0x68
}
- (id)initWithCbClientUiState:(int)arg1 appUiState:(int)arg2 needsAgentExecution:(BOOL)arg3 needsFCHalfScreenDecision:(BOOL)arg4;
- (void)dealloc;
- (void)attachBoard:(id)arg1;
- (void)start;
- (void)submitVoice;
- (void)cancel;
- (void)fireMicReady;
- (void)fireEnterProcessing;
- (void)fireSessionStarted:(id)arg1;
- (void)firePresentHalfScreenDone;
- (void)fireSessionEnded:(long long)arg1;
- (void)finishWithReason:(long long)arg1;
- (void)detachSession;
- (BOOL)isSessionActive;
- (id)voipSessionID;
- (void)handleHeadlessResult:(BOOL)arg1 errorMsg:(id)arg2;
- (void)handleASRFailed:(id)arg1;
- (void)startASRWaitTimeoutTimer;
- (void)presentXiaoWeiHalfScreen;
- (void)onRecvStreamText:(id)arg1 textSeq:(int)arg2 textOutputSource:(int)arg3 identifier:(id)arg4 traceMsgid:(id)arg5 appTraceId:(id)arg6;
- (void)onRecvAsstCardWrap:(id)arg1 traceMsgid:(id)arg2 appTraceId:(id)arg3 storageInfo:(id)arg4;
- (void)handleASRTextArrived:(id)arg1;
- (int)cbtClientUiState;
- (int)appUiState;
- (BOOL)needsAgentExecution;
- (BOOL)needsFCHalfScreenDecision;
- (id /* block */)onMicReady;
- (void)setOnMicReady:(id /* block */)arg1;
- (id /* block */)onEnterProcessing;
- (void)setOnEnterProcessing:(id /* block */)arg1;
- (id /* block */)onPresentHalfScreenDone;
- (void)setOnPresentHalfScreenDone:(id /* block */)arg1;
- (id /* block */)onSessionEnded;
- (void)setOnSessionEnded:(id /* block */)arg1;
- (id /* block */)onASRRecognized;
- (void)setOnASRRecognized:(id /* block */)arg1;
- (id /* block */)onASRFailed;
- (void)setOnASRFailed:(id /* block */)arg1;
- (id)voipSessionIDInternal;
- (void)setVoipSessionIDInternal:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)asrText;
- (void)setAsrText:(id)arg1;
- (id)aiReplyText;
- (void)setAiReplyText:(id)arg1;
- (BOOL)micReady;
- (void)setMicReady:(BOOL)arg1;
- (BOOL)waitingResult;
- (void)setWaitingResult:(BOOL)arg1;
- (BOOL)waitingASR;
- (void)setWaitingASR:(BOOL)arg1;
- (id)board;
- (void)setBoard:(id)arg1;
- (void).cxx_destruct;
@end
