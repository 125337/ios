@interface WCUIActionSheetLogic : MMObject <WCActionSheetDelegate>
{
    NSMutableDictionary * m_dicTarget; // +0x8
    NSMutableDictionary * m_dicSel; // +0x10
    NSMutableDictionary * m_dicHandler; // +0x18
}
- (id)init;
- (void)addBtnTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)addBtnTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void).cxx_destruct;
@end
