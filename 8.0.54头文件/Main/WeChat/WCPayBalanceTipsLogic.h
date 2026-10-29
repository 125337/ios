@interface WCPayBalanceTipsLogic : MMObject <MMTipsViewControllerDelegate>
{
    UIView * m_containerView; // +0x8
    id /* block */ _m_rightBtnBlock; // +0x10
    id /* block */ _m_leftBtnBlock; // +0x18
    NSArray * _m_arrItem; // +0x20
    NSString * _m_nsTitle; // +0x28
    NSString * _m_nsContent; // +0x30
    NSString * _m_nsRemark; // +0x38
    NSString * _m_nsLeftBtn; // +0x40
    NSString * _m_nsRightBtn; // +0x48
}
- (id)initWithTitle:(id)arg1 content:(id)arg2 remark:(id)arg3 leftBtn:(id)arg4 rightBtn:(id)arg5 itemArr:(id)arg6;
- (id)init;
- (void)setupContainerView;
- (id)genLabelWithFontSize:(int)arg1 textColor:(id)arg2;
- (void)show;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (id /* block */)m_rightBtnBlock;
- (void)setM_rightBtnBlock:(id /* block */)arg1;
- (id /* block */)m_leftBtnBlock;
- (void)setM_leftBtnBlock:(id /* block */)arg1;
- (id)m_arrItem;
- (void)setM_arrItem:(id)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (id)m_nsContent;
- (void)setM_nsContent:(id)arg1;
- (id)m_nsRemark;
- (void)setM_nsRemark:(id)arg1;
- (id)m_nsLeftBtn;
- (void)setM_nsLeftBtn:(id)arg1;
- (id)m_nsRightBtn;
- (void)setM_nsRightBtn:(id)arg1;
- (void).cxx_destruct;
@end

