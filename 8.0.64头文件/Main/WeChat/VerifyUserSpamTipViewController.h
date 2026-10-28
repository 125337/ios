@interface VerifyUserSpamTipViewController : MMUIHalfScreenViewController <ILinkEventExt>
{
    MMUIView * m_contentView; // +0x70
    MMUILabel * m_titleView; // +0x78
    MMUILabel * m_descContentView; // +0x80
    MMUIImageView * m_logoView; // +0x88
    UIButton * m_sendRequestButton; // +0x90
    UIButton * m_closeWindowButton; // +0x98
    RichTextView * m_tipRichTextView; // +0xa0
    NSString * _m_nsWordingTitle; // +0xa8
    NSString * _m_nsWordingDetail; // +0xb0
    NSString * _m_nsWordingUrl; // +0xb8
    id <VerifyUserSpamTipViewControllerDelegate> _m_delegate; // +0xc0
}
- (void)viewDidLoad;
- (void)initData;
- (long long)halfViewControllerHeight;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutLogoView;
- (void)layoutTitleView;
- (void)layoutDescContentView;
- (void)layoutOperateButton;
- (void)layoutTipRichTextView;
- (void)OnContinueSendRequest;
- (void)onClickClose:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)navigationBarBackgroundColor;
- (id)m_nsWordingTitle;
- (void)setM_nsWordingTitle:(id)arg1;
- (id)m_nsWordingDetail;
- (void)setM_nsWordingDetail:(id)arg1;
- (id)m_nsWordingUrl;
- (void)setM_nsWordingUrl:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
