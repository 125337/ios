@interface WCCoinGetEncashPrepareInfoCgi : WCBaseCgi
{
    NSMutableArray * _businessId; // +0x8
    id <WCCoinGetEncashPrepareInfoCgiDelegate> _delegate; // +0x10
}
- (id)init;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

