@interface WCPayMoneyFromInnerPayLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate>
{
    WCPayPayMoneyLogic * m_payLogic; // +0x38
    WCPayInnerPayRequestStruct * m_oWCPayInnerPayRequestStruct; // +0x40
    NSString * m_dicExtraInfo; // +0x48
    NSString * m_nsRequestKey; // +0x50
    unsigned int m_eSene; // +0x58
}
- (id)initWithInnerPayRequest:(id)arg1;
- (id)initWithInnerPayRequest:(id)arg1 Scene:(long long)arg2;
- (id)initWithInnerPayParam:(id)arg1;
- (id)initWithInnerPayRequest:(id)arg1 extraInfo:(id)arg2;
- (void)startLogic;
- (void)stopLogic;
- (id)getInnerPayResponseStruct;
- (BOOL)gotoViewController:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnGetGenPaypreRequest:(id)arg1 SessionID:(id)arg2 AppSource:(id)arg3 WalletMixSpGenprepayResp:(id)arg4;
- (void)OnGetGenPaypreErrorRequest:(id)arg1 ErrorMsg:(id)arg2;
- (void).cxx_destruct;
@end
