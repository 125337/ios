@interface ChatBotAsstVoIPManager : MMUserService <MMServiceProtocol, IMsgExt, CBTAsstVoIPNativeControllerBase, IChatbotAudioStateExt>
{
    NSString * _pendingAsstVoIPCallId; // +0x8
    NSString * _pendingAsstVoIPSessionId; // +0x10
    ChatBotAsstVoIPFlutterShell * _flutterShell; // +0x18
    CBTAsstVoIPNativeControllerCallback * _nativeCallback; // +0x20
    CBTAsstVoIPNativeController * _nativeController; // +0x28
    RingBackSoundCoordinator * _asstVoIPRingCoordinator; // +0x30
    ChatBotVoIPSession * _asstVoIPSession; // +0x38
    AsstVoIPCallContext * _currentCallContext; // +0x40
}
+ (id)serviceIdentifier;
- (void)onServiceInit;
- (void)onServiceAfterInit;
- (void)onServiceClearData;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)isInAsstVoIPCall;
- (id)currentVoIPSessionID;
- (void)launchFlutterWithCallId:(id)arg1 displayMode:(int)arg2;
- (void)dismissFlutterForCallId:(id)arg1;
- (id)startAsstVoIPSessionAndNotifyWithCallId:(id)arg1;
- (void)flushPendingAsstVoIPNotifyIfNeeded;
- (void)resetAsstVoIPInComingStateForCallId:(id)arg1;
- (void)sendAsstVoIPEndSignalWithCallId:(id)arg1;
- (void)setCallback:(id)arg1;
- (void)launchFlutterAsync:(unsigned long long)arg1 callContext:(id)arg2;
- (void)dismissFlutterAsync:(unsigned long long)arg1 callId:(id)arg2;
- (void)onCallContextChangedAsync:(unsigned long long)arg1 callContext:(id)arg2;
- (void)playRingAsync:(unsigned long long)arg1;
- (void)stopRingAsync:(unsigned long long)arg1;
- (void)setAudioActiveAsync:(unsigned long long)arg1 active:(BOOL)arg2;
- (void)getAvailableAudioRoutesAsync:(unsigned long long)arg1;
- (void)switchAudioRouteAsync:(unsigned long long)arg1 audioRoute:(int)arg2;
- (void)dismissLCKAsync:(unsigned long long)arg1 callId:(id)arg2;
- (void)setAudioCategoryAsync:(unsigned long long)arg1 callContext:(id)arg2;
- (void)startSessionAsync:(unsigned long long)arg1 callContext:(id)arg2;
- (void)onAudioStartStateChange:(long long)arg1 error:(id)arg2;
- (void)onRecordStartStateChange:(long long)arg1 error:(id)arg2;
- (void)onTTSPlayStateChanged:(BOOL)arg1;
- (void)setAsstVoIPAudioActive:(BOOL)arg1;
- (void)playAsstVoIPRing;
- (void)stopAsstVoIPRing;
- (id)pendingAsstVoIPCallId;
- (void)setPendingAsstVoIPCallId:(id)arg1;
- (id)pendingAsstVoIPSessionId;
- (void)setPendingAsstVoIPSessionId:(id)arg1;
- (id)flutterShell;
- (void)setFlutterShell:(id)arg1;
- (id)nativeCallback;
- (void)setNativeCallback:(id)arg1;
- (id)nativeController;
- (void)setNativeController:(id)arg1;
- (id)asstVoIPRingCoordinator;
- (void)setAsstVoIPRingCoordinator:(id)arg1;
- (id)asstVoIPSession;
- (void)setAsstVoIPSession:(id)arg1;
- (id)currentCallContext;
- (void)setCurrentCallContext:(id)arg1;
- (void).cxx_destruct;
@end
