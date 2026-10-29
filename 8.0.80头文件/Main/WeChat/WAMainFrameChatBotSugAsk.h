@interface WAMainFrameChatBotSugAsk : NSObject <ChatBotHeadlessAccountClearHandler>
{
    BOOL _lastRoundKeptReuse; // +0x8
    BOOL _launchInitiated; // +0x9
    BOOL _completionFired; // +0xa
    BOOL _presentInitiated; // +0xb
    BOOL _lastRoundPresented; // +0xc
    BOOL _useGen2TextRound; // +0xd
    id /* block */ _onSessionStarted; // +0x10
    id /* block */ _onDirectMiniAppDecided; // +0x18
    id /* block */ _onMiniAppLaunchSuccess; // +0x20
    ChatBotTaskBarReportContext * _halfScreenReportContext; // +0x28
    long long _state; // +0x30
    NSString * _lastSugText; // +0x38
    NSString * _voipSessionID; // +0x40
    id /* block */ _completion; // +0x48
    UIViewController * _fromVC; // +0x50
    MMTimer * _timer; // +0x58
    unsigned long long _roundGeneration; // +0x60
    unsigned long long _roundStartMs; // +0x68
    WAMainFrameChatBotCachedLocation * _roundUserLocation; // +0x70
    NSString * _gen2InstanceKey; // +0x78
    unsigned long long _gen2RoundId; // +0x80
    WAMainFrameChatBotSugAskGen2Trampoline * _gen2ObserverTrampoline; // +0x88
    CBTHeadlessVoiceObserver * _gen2ObserverWrapper; // +0x90
}
+ (id)sharedInstance;
- (long long)state;
- (void)onHeadlessAccountClear;
- (BOOL)lastRoundLaunchInitiated;
- (void)submitSugWithText:(id)arg1 bypass:(id)arg2 fromVC:(id)arg3 srcInfoParams:(id)arg4 userLocation:(id)arg5 completion:(id /* block */)arg6;
- (void)cancel;
- (void)notifyMiniAppLaunchInitiatedWithVoipSessionID:(id)arg1;
- (void)notifyMiniAppLaunchSucceededWithVoipSessionID:(id)arg1 appId:(id)arg2;
- (void)startRoundWithText:(id)arg1 bypass:(id)arg2 fromVC:(id)arg3 srcInfoParams:(id)arg4 userLocation:(id)arg5 completion:(id /* block */)arg6;
- (void)startMgrRoundWithText:(id)arg1 bypass:(id)arg2 fromVC:(id)arg3 srcInfoParams:(id)arg4;
- (void)handleDecision:(BOOL)arg1;
- (void)handleMgrResult:(BOOL)arg1 errorMsg:(id)arg2;
- (id)gen2ConfigDataWithText:(id)arg1 bypass:(id)arg2 srcInfoParams:(id)arg3;
- (void)registerGen2PresentFromVCProvider;
- (void)ensureGen2ObserverAttached;
- (void)startGen2TextRoundWithText:(id)arg1 bypass:(id)arg2 srcInfoParams:(id)arg3;
- (void)handleGen2StateChanged:(unsigned long long)arg1 state:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)dispatchGen2State:(int)arg1 errCode:(int)arg2 errMsg:(id)arg3;
- (void)onDecisionTimeout;
- (void)onOperationTimeout;
- (void)handleHalfScreenDismissed;
- (BOOL)tryRePresentKeptAliveHalfScreen;
- (BOOL)isHalfScreenSessionAlive;
- (BOOL)isPresentedHalfScreenAlive;
- (id)fallbackGen2InstanceKeyFromNavCache;
- (void)finishWithResult:(long long)arg1 stage:(long long)arg2 errorMsg:(id)arg3;
- (BOOL)isSessionLostError:(id)arg1;
- (void)startTimerWithInterval:(double)arg1 selector:(SEL)arg2;
- (void)invalidateTimer;
- (id /* block */)onSessionStarted;
- (void)setOnSessionStarted:(id /* block */)arg1;
- (id /* block */)onDirectMiniAppDecided;
- (void)setOnDirectMiniAppDecided:(id /* block */)arg1;
- (id /* block */)onMiniAppLaunchSuccess;
- (void)setOnMiniAppLaunchSuccess:(id /* block */)arg1;
- (BOOL)lastRoundKeptReuse;
- (void)setLastRoundKeptReuse:(BOOL)arg1;
- (id)halfScreenReportContext;
- (void)setHalfScreenReportContext:(id)arg1;
- (BOOL)launchInitiated;
- (void)setLaunchInitiated:(BOOL)arg1;
- (void)setState:(long long)arg1;
- (id)lastSugText;
- (void)setLastSugText:(id)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)completionFired;
- (void)setCompletionFired:(BOOL)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)presentInitiated;
- (void)setPresentInitiated:(BOOL)arg1;
- (unsigned long long)roundGeneration;
- (void)setRoundGeneration:(unsigned long long)arg1;
- (unsigned long long)roundStartMs;
- (void)setRoundStartMs:(unsigned long long)arg1;
- (id)roundUserLocation;
- (void)setRoundUserLocation:(id)arg1;
- (BOOL)lastRoundPresented;
- (void)setLastRoundPresented:(BOOL)arg1;
- (id)gen2InstanceKey;
- (void)setGen2InstanceKey:(id)arg1;
- (BOOL)useGen2TextRound;
- (void)setUseGen2TextRound:(BOOL)arg1;
- (unsigned long long)gen2RoundId;
- (void)setGen2RoundId:(unsigned long long)arg1;
- (id)gen2ObserverTrampoline;
- (void)setGen2ObserverTrampoline:(id)arg1;
- (id)gen2ObserverWrapper;
- (void)setGen2ObserverWrapper:(id)arg1;
- (void).cxx_destruct;
@end
