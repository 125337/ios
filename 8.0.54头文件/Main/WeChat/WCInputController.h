@interface WCInputController : MMObject <MMGrowTextViewDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>
{
    double _fKeyboardAnimationDuration; // +0x8
    double _fKeyboardHeight; // +0x10
    long long _iKeyboardAnimationCurve; // +0x18
    long long _eInputMode; // +0x20
    UIView * _inputView; // +0x28
    UIScrollView * _scrollView; // +0x30
    MMGrowTextView * _textView; // +0x38
    EmoticonBoardView * _emoticonBoardView; // +0x40
    MMLiveAddBoardView * _addBoardView; // +0x48
    UIView * _backgroundView; // +0x50
    double _fInputViewY; // +0x58
    double _fScrollViewY; // +0x60
    double _fScrollViewOriginY; // +0x68
    id <InputControllerDelegate> _delegate; // +0x70
    BOOL _bAnimationCutHeight; // +0x78
    BOOL _isKeyBoardShow; // +0x79
    BOOL _bShouldInputViewFadeIn; // +0x7a
    BOOL _bInputViewShowing; // +0x7b
    BOOL _bShouldDisableScrollWhenHideKeyboard; // +0x7c
    double _inputViewBottomSpace; // +0x80
    NSString * _lastPastedText; // +0x88
}
- (id)init;
- (void)dealloc;
- (void)didSelectorEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)deleteEmoticon;
- (void)resignTextView;
- (void)resignResponder;
- (void)becomeTextView;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (BOOL)TextViewDidDelete;
- (void)showKeyBoard:(double)arg1;
- (void)keyboardWillShow:(double)arg1;
- (BOOL)shouldInterceptExpressionPanelOnKeyboardChanged:(BOOL)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)doHideKeybaord;
- (void)AnimationDidStop:(id)arg1;
- (void)onSystemHideKeyboard;
- (void)inputModeChangeButtonClicked:(long long)arg1;
- (void)inputModeChangeButtonClicked;
- (void)inputViewYDidChange;
- (void)updateScrollViewY:(double)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewExceedMaxLength:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextView:(id)arg1 willPastedText:(id)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onClickTextViewSendText:(id)arg1;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(id)arg2;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)updateTabbarSendButtonState;
- (void)textViewCommit;
- (void)TextViewDidChangeSelection:(id)arg1;
- (void)changeTextViewColorForEmoticonState:(BOOL)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)onSendButtonClicked;
- (void)OnEmoticonStateDidChanged:(BOOL)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)emoticonBoardView;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (double)fInputViewY;
- (void)setFInputViewY:(double)arg1;
- (double)fScrollViewY;
- (void)setFScrollViewY:(double)arg1;
- (double)fScrollViewOriginY;
- (void)setFScrollViewOriginY:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)eInputMode;
- (void)setEInputMode:(long long)arg1;
- (BOOL)bAnimationCutHeight;
- (void)setBAnimationCutHeight:(BOOL)arg1;
- (double)fKeyboardHeight;
- (void)setFKeyboardHeight:(double)arg1;
- (id)addBoardView;
- (void)setAddBoardView:(id)arg1;
- (BOOL)isKeyBoardShow;
- (void)setIsKeyBoardShow:(BOOL)arg1;
- (double)inputViewBottomSpace;
- (void)setInputViewBottomSpace:(double)arg1;
- (BOOL)bShouldInputViewFadeIn;
- (void)setBShouldInputViewFadeIn:(BOOL)arg1;
- (BOOL)bInputViewShowing;
- (void)setBInputViewShowing:(BOOL)arg1;
- (BOOL)bShouldDisableScrollWhenHideKeyboard;
- (void)setBShouldDisableScrollWhenHideKeyboard:(BOOL)arg1;
- (id)lastPastedText;
- (void).cxx_destruct;
@end

