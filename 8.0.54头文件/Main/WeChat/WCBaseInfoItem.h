@interface WCBaseInfoItem : MMObject
{
    NSString * m_title; // +0x8
    NSString * m_tip; // +0x10
    NSString * m_key; // +0x18
    UIView * m_view; // +0x20
    UIView * m_superView; // +0x28
    BOOL m_bEnable; // +0x30
    BOOL m_bActive; // +0x31
    id <WCBaseInfoItemDelegate> m_delegate; // +0x38
    id /* block */ _m_resignBlk; // +0x40
}
- (void)initView:(CGRect)arg1;
- (void)setSuperView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)getValue;
- (void)setEnable:(BOOL)arg1;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)resignFirstResponderWithCompletion:(id /* block */)arg1;
- (id)currentAccessibilityDesc;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (id)m_tip;
- (void)setM_tip:(id)arg1;
- (id)m_key;
- (void)setM_key:(id)arg1;
- (id)m_view;
- (void)setM_view:(id)arg1;
- (BOOL)m_bEnable;
- (BOOL)m_bActive;
- (void)setM_bActive:(BOOL)arg1;
- (id /* block */)m_resignBlk;
- (void)setM_resignBlk:(id /* block */)arg1;
- (void).cxx_destruct;
@end

