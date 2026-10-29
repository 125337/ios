@interface WCPayJumpHbRefundJsapiLogic : WCPayControlLogic <WCPayHongBaoRefundConfigCgiDelegate>
{
    JSEvent * m_jsEvent; // +0x38
    WCPayHongBaoRefundConfigCgi * _hbRefundConfigCgi; // +0x40
    GetHbRefundConfigResp * _hbRefundConfigResp; // +0x48
}
- (id)initWithJSEvent:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)requestHbRefundConfig;
- (void)onChangeHongBaoRefundPayWay;
- (void)OnHongBaoRefundConfigRepsonseOK:(id)arg1;
- (void)OnHongBaoRefundConfigRepsonseError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)hbRefundConfigCgi;
- (void)setHbRefundConfigCgi:(id)arg1;
- (id)hbRefundConfigResp;
- (void)setHbRefundConfigResp:(id)arg1;
- (void).cxx_destruct;
@end

