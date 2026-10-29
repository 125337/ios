@interface SetTrustedFriendTipsView : MMUIView
{
    id <SetTrustedFriendTipsViewDelegate> _m_delegate; // +0x8
    UIView * _tipsView; // +0x10
    UIButton * _closeButton; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)dismissSystemMsg;
- (void)layoutTipsView;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end

