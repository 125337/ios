@interface WCPaySelectWalletLogic : WCPayControlLogic <WCPaySelectWalletViewControllerDelegate>
{
    WCPaySelectWalletViewController * selectWalletViewController; // +0x38
    WCPayWalletInfo * selectedWallet; // +0x40
    JSEvent * m_jsEvent; // +0x48
    unsigned int _scene; // +0x50
}
- (id)initWithData:(id)arg1;
- (id)initWithJSEvent:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)OnSelectWalletBack;
- (void)OnSelectWallet:(id)arg1;
- (void)OnQueryUserWallet:(id)arg1 Error:(id)arg2;
- (void)OnSetUserWallet:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

