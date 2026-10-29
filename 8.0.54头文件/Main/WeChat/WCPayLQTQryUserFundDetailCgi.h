@interface WCPayLQTQryUserFundDetailCgi : WCPayBaseCgi
{
    BOOL _fromServer; // +0x8
    id <WCPayLQTQryUserFundDetailCgiDelegate> _cgiDelegate; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)startSendRequestWithTraceInfo:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)cacheResponse:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (BOOL)fromServer;
- (void)setFromServer:(BOOL)arg1;
- (void).cxx_destruct;
@end

