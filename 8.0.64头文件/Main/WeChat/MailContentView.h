@interface MailContentView : RTETextView <UITextViewDelegate>
{
    UIView * m_labelView; // +0x18
    id <MailContentViewDelegate> m_delegate; // +0x20
    BOOL forbidBecomeFirstResponder; // +0x28
    CGRect _textViewFrame; // +0x30
}
+ (id)contentDefaultTextAttribute;
+ (id)contentDefaultParagraphStyle;
- (void)initMenuController;
- (void)showMenuController;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)mailSelect:(id)arg1;
- (void)mailSelectAll:(id)arg1;
- (void)mailCopy:(id)arg1;
- (void)mailCut:(id)arg1;
- (void)mailPaste:(id)arg1;
- (void)mailDelete:(id)arg1;
- (void)mailEdit:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 showTips:(BOOL)arg2;
- (id)getContent;
- (void)setSelectedRange:(_NSRange)arg1;
- (void)setContent:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (double)getContentHeight;
- (void)showReplyTips;
- (void)insertMailRTEAttachments:(id)arg1;
- (void)formatContent;
- (id)getHtmlContent;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)forbidBecomeFirstResponder;
- (void)setForbidBecomeFirstResponder:(BOOL)arg1;
- (CGRect)textViewFrame;
- (void)setTextViewFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
