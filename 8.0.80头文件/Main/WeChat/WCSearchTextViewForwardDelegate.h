@interface WCSearchTextViewForwardDelegate : NSObject <MMGrowTextViewDelegate>
{
    WCSearchTextView * _wcSearchTextView; // +0x8
    id <WCSearchTextViewDelegate> _textViewDelegate; // +0x10
}
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)onClickTextViewSendText:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)TextViewDidChangeSelection:(id)arg1;
- (void)TextViewExceedMaxLength:(id)arg1;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (id)wcSearchTextView;
- (void)setWcSearchTextView:(id)arg1;
- (id)textViewDelegate;
- (void)setTextViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end
