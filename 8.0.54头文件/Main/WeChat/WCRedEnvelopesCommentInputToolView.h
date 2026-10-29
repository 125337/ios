@interface WCRedEnvelopesCommentInputToolView : MMUIView <MMGrowTextViewDelegate>
{
    long long _keyboardHeight; // +0x8
    UIImageView * _toolView; // +0x10
    MMGrowTextView * _textView; // +0x18
    unsigned long long _positionMode; // +0x20
    UIButton * _sendButton; // +0x28
    CGPoint fPreToolViewOrigin; // +0x30
    double _fKeyboardAnimationDuration; // +0x40
    long long _iKeyboardAnimationCurve; // +0x48
    id <WCRedEnvelopesCommentInputToolViewDelegate> m_delegate; // +0x50
    BOOL m_bPositioning; // +0x58
}
- (void)initSubview;
- (id)initWithFrame:(CGRect)arg1;
- (id)text;
- (void)insertString:(id)arg1;
- (void)setText:(id)arg1;
- (id)getText;
- (double)getToolViewHeight;
- (void)dealloc;
- (void)NotifyViewControllerPostionChanged:(BOOL)arg1 Animated:(BOOL)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHideInter:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (BOOL)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (BOOL)TextViewDidDelete;
- (void)keyboardDidShow:(double)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)onTextViewDidChange:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bPositioning;
- (void)setM_bPositioning:(BOOL)arg1;
- (void).cxx_destruct;
@end

