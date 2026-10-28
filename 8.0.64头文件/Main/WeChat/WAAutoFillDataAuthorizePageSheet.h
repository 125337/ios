@interface WAAutoFillDataAuthorizePageSheet : WAPageSheet <UITextViewDelegate>
{
    id <WAAutoFillDataAuthorizePageSheetDelegate> _afda_delegate; // +0x8
    NSString * _contentString; // +0x10
    UILabel * _titleLabel; // +0x18
    _WAAutoFillDataTextView * _textView; // +0x20
    UIButton * _rejectButton; // +0x28
    UIButton * _acceptButton; // +0x30
}
- (id)initWithContentString:(id)arg1;
- (double)contentHeight;
- (void)addAllSubviews;
- (double)calculateHeightForTextView;
- (void)layoutSubViews;
- (id)textView;
- (id)titleLabel;
- (id)rejectButton;
- (id)acceptButton;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(_NSRange)arg3 interaction:(long long)arg4;
- (void)onRejectBtnClick:(id)arg1;
- (void)onAcceptBtnClick:(id)arg1;
- (id)afda_delegate;
- (void)setAfda_delegate:(id)arg1;
- (id)contentString;
- (void)setContentString:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setRejectButton:(id)arg1;
- (void)setAcceptButton:(id)arg1;
- (void).cxx_destruct;
@end
