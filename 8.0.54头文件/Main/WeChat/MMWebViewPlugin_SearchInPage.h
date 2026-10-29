@interface MMWebViewPlugin_SearchInPage : MMWebViewPluginBase <UITextFieldDelegate>
{
    BOOL _bEnableSearchInPage; // +0x8
    id /* block */ _inputTextCallbackBlock; // +0x10
    unsigned long long _maxInputLen; // +0x18
    UIView * _inputToolBarView; // +0x20
    UITextField * _inputTextField; // +0x28
    unsigned long long _currentIndex; // +0x30
    CGRect _keyboardFrameInScreen; // +0x38
    double _fKeyboardHeight; // +0x58
    double _fKeyboardAnimationDuration; // +0x60
    long long _iKeyboardAnimationCurve; // +0x68
    MMTimer * _textChangeCheckTimer; // +0x70
    NSString * _finishText; // +0x78
    NSString * _currentText; // +0x80
    BOOL _bEnableAction; // +0x88
    unsigned long long m_uiResultCount; // +0x90
}
- (id)init;
- (void)dealloc;
- (void)resignResponder;
- (void)setM_uiResultCount:(unsigned long long)arg1;
- (void)resizeInputTextFieldWidth;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)showKeyBoardWithPlaceholder:(id)arg1 defaultText:(id)arg2 maxTextLen:(unsigned long long)arg3 contentOffsetY:(double)arg4 callBackBlock:(id /* block */)arg5;
- (void)searchInputKeyboardWillHide:(id)arg1;
- (void)searchInputKeyboardDidHide:(id)arg1;
- (void)searchInputKeyboardWillChangeFrame:(id)arg1;
- (void)searchInputKeyboardDidChangeFrame:(id)arg1;
- (void)makeInputAccessoryView;
- (void)textChangeTimerCheck;
- (void)doOnceSearchBeforeTimerInvalidate;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldSearchBtnDone:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)searchPrev:(id)arg1;
- (void)searchNext:(id)arg1;
- (void)onSearchCloseBtnClicked:(id)arg1;
- (unsigned long long)m_uiResultCount;
- (void).cxx_destruct;
@end

