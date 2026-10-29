@interface MMAcceptAgreementCommonHeadView : MMUIView <ILinkEventExt>
{
    MMHeadImageView * m_headImageView; // +0x8
    BOOL _largeContentFont; // +0x10
    double m_topMargin; // +0x18
    MMUILabel * m_titleView; // +0x20
    MMUILabel * m_contentView; // +0x28
    UIButton * m_contentButton; // +0x30
    MMWebImageView * m_logoView; // +0x38
    RichTextView * m_contentRichTextView; // +0x40
    id <MMAcceptAgreementCommonHeadViewDelegate> m_delegate; // +0x48
    double _m_titleViewMargin; // +0x50
    double _m_contentViewMargin; // +0x58
    long long _contentAlignment; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateViewWithLogoSVG:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;
- (void)updateViewWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3;
- (void)updateViewWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 numberOfLines:(unsigned long long)arg4;
- (void)updateViewWithLogoSVGImage:(id)arg1 headTitle:(id)arg2 headContent:(id)arg3 numberOfLines:(unsigned long long)arg4 isDotContentStyle:(BOOL)arg5;
- (void)updateViewWithLogoSVGImage:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;
- (void)updateViewWithLogoIconUrl:(id)arg1 logoDarkIconUrl:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4;
- (void)updateViewWithLogoSVGImage:(id)arg1 headContact:(id)arg2 headTitle:(id)arg3 headContent:(id)arg4 numberOfLines:(unsigned long long)arg5 logoLightIconUrl:(id)arg6 logoDarkIconUrl:(id)arg7 isDotContentStyle:(BOOL)arg8;
- (void)updateHeadContentRichTextView:(id)arg1;
- (void)jumpToSystemPrivacySetting;
- (double)getTitleViewMargin;
- (double)getContentViewMargin;
- (id)titleTextColor;
- (id)contentTextColor;
- (id)contentTextFont;
- (id)titleViewFont;
- (void)udpateContentViewConfig;
- (id)dotWithMultilineIntros:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (double)m_topMargin;
- (void)setM_topMargin:(double)arg1;
- (id)m_titleView;
- (void)setM_titleView:(id)arg1;
- (id)m_contentView;
- (void)setM_contentView:(id)arg1;
- (id)m_contentButton;
- (void)setM_contentButton:(id)arg1;
- (id)m_logoView;
- (void)setM_logoView:(id)arg1;
- (id)m_contentRichTextView;
- (void)setM_contentRichTextView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (double)m_titleViewMargin;
- (void)setM_titleViewMargin:(double)arg1;
- (double)m_contentViewMargin;
- (void)setM_contentViewMargin:(double)arg1;
- (BOOL)largeContentFont;
- (void)setLargeContentFont:(BOOL)arg1;
- (long long)contentAlignment;
- (void)setContentAlignment:(long long)arg1;
- (void).cxx_destruct;
@end

