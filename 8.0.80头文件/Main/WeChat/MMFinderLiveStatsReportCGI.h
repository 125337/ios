@interface MMFinderLiveStatsReportCGI : WCFinderLiveBaseCgi
{
    NSData * _liveCookies; // +0x8
    NSMutableArray * _statsArr; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 statsArr:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithStatsArr:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 statsArr:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)statsArr;
- (void)setStatsArr:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
