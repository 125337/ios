@interface WCPayT2BCDetailControlLogic : WCPayControlLogic <WCPayT2BCQueryDetailCgiDelegate>
{
    id <WCPayT2BCDetailControlLogicDelegate> _t2bcDetailLogicDelegate; // +0x38
    WCPayT2BCQueryDetailCgi * _m_queryDetailCgi; // +0x40
    unsigned long long _m_fromScene; // +0x48
    unsigned long long _m_status; // +0x50
}
- (void)setT2BCDetialControlLogicDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithTransferBillId:(id)arg1 scene:(unsigned long long)arg2;
- (id)initWithTransferBillId:(id)arg1 scene:(unsigned long long)arg2 status:(unsigned long long)arg3;
- (void)startLogic;
- (void)getTransferDetailData;
- (void)OnWCPayT2BCQueryDetailCgiResponseOK:(id)arg1;
- (void)OnWCPayT2BCQueryDetailCgiResponseError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)stopLogic;
- (void)OnWCPayTransferToBankCardPaidSuccessViewControllerBack;
- (id)m_queryDetailCgi;
- (void)setM_queryDetailCgi:(id)arg1;
- (unsigned long long)m_fromScene;
- (void)setM_fromScene:(unsigned long long)arg1;
- (unsigned long long)m_status;
- (void)setM_status:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
