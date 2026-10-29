@interface WCPayBizF2FControlData : NSObject
{
    unsigned int _busiType; // +0x8
    unsigned int _get_pay_wifi; // +0xc
    unsigned int _mch_time; // +0x10
    unsigned int _qrcode_level; // +0x14
    unsigned int _payAmountInCent; // +0x18
    NSString * _upperWording; // +0x20
    NSString * _mchName; // +0x28
    NSString * _mchPhoto; // +0x30
    NSString * _rcvr_ticket; // +0x38
    NSString * _mch_type; // +0x40
    NSString * _receiver_openid; // +0x48
    NSString * _receiverDisplayName; // +0x50
    NSString * _receiverHeadImageUrl; // +0x58
    NSString * _payerComment; // +0x60
    BusiF2FPlaceOrderResp * _placeOrderResp; // +0x68
    BusiF2FPayOkResp * _payOkResp; // +0x70
    BusiF2FActQryResp * _actQryResp; // +0x78
    WCPayTranferGetUserNameResponse * _transferScanQrCodeResp; // +0x80
    BusiF2FPlaceOrderReq * _m_placeOrderReq; // +0x88
    BusiF2FSucPageResp * _m_bizSucPageResp; // +0x90
    CgiF2FDynamicCodeResp * _m_f2fDynamicCodeResp; // +0x98
}
- (BOOL)isBusinessF2FReceive;
- (unsigned int)busiType;
- (void)setBusiType:(unsigned int)arg1;
- (id)upperWording;
- (void)setUpperWording:(id)arg1;
- (id)mchName;
- (void)setMchName:(id)arg1;
- (id)mchPhoto;
- (void)setMchPhoto:(id)arg1;
- (id)rcvr_ticket;
- (void)setRcvr_ticket:(id)arg1;
- (unsigned int)get_pay_wifi;
- (void)setGet_pay_wifi:(unsigned int)arg1;
- (id)mch_type;
- (void)setMch_type:(id)arg1;
- (unsigned int)mch_time;
- (void)setMch_time:(unsigned int)arg1;
- (id)receiver_openid;
- (void)setReceiver_openid:(id)arg1;
- (unsigned int)qrcode_level;
- (void)setQrcode_level:(unsigned int)arg1;
- (id)receiverDisplayName;
- (void)setReceiverDisplayName:(id)arg1;
- (id)receiverHeadImageUrl;
- (void)setReceiverHeadImageUrl:(id)arg1;
- (unsigned int)payAmountInCent;
- (void)setPayAmountInCent:(unsigned int)arg1;
- (id)payerComment;
- (void)setPayerComment:(id)arg1;
- (id)placeOrderResp;
- (void)setPlaceOrderResp:(id)arg1;
- (id)payOkResp;
- (void)setPayOkResp:(id)arg1;
- (id)actQryResp;
- (void)setActQryResp:(id)arg1;
- (id)transferScanQrCodeResp;
- (void)setTransferScanQrCodeResp:(id)arg1;
- (id)m_placeOrderReq;
- (void)setM_placeOrderReq:(id)arg1;
- (id)m_bizSucPageResp;
- (void)setM_bizSucPageResp:(id)arg1;
- (id)m_f2fDynamicCodeResp;
- (void)setM_f2fDynamicCodeResp:(id)arg1;
- (void).cxx_destruct;
@end
