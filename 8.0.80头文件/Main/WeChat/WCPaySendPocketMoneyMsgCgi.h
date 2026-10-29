@interface WCPaySendPocketMoneyMsgCgi : WCPayBaseCgi
{
    id <WCPaySendPocketMoneyMsgCgiDelegate> _cgiDelegate; // +0x8
}
- (id)init;
- (void)startRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
