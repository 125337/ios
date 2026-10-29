@interface WCMktDeleteTicketCgi : WCPayBaseCgi
{
    id <WCMktDeleteTicketCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

