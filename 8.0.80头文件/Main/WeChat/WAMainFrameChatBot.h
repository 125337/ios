@interface WAMainFrameChatBot : NSObject <IChatBotVoIPSessionDelegate, ChatBotHeadlessAccountClearHandler>
{
    BOOL _micReady; // +0x8
    BOOL _sessionActive; // +0x9
    BOOL _waitingFCDecision; // +0xa
    BOOL _useGen2Headless; // +0xb
    BOOL _gen2ResultDispatched; // +0xc
    BOOL _gen2MicReady; // +0xd
    BOOL _gen2PresentInvoked; // +0xe
    id /* block */ _onMicReady; // +0x10
    id /* block */ _onEnterProcessing; // +0x18
    id /* block */ _onPresentHalfScreenDone; // +0x20
    id /* block */ _halfScreenPresentFromVCProvider; // +0x28
    id /* block */ _onHalfScreenDismissed; // +0x30
    id /* block */ _onSessionEnded; // +0x38
    id /* block */ _onSessionStarted; // +0x40
    id /* block */ _srcInfoParamsProvider; // +0x48
    NSString * _sessionEndErrorMsg; // +0x50
    long long _gen2SessionEndDecision; // +0x58
    NSString * _voipSessionID; // +0x60
    ChatBotVoIPSession * _session; // +0x68
    NSMutableString * _asrText; // +0x70
    NSMutableString * _aiReplyText; // +0x78
    NSNumber * _fcShowDecision; // +0x80
    MMTimer * _processingTimeoutTimer; // +0x88
    unsigned long long _gen2RoundId; // +0x90
    WAMainFrameChatBotGen2ObserverTrampoline * _gen2ObserverTrampoline; // +0x98
    CBTHeadlessVoiceObserver * _gen2ObserverWrapper; // +0xa0
}
+ (BOOL)isGen2ASRFailureMessage:(id)arg1;
- (id)init;
- (void)onHeadlessAccountClear;
- (void)dealloc;
- (void)start;
- (void)submitVoice;
- (void)cancel;
- (BOOL)shouldPresentXiaoWeiVC;
- (void)finishWithReason:(long long)arg1;
- (void)finishWithReason:(long long)arg1 errorMsg:(id)arg2;
- (void)detachSession;
- (BOOL)isSessionActive;
- (void)registerHalfScreenDecisionHandler;
- (void)handleHeadlessResult:(BOOL)arg1 errorMsg:(id)arg2;
- (void)presentXiaoWeiHalfScreen;
- (void)onRecvStreamText:(id)arg1 textSeq:(int)arg2 textOutputSource:(int)arg3 identifier:(id)arg4 traceMsgid:(id)arg5 appTraceId:(id)arg6;
- (void)startProcessingTimeoutTimer;
- (void)onProcessingTimeoutTimer:(id)arg1;
- (void)stopProcessingTimeoutTimer;
- (void)ensureGen2ObserverAttached;
- (void)registerGen2PresentFromVCProvider;
- (id)gen2ConfigData;
- (void)startGen2Headless;
- (void)submitVoiceGen2;
- (void)cancelGen2;
- (void)registerGen2HalfScreenPageCallbacks;
- (void)handleGen2StateChanged:(unsigned long long)arg1 state:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)dispatchGen2State:(int)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)onGen2MicReady;
- (void)onGen2AcceptedWithStateMsg:(id)arg1;
- (void)onGen2Failed:(int)arg1 errMsg:(id)arg2;
- (void)gen2FinishWithResult:(long long)arg1 networkStage:(long long)arg2 endReason:(long long)arg3 errMsg:(id)arg4;
- (void)gen2ResetRoundState;
- (id /* block */)onMicReady;
- (void)setOnMicReady:(id /* block */)arg1;
- (id /* block */)onEnterProcessing;
- (void)setOnEnterProcessing:(id /* block */)arg1;
- (id /* block */)onPresentHalfScreenDone;
- (void)setOnPresentHalfScreenDone:(id /* block */)arg1;
- (id /* block */)halfScreenPresentFromVCProvider;
- (void)setHalfScreenPresentFromVCProvider:(id /* block */)arg1;
- (id /* block */)onHalfScreenDismissed;
- (void)setOnHalfScreenDismissed:(id /* block */)arg1;
- (id /* block */)onSessionEnded;
- (void)setOnSessionEnded:(id /* block */)arg1;
- (id /* block */)onSessionStarted;
- (void)setOnSessionStarted:(id /* block */)arg1;
- (id /* block */)srcInfoParamsProvider;
- (void)setSrcInfoParamsProvider:(id /* block */)arg1;
- (id)sessionEndErrorMsg;
- (void)setSessionEndErrorMsg:(id)arg1;
- (long long)gen2SessionEndDecision;
- (void)setGen2SessionEndDecision:(long long)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)asrText;
- (void)setAsrText:(id)arg1;
- (id)aiReplyText;
- (void)setAiReplyText:(id)arg1;
- (BOOL)micReady;
- (void)setMicReady:(BOOL)arg1;
- (BOOL)sessionActive;
- (void)setSessionActive:(BOOL)arg1;
- (BOOL)waitingFCDecision;
- (void)setWaitingFCDecision:(BOOL)arg1;
- (id)fcShowDecision;
- (void)setFcShowDecision:(id)arg1;
- (id)processingTimeoutTimer;
- (void)setProcessingTimeoutTimer:(id)arg1;
- (BOOL)useGen2Headless;
- (void)setUseGen2Headless:(BOOL)arg1;
- (unsigned long long)gen2RoundId;
- (void)setGen2RoundId:(unsigned long long)arg1;
- (BOOL)gen2ResultDispatched;
- (void)setGen2ResultDispatched:(BOOL)arg1;
- (BOOL)gen2MicReady;
- (void)setGen2MicReady:(BOOL)arg1;
- (BOOL)gen2PresentInvoked;
- (void)setGen2PresentInvoked:(BOOL)arg1;
- (id)gen2ObserverTrampoline;
- (void)setGen2ObserverTrampoline:(id)arg1;
- (id)gen2ObserverWrapper;
- (void)setGen2ObserverWrapper:(id)arg1;
- (void).cxx_destruct;
@end
