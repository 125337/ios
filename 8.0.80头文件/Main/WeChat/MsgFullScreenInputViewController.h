@interface MsgFullScreenInputViewController : MMUIViewController <MMDictationLogicIconDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, textViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate, WXKeyBoardActiveReceiver>
{
    BOOL _isInDismissState; // +0x70
    BOOL _showKeyboardWhenPresent; // +0x71
    BOOL _showEmoticonWhenPresent; // +0x72
    BOOL _dictationPendingSetText; // +0x73
    unsigned char _contentMode; // +0x74
    int _lastAttributeCount; // +0x78
    id <MsgFullScreenInputDelegate> _delegate; // +0x80
    double _keyboardHeight; // +0x88
    UIView * _containerView; // +0x90
    MMTextView * _textView; // +0x98
    MMUIButton * _exitButton; // +0xa0
    UIView * _toolView; // +0xa8
    MsgFullScreenInputConfig * _config; // +0xb0
    MMUIButton * _expressionButton; // +0xb8
    WXKeyBoardTipsView * _keyboardTipsView; // +0xc0
    EmoticonBoardView * _expressionView; // +0xc8
    MMDictationLogicIcon * _dictationIcon; // +0xd0
    double _keyboardAnimationDuration; // +0xd8
    long long _keyboardAnimationCurve; // +0xe0
    UIScreenEdgePanGestureRecognizer * _edgePanGesture; // +0xe8
    UIPanGestureRecognizer * _panGesture; // +0xf0
    UITapGestureRecognizer * _tapGesture; // +0xf8
}
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)backgroundView;
- (CGRect)containerViewFinalFrame;
- (CGRect)textViewFinalTransitionFrame;
- (void)initViews;
- (void)initContainerView;
- (void)initTextView;
- (void)initExitButton;
- (void)initToolView;
- (void)initExpressionButton;
- (void)initEmoticonView;
- (void)initDictationView;
- (void)updateDictaionLayout;
- (void)onExitButtonClicked;
- (void)onExpressionButtonClicked;
- (void)jumpToPlugin;
- (void)setContentMode:(unsigned char)arg1 animated:(BOOL)arg2;
- (double)getToolViewHeight;
- (void)updateTextViewLayout;
- (void)updateToolViewLayout;
- (BOOL)isUsingExternalKeyboard;
- (double)keyboardLayoutGuideHeight;
- (double)resolveKeyboardHeightWithNotificationHeight:(double)arg1;
- (void)syncKeyboardHeightWithLayoutGuideIfNeeded;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)inputAddTagStr;
- (void)onSendButtonClicked;
- (void)didSelectorEmoticon:(id)arg1;
- (void)deleteEmoticon;
- (BOOL)stopDictationForReason:(long long)arg1;
- (BOOL)stopDictationForReason:(long long)arg1 waitEndFlag:(BOOL)arg2;
- (void)MMDictationLogicIconWillStart;
- (void)MMDictationLogicIconWillStop;
- (_NSRange)MMDictationLogicIcon_selectedRange;
- (void)MMDictationLogicIcon_replaceRange:(_NSRange)arg1 withText:(id)arg2;
- (id)MMDictationLogicIcon_getChatName;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)supportMessageTypes;
- (unsigned int)activeScene;
- (void)sendMessage:(id)arg1;
- (BOOL)startDictationByKeyBoard;
- (BOOL)stopDictationByKeyBoard;
- (void)updateSelectedRange:(_NSRange)arg1;
- (void)ensureTextVisible;
- (void)insertString:(id)arg1;
- (BOOL)pretreatmentAttributedText;
- (void)doWXTagParse;
- (int)parseAndAppendTopicSearchAttributeds:(id)arg1;
- (id)topicTagAttributes;
- (void)textDidChangeNotification:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewMovingCursorBegan:(id)arg1;
- (void)textView:(id)arg1 cursorDidChangedOnTap:(_NSRange)arg2;
- (void)textViewDidTapped:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (unsigned long long)menuTypeForExtMenuAction:(SEL)arg1;
- (void)handleEdgePanGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)exitFullScreenInput:(BOOL)arg1;
- (BOOL)shouldDeleteLastCharacter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInDismissState;
- (void)setIsInDismissState:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)showKeyboardWhenPresent;
- (void)setShowKeyboardWhenPresent:(BOOL)arg1;
- (BOOL)showEmoticonWhenPresent;
- (void)setShowEmoticonWhenPresent:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (int)lastAttributeCount;
- (void)setLastAttributeCount:(int)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)keyboardTipsView;
- (void)setKeyboardTipsView:(id)arg1;
- (id)expressionView;
- (void)setExpressionView:(id)arg1;
- (id)dictationIcon;
- (void)setDictationIcon:(id)arg1;
- (BOOL)dictationPendingSetText;
- (void)setDictationPendingSetText:(BOOL)arg1;
- (unsigned char)contentMode;
- (void)setContentMode:(unsigned char)arg1;
- (double)keyboardAnimationDuration;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (long long)keyboardAnimationCurve;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (id)edgePanGesture;
- (void)setEdgePanGesture:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
