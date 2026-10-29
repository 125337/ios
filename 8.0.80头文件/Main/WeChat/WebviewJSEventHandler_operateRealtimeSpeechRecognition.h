@interface WebviewJSEventHandler_operateRealtimeSpeechRecognition : WebviewJSEventHandlerBase <VoiceTransLogicObserver>
{
    BOOL _pendingStop; // +0x8
    NSString * _sessionId; // +0x10
    VoiceTransLogic * _voiceTransLogic; // +0x18
    MMSystemAuthCancellableToken * _authToken; // +0x20
    unsigned long long _sessionState; // +0x28
    long long _scene; // +0x30
    NSString * _stopIntent; // +0x38
    NSString * _inputModeSessionId; // +0x40
    NSString * _inputPanelEventSessionId; // +0x48
    NSString * _requestedInputMode; // +0x50
    UIImpactFeedbackGenerator * _impactFeedback; // +0x58
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handleStartWithEvent:(id)arg1;
- (void)handleStopWithEvent:(id)arg1;
- (void)handleCancelWithEvent:(id)arg1;
- (void)handleTouchButtonWithEvent:(id)arg1;
- (void)handleSetInputModeWithEvent:(id)arg1;
- (unsigned long long)microphoneAuthSceneForVoiceScene:(long long)arg1;
- (void)requestPermissionAndStartForSessionId:(id)arg1;
- (void)startRecognitionForSessionId:(id)arg1;
- (double)voiceTransCheckMeterInterval;
- (void)onVoiceTransBegan:(id)arg1;
- (void)onVoiceTransLevelMeter:(float)arg1;
- (void)onVoiceTransResultChange;
- (void)onVoiceTransDidEnd:(int)arg1;
- (void)onVoiceTransFail:(long long)arg1;
- (void)onVoiceTransInterrupted;
- (BOOL)validateSessionForEvent:(id)arg1;
- (BOOL)validateInputModeSessionForEvent:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)sendInputPanelChangeWithMode:(id)arg1 height:(double)arg2 animationDuration:(double)arg3 animationCurve:(long long)arg4;
- (void)finishSessionWithErrorCode:(long long)arg1 message:(id)arg2 extraParams:(id)arg3;
- (void)finishSessionWithState:(id)arg1 params:(id)arg2;
- (void)triggerImpactFeedback;
- (void)sendState:(id)arg1 params:(id)arg2;
- (void)callbackOKEvent:(id)arg1 extraParams:(id)arg2;
- (void)callbackFailEvent:(id)arg1 code:(long long)arg2 message:(id)arg3;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)voiceTransLogic;
- (void)setVoiceTransLogic:(id)arg1;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (unsigned long long)sessionState;
- (void)setSessionState:(unsigned long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)stopIntent;
- (void)setStopIntent:(id)arg1;
- (id)inputModeSessionId;
- (void)setInputModeSessionId:(id)arg1;
- (id)inputPanelEventSessionId;
- (void)setInputPanelEventSessionId:(id)arg1;
- (id)requestedInputMode;
- (void)setRequestedInputMode:(id)arg1;
- (id)impactFeedback;
- (void)setImpactFeedback:(id)arg1;
- (BOOL)pendingStop;
- (void)setPendingStop:(BOOL)arg1;
- (void).cxx_destruct;
@end
