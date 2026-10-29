@interface ChatBotFunctionUsageNoticePageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    UIView * m_contentView; // +0x8
    UILabel * m_titleLabel; // +0x10
    UIScrollView * m_scrollView; // +0x18
    double m_maxContentHeight; // +0x20
    RichTextView * m_contentLabel; // +0x28
    id /* block */ m_confirmHandler; // +0x30
    id /* block */ m_cancelHandler; // +0x38
}
- (id)initWithConfirmHandler:(id /* block */)arg1 cancelHandler:(id /* block */)arg2;
- (void)initContentView;
- (void)layoutSubviews;
- (id)getNoticeTitle;
- (id)getNoticeContent;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void).cxx_destruct;
@end
