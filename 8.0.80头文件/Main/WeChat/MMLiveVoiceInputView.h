@interface MMLiveVoiceInputView : UIView <IStreamVoiceInputExt, StreamVoiceInputControlViewDelegate, INetworkStatusMgrExt, WCActionSheetDelegate>
{
    unsigned int _curInputLanguageType; // +0x8
    id <MMLiveVoiceInputViewDelegate> _delegate; // +0x10
    MMUILabel * _pressToInputLabel; // +0x18
    MMUIButton * _closeBtn; // +0x20
    MMUIButton * _cancelBtn; // +0x28
    MMUIButton * _sendBtn; // +0x30
    UIButton * _languageBtn; // +0x38
    StreamVoiceInputControlView * _voiceInputCtrlBtn; // +0x40
    StreamVoiceInputLogic * _voiceInputLogic; // +0x48
    NSString * _lastVoiceInputResult; // +0x50
    long long _inputStatus; // +0x58
    unsigned long long _currentInputId; // +0x60
}
- (id)init;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)layoutInputCtrlBtn;
- (void)layoutLanguageBtn;
- (void)updateLanguageBtn:(id)arg1;
- (void)layoutCloseBtn;
- (void)layoutPressToInputLabel;
- (void)layoutSendAndCancelBtn;
- (void)lazyRefresh;
- (void)resetStatus;
- (void)createInputCtrlBtnIfNeeded;
- (void)createLanguageBtnIfNeeded;
- (void)createCloseBtnIfNeeded;
- (void)createPressToInputLabelIfNeeded;
- (void)createCancelBtnIfNeeded;
- (void)createSendBtnIfNeeded;
- (BOOL)isRecording;
- (void)updateUIComponentsFade:(BOOL)arg1;
- (void)userTryToRecord;
- (void)userTryToEndRecord;
- (void)doCancelWithResetResult:(BOOL)arg1;
- (void)updateVoiceInputResult:(id)arg1;
- (BOOL)shouldShowLanguageSwitchButton;
- (id)getSelectedLanguageName;
- (void)showLanguageSelectView;
- (double)preferHeight;
- (BOOL)isUsingPortraitLayoutStyle;
- (void)onCloseBtnClicked;
- (void)onCancelBtnClicked;
- (void)onSendBtnClicked;
- (void)userDidHoldBegin;
- (void)userDidHoldEnd:(BOOL)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pressToInputLabel;
- (void)setPressToInputLabel:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)sendBtn;
- (void)setSendBtn:(id)arg1;
- (id)languageBtn;
- (void)setLanguageBtn:(id)arg1;
- (id)voiceInputCtrlBtn;
- (void)setVoiceInputCtrlBtn:(id)arg1;
- (id)voiceInputLogic;
- (void)setVoiceInputLogic:(id)arg1;
- (id)lastVoiceInputResult;
- (void)setLastVoiceInputResult:(id)arg1;
- (long long)inputStatus;
- (void)setInputStatus:(long long)arg1;
- (unsigned long long)currentInputId;
- (void)setCurrentInputId:(unsigned long long)arg1;
- (unsigned int)curInputLanguageType;
- (void)setCurInputLanguageType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
