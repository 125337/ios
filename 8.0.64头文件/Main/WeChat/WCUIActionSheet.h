@interface WCUIActionSheet : WCActionSheet
{
    WCUIActionSheetLogic * logic; // +0x8
    id m_userData; // +0x10
}
- (id)init;
- (id)initWithTitle:(id)arg1;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addCancelBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addCancelBtnTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addDestructiveButtonTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addBtnTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addDestructiveButtonTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addCustomViewWithItem:(id)arg1 handler:(id /* block */)arg2;
- (id)m_userData;
- (void)setM_userData:(id)arg1;
- (void).cxx_destruct;
@end
