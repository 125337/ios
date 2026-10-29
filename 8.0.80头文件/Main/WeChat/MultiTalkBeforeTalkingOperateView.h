@interface MultiTalkBeforeTalkingOperateView : UIView
{
    BOOL _fromIgnore; // +0x8
    CContact * _callerContact; // +0x10
    UILabel * _m_titleLabel; // +0x18
    UILabel * _m_descriptionLabel; // +0x20
    UILabel * _m_memberDescLabel; // +0x28
    UIButton * _m_hangupButton; // +0x30
    UIButton * _m_enterCallButton; // +0x38
    MMUIButton * _m_ignoreButton; // +0x40
    MMUIButton * _m_miniwindowStyleButton; // +0x48
    MMUIButton * _m_ignoreActionButton; // +0x50
    NSString * _m_groupNickName; // +0x58
    id <MultiTalkBeforeTalkingOperateViewDelegate> _m_delegate; // +0x60
}
- (id)titleLabel;
- (id)minimizeButton;
- (id)descriptionLabel;
- (id)memberDescLabel;
- (id)hangupButton;
- (id)enterCallButton;
- (void)setFromIgnore:(BOOL)arg1;
- (void)hideOperateView;
- (void)showOperateView;
- (void)updateTitle:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (void)updateBeforeTalkingOtherMemberCount:(unsigned long long)arg1;
- (void)updateGroupNickName:(id)arg1;
- (void)refreshDescriptionLabelText;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutMiniwindowStyleButton;
- (void)layoutIgnoreActionButton;
- (void)initTitleLabel;
- (void)initDecLabel;
- (void)initMemberDescLabel;
- (void)updateMemberDescLabel:(unsigned long long)arg1;
- (void)initHangupButton;
- (void)initEnterCallButton;
- (void)layoutIgnoreButton;
- (void)onHangupButtonClick;
- (void)onEnterButtonClick;
- (void)onMinimizeButtonClick;
- (void)onIgnoreActionButtonClick;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)fromIgnore;
- (id)callerContact;
- (void)setCallerContact:(id)arg1;
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
- (id)m_ignoreButton;
- (void)setM_ignoreButton:(id)arg1;
- (id)m_miniwindowStyleButton;
- (void)setM_miniwindowStyleButton:(id)arg1;
- (id)m_ignoreActionButton;
- (void)setM_ignoreActionButton:(id)arg1;
- (id)m_groupNickName;
- (void)setM_groupNickName:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
