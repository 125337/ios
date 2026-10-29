@interface WeChatPayHandler : NSObject <WCBaseControlMgrExt, IPreEnterWechatLogicExt>
{
    NSString * m_nsAppID; // +0x8
    NSURL * m_nsAppUrl; // +0x10
    NSString * m_bundleId; // +0x18
    NSString * m_universalLink; // +0x20
    NSString * m_nsWapUrl; // +0x28
    WCPayOpenApiParamter * _openApiParam; // +0x30
    WCPayTransferMoneyControlLogic * _transferMoneyControlLogic; // +0x38
}
- (id)init;
- (void)reportStartWeChatPayFromApp;
- (void)reportStartWeChatPayFromAppNotLogin;
- (void)reportStartWeChatPayFromAppHasLogin;
- (void)reportStartWeChatPayFromAppAfterLogin;
- (void)reportStartWeChatJointPayFromApp;
- (void)reportStartWeChatJointPayFromAppNotLogin;
- (void)reportStartWeChatJointPayFromAppHasLogin;
- (void)reportStartWeChatJointPayFromAppAfterLogin;
- (void)reportStartWeChatQrCodePayFromAppAfterLogin;
- (void)startWeChatPay:(id)arg1;
- (void)startWeChatJointPay:(id)arg1;
- (void)startWapWechatPayWithPayInfo:(id)arg1 bundleID:(id)arg2;
- (void)startWeChatQRCodePay:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)cancelWeChatPay;
- (void)onPreEnterWechatDone;
- (id)parseURLParams:(id)arg1;
- (void)createWeChatePay;
- (void)createWeChatJointPay;
- (void)createWapWechatPay;
- (id)openApiParam;
- (void)setOpenApiParam:(id)arg1;
- (id)transferMoneyControlLogic;
- (void)setTransferMoneyControlLogic:(id)arg1;
- (void).cxx_destruct;
@end

