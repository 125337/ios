@interface MMVoiceTransView : UIView <IAudioSenderExt, InputControllerDelegate, VoiceTransLanguageSelectViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _bShowingEmoj; // +0x8
    BOOL _bIsEditingMode; // +0x9
    BOOL _bIsForceEndTrans; // +0xa
    unsigned int _currentInputId; // +0xc
    unsigned int _inputLanguageType; // +0x10
    unsigned int _translatingWordingIndex; // +0x14
    NSString * _chatUserName; // +0x18
    AudioRecorderUserData * _userData; // +0x20
    id <MMVoiceTransViewDelegate> _delegate; // +0x28
    MMNewVoiceInputReportObj * _reportObj; // +0x30
    unsigned long long _transState; // +0x38
    UIImage * _stickerImage; // +0x40
    UIImage * _stickerHLImage; // +0x48
    UIImage * _keyboradImage; // +0x50
    UIImage * _keyboradHLImage; // +0x58
    UIButton * _sendButton; // +0x60
    MMUIButton * _cancelButton; // +0x68
    MMUIButton * _endEditButton; // +0x70
    UIView * _operatePanelView; // +0x78
    MMUIButton * _expressionButton; // +0x80
    MMUIButton * _languageSwitchBtn; // +0x88
    UIButton * _sendOriVoiceMsgBtn; // +0x90
    MMGrowTextView * _transTextView; // +0x98
    WCInputController * _inputController; // +0xa0
    EmoticonBoardView * _emoticonBoardView; // +0xa8
    VoiceTransLanguageSelectView * _languageSelectView; // +0xb0
    UIPanGestureRecognizer * _panGestureRecognizer; // +0xb8
    MMTimer * _timer; // +0xc0
    NSString * _translatedText; // +0xc8
    NSString * _translatingWording; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1 ChatName:(id)arg2;
- (void)dealloc;
- (id)stickerImage;
- (id)stickerHLImage;
- (id)keyboradImage;
- (id)keyboradHLImage;
- (id)transTextView;
- (id)cancelButton;
- (id)sendButton;
- (id)sendOriVoiceMsgBtn;
- (id)expressionButton;
- (id)languageSwitchBtn;
- (id)languageSelectView;
- (id)operatePanelView;
- (id)endEditButton;
- (unsigned int)inputLanguageType;
- (void)initInputController;
- (void)initEmoticonView;
- (void)initPanGestureRecognizer;
- (void)resetState;
- (void)displayResultText;
- (void)startShowTranslatingWording;
- (void)delayCheckTransResult;
- (void)changeToTranslatingState;
- (void)checkChangeTranslatingWording;
- (void)changeTranslatingWording:(id)arg1;
- (unsigned int)getUncertainLength;
- (unsigned int)getSuffixDotCountWithString:(id)arg1;
- (BOOL)CTRectContainsPointError:(CGRect)arg1 point:(CGPoint)arg2 error:(double)arg3;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(unsigned int)arg2 TranslatingWording:(id)arg3;
- (void)updateSwitchBtn;
- (void)onClickSendOriMsgBtn;
- (void)onSendBtnClick:(id)arg1;
- (void)onCancelBtnClick:(id)arg1;
- (void)onEndEditButtonClick:(id)arg1;
- (void)onLanguageSwitchBtnClick:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)makeTransStop;
- (void)onPanGestureRecognizerAction:(id)arg1;
- (void)onPanRecognizerStateChanged:(double)arg1 CurrentPositionY:(double)arg2 TopAtPanBegin:(double)arg3;
- (void)onTextViewPanRecognizerStateChanged:(double)arg1 CurrentPositionY:(double)arg2 TopAtPanBegin:(double)arg3;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)OnVoiceTransTimeout:(unsigned int)arg1;
- (void)OnVoiceTransResultChange:(id)arg1 InputId:(unsigned int)arg2;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (double)getVisibleHeight;
- (void)didCommitText:(id)arg1;
- (void)adaptTransTextViewHeightWithKeyboardHeight:(double)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)onCurInputLanguageChange:(unsigned int)arg1;
- (unsigned int)currentInputId;
- (void)setCurrentInputId:(unsigned int)arg1;
- (void)setInputLanguageType:(unsigned int)arg1;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (unsigned long long)transState;
- (void)setTransState:(unsigned long long)arg1;
- (void)setStickerImage:(id)arg1;
- (void)setStickerHLImage:(id)arg1;
- (void)setKeyboradImage:(id)arg1;
- (void)setKeyboradHLImage:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setEndEditButton:(id)arg1;
- (void)setOperatePanelView:(id)arg1;
- (void)setExpressionButton:(id)arg1;
- (void)setLanguageSwitchBtn:(id)arg1;
- (void)setSendOriVoiceMsgBtn:(id)arg1;
- (void)setTransTextView:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setLanguageSelectView:(id)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)translatedText;
- (void)setTranslatedText:(id)arg1;
- (id)translatingWording;
- (void)setTranslatingWording:(id)arg1;
- (BOOL)bShowingEmoj;
- (void)setBShowingEmoj:(BOOL)arg1;
- (BOOL)bIsEditingMode;
- (void)setBIsEditingMode:(BOOL)arg1;
- (BOOL)bIsForceEndTrans;
- (void)setBIsForceEndTrans:(BOOL)arg1;
- (unsigned int)translatingWordingIndex;
- (void)setTranslatingWordingIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end

