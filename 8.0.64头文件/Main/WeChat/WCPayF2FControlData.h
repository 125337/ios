@interface WCPayF2FControlData : NSObject
{
    WCPayTranferGetUserNameResponse * _m_transferScanQrCodeResp; // +0x8
    WCPayTransferPrepayResponseStruct * _m_f2fPlaceOrderResp; // +0x10
    CgiF2FDynamicCodeResp * _m_f2fDynamicCodeResp; // +0x18
}
- (id)m_transferScanQrCodeResp;
- (void)setM_transferScanQrCodeResp:(id)arg1;
- (id)m_f2fPlaceOrderResp;
- (void)setM_f2fPlaceOrderResp:(id)arg1;
- (id)m_f2fDynamicCodeResp;
- (void)setM_f2fDynamicCodeResp:(id)arg1;
- (void).cxx_destruct;
@end
