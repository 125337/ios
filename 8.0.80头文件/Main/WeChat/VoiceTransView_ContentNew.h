@interface VoiceTransView_ContentNew : UIView <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, MMGrowTextViewDelegate>
{
    unsigned char _contentMode; // +0x8
    id <VoiceTransView_ContentDelegate> _delegate; // +0x10
    unsigned long long _recordState; // +0x18
    NSString * _displayText; // +0x20
    NSString * _translatedText; // +0x28
    MMGrowTextView * _textView; // +0x30
    VoiceTransView * _voiceTransView; // +0x38
    UIView * _bottomView; // +0x40
    SightIconView * _preparingView; // +0x48
    EmitterTextViewV2 * _emitTextView; // +0x50
    UIView * _caretView; // +0x58
    UIButton * _cancelButton; // +0x60
    UIButton * _sendButton; // +0x68
    UIView * _toolView; // +0x70
    MMUIButton * _expressionButton; // +0x78
    EmoticonBoardView * _expressionView; // +0x80
    double _keyboardHeight; // +0x88
    double _keyboardAnimationDuration; // +0x90
    long long _keyboardAnimationCurve; // +0x98
}
- (id)initWithBottomView:(id)arg1 voiceTransView:(id)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)changeRecordStateTo:(unsigned long long)arg1;
- (void)updateSubviews;
- (void)setBubbleBackgroundColor:(id)arg1;
- (void)setTranslatedText:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)beginExit;
- (void)beginEditing;
- (double)textViewBottom;
- (BOOL)textViewHasMultiLines;
- (void)layoutUI;
- (void)updateUI;
- (id)generateAttrTextFrom:(id)arg1 color:(id)arg2;
- (void)cancelCheckDisplayText;
- (void)checkDisplayText;
- (void)_flushText:(id)arg1;
- (id)preparingView;
- (id)emitTextView;
- (id)textView;
- (id)cancelButton;
- (id)sendButton;
- (void)onClickCancelButton;
- (void)onClickSendButton;
- (void)initToolView;
- (void)initExpressionButton;
- (void)initEmoticonView;
- (void)onExpressionButtonClicked;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)setContentMode:(unsigned char)arg1 animated:(BOOL)arg2;
- (void)updateTextViewLayout;
- (void)updateToolViewLayout;
- (double)getToolViewHeight;
- (void)ensureTextVisible;
- (void)onSendButtonClicked;
- (void)didSelectorEmoticon:(id)arg1;
- (void)deleteEmoticon;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)recordState;
- (void)setRecordState:(unsigned long long)arg1;
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (id)translatedText;
- (void)setTextView:(id)arg1;
- (id)voiceTransView;
- (void)setVoiceTransView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void)setPreparingView:(id)arg1;
- (void)setEmitTextView:(id)arg1;
- (id)caretView;
- (void)setCaretView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setSendButton:(id)arg1;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)expressionView;
- (void)setExpressionView:(id)arg1;
- (unsigned char)contentMode;
- (void)setContentMode:(unsigned char)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (double)keyboardAnimationDuration;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (long long)keyboardAnimationCurve;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (void).cxx_destruct;
@end
