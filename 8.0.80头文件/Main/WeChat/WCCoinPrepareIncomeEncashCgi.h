@interface WCCoinPrepareIncomeEncashCgi : WCBaseCgi
{
    PrepareIncomeEncashResponse * _response; // +0x8
    id <WCCoinPrepareIncomeEncashCgiDelegate> _delegate; // +0x10
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
