@interface WCPayBizF2FPayCheckCgi : WCPayBaseCgi
{
    id <WCPayBizF2FPayCheckCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initPayCheckCgiWithDelegate:(id)arg1 request:(id)arg2;
- (void)startSendRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
