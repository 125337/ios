@interface WCPayPrivacyToolView : UIView
{
    id <WCPayPrivacyToolViewDelegate> _m_delegate; // +0x8
    UIButton * _m_notAgreeButton; // +0x10
    UIButton * _m_agreeButton; // +0x18
    UIImageView * _m_blurImageView; // +0x20
    UIView * _m_buttonContentView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateFrame;
- (void)updateButtonContentView;
- (void)updateNotAgreeButton;
- (void)updateAgreeButton;
- (void)updateBlurImageView;
- (void)adjustToolViewFrame;
- (double)getBlurImageHeight;
- (void)onClickAgreeButton;
- (void)onClickNotAgreeButton;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_notAgreeButton;
- (void)setM_notAgreeButton:(id)arg1;
- (id)m_agreeButton;
- (void)setM_agreeButton:(id)arg1;
- (id)m_blurImageView;
- (void)setM_blurImageView:(id)arg1;
- (id)m_buttonContentView;
- (void)setM_buttonContentView:(id)arg1;
- (void).cxx_destruct;
@end

