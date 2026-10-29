@interface WCBaseTextFieldWithTipItem : WCBaseTextFieldItem <MMTipsViewControllerDelegate>
{
    UIButton * m_tipBtn; // +0x50
    MMUIViewController * m_viewController; // +0x58
    NSString * m_nsTipTitle; // +0x60
    NSString * m_nsTipContent; // +0x68
    NSString * _cancelTitle; // +0x70
    id _target; // +0x78
    SEL _action; // +0x80
}
- (void)initView:(CGRect)arg1;
- (void)showPhoneTip;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)setViewController:(id)arg1;
- (void)setTipBtnShowed:(BOOL)arg1;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void)addCancelTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (id)cancelTitle;
- (void)setCancelTitle:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (void).cxx_destruct;
@end

