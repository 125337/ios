@interface _TtC6WeChat36SearchInteractiveVoiceInputViewModel : NSObject <IStreamVoiceInputExt, INetworkStatusMgrExt>
{
     _hideStartButton; // +0x0
     _keyboardHeight; // +0x0
     _buttonBackgroundColor; // +0x0
     _panLocation; // +0x0
     _ellipseButtonState; // +0x0
     _peakPower; // +0x0
     rightOpType; // +0x0
     rightOpWording; // +0x0
     resultButtonType; // +0x0
     delegate; // +0x0
     startButtonFrame; // +0x0
     _state; // +0x0
     _activeButtonType; // +0x0
     _isUserHolding; // +0x0
     _isTranslatingVoiceToText; // +0x0
     _reset; // +0x0
     isCancelled; // +0x0
     isReleasedTooFast; // +0x0
     subscriptions; // +0x0
     recordStartTime; // +0x0
     recordEndTime; // +0x0
     inputLogicDic; // +0x0
     currentInputLogic; // +0x0
     resultDataArray; // +0x0
     reporter; // +0x0
     voiceIdArray; // +0x0
}
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)resetStateToIdle;
- (BOOL)hideStartButton;
- (void)setHideStartButton:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)buttonBackgroundColor;
- (void)setButtonBackgroundColor:(id)arg1;
- (long long)rightOpType;
- (void)setRightOpType:(long long)arg1;
- (id)rightOpWording;
- (void)setRightOpWording:(id)arg1;
- (long long)resultButtonType;
- (void)setResultButtonType:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)getCurrentResultText;
- (id)getCurrentExposeId;
- (void).cxx_destruct;
@end
