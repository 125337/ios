@interface MultiTalkBeforeTalkingOperateView : UIView
{
    UILabel * _m_titleLabel; // +0x8
    UILabel * _m_descriptionLabel; // +0x10
    UILabel * _m_memberDescLabel; // +0x18
    UIButton * _m_hangupButton; // +0x20
    UIButton * _m_enterCallButton; // +0x28
    MMUIButton * _m_minimizeButton; // +0x30
    id <MultiTalkBeforeTalkingOperateViewDelegate> _m_delegate; // +0x38
}
- (id)titleLabel;
- (id)minimizeButton;
- (id)descriptionLabel;
- (id)memberDescLabel;
- (id)hangupButton;
- (id)enterCallButton;
- (void)hideOperateView;
- (void)showOperateView;
- (void)updateTitle:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (void)updateBeforeTalkingOtherMemberCount:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initTitleLabel;
- (void)initDecLabel;
- (void)initMemberDescLabel;
- (void)updateMemberDescLabel:(unsigned long long)arg1;
- (void)initHangupButton;
- (void)initEnterCallButton;
- (void)layoutMinimizeButton;
- (void)onHangupButtonClick;
- (void)onEnterButtonClick;
- (void)onMinimizeButtonClick;
- (void)layoutSubviews;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_descriptionLabel;
- (void)setM_descriptionLabel:(id)arg1;
- (id)m_memberDescLabel;
- (void)setM_memberDescLabel:(id)arg1;
- (id)m_hangupButton;
- (void)setM_hangupButton:(id)arg1;
- (id)m_enterCallButton;
- (void)setM_enterCallButton:(id)arg1;
- (id)m_minimizeButton;
- (void)setM_minimizeButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
