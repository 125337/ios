@interface WCPayLQTCloseFundAccountCgi : WCPayBaseCgi
{
    id <WCPayLQTCloseFundAccountCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initWithdelegate:(id)arg1 request:(id)arg2;
- (void)startSendRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
