@interface WCPayCVVItem : WCPayTenpaySecureCtrlItem
{
    UIButton * m_tipBtn; // +0x50
    MMUIViewController * m_viewController; // +0x58
    NSString * m_nsTipTitle; // +0x60
    NSString * m_nsTipContent; // +0x68
}
- (void)initView:(CGRect)arg1;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)setViewController:(id)arg1;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void)showCVVTip;
- (void)setTipBtnShowed:(BOOL)arg1;
- (void).cxx_destruct;
@end
