@interface ChatBotPrivacyPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    NSString * m_userName; // +0x8
    UIView * m_contentView; // +0x10
    UILabel * m_titleLabel; // +0x18
    UIScrollView * m_scrollView; // +0x20
    double m_maxContentHeight; // +0x28
    RichTextView * m_contentLabel; // +0x30
    id /* block */ m_confirmHandler; // +0x38
    id /* block */ m_cancelHandler; // +0x40
    NSDictionary * _sessionParas; // +0x48
}
- (id)initWithUserName:(id)arg1 confirmHandler:(id /* block */)arg2 cancelHandler:(id /* block */)arg3;
- (id)reportParameterWithViewId:(id)arg1;
- (void)pageSheetDidShow;
- (void)setAllowTapBgMaskToClose:(BOOL)arg1;
- (void)initContentView;
- (void)layoutSubviews;
- (id)getPrivacyContent;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)sessionParas;
- (void)setSessionParas:(id)arg1;
- (void).cxx_destruct;
@end
