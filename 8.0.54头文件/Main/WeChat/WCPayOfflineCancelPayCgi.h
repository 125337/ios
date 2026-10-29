@interface WCPayOfflineCancelPayCgi : WCPayBaseTenPayCgi
{
    unsigned int _payChannel; // +0x8
    id <WCPayOfflineCancelPayCgiDelegate> _cgiDelegate; // +0x10
    NSString * _req_Key; // +0x18
}
- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)callErrorDelegate;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (id)req_Key;
- (void)setReq_Key:(id)arg1;
- (unsigned int)payChannel;
- (void)setPayChannel:(unsigned int)arg1;
- (void).cxx_destruct;
@end

