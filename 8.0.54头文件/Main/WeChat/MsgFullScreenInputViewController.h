@interface MsgFullScreenInputViewController : MMUIViewController <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, textViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate>
{
    BOOL _isInDismissState; // +0x68
    BOOL _showKeyboardWhenPresent; // +0x69
    BOOL _showEmoticonWhenPresent; // +0x6a
    unsigned char _contentMode; // +0x6b
    int _lastAttributeCount; // +0x6c
    id <MsgFullScreenInputDelegate> _delegate; // +0x70
    double _keyboardHeight; // +0x78
    UIView * _containerView; // +0x80
    MMTextView * _textView; // +0x88
    MMUIButton * _exitButton; // +0x90
    UIView * _toolView; // +0x98
    MsgFullScreenInputConfig * _config; // +0xa0
    MMUIButton * _expressionButton; // +0xa8
    WXKeyBoardTipsView * _keyboardTipsView; // +0xb0
    EmoticonBoardView * _expressionView; // +0xb8
    double _keyboardAnimationDuration; // +0xc0
    long long _keyboardAnimationCurve; // +0xc8
    UIScreenEdgePanGestureRecognizer * _edgePanGesture; // +0xd0
    UIPanGestureRecognizer * _panGesture; // +0xd8
    UITapGestureRecognizer * _tapGesture; // +0xe0
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
- (void)onExitButtonClicked;
- (void)onExpressionButtonClicked;
- (void)jumpToPlugin;
- (void)setContentMode:(unsigned char)arg1 animated:(BOOL)arg2;
- (double)getToolViewHeight;
- (void)updateTextViewLayout;
- (void)updateToolViewLayout;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)inputAddTagStr;
- (void)onSendButtonClicked;
- (void)didSelectorEmoticon:(id)arg1;
- (void)deleteEmoticon;
- (void)ensureTextVisible;
- (void)insertString:(id)arg1;
- (BOOL)pretreatmentAttributedText;
- (void)doWXTagParse;
- (int)parseAndAppendTopicSearchAttributeds:(id)arg1;
- (id)topicTagAttributes;
- (void)textDidChangeNotification:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
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

