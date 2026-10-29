@interface WCFinderPostConfirmCGI : WCFinderBaseCgi
{
    NSString * _username; // +0x8
    NSString * _clientid; // +0x10
    FinderPostTraceInfo * _traceInfo; // +0x18
    WCFinderDataItem * _pendingDataItem; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithPendingDataItem:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)preCheckPostRequestValid:(id)arg1;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)clientid;
- (void)setClientid:(id)arg1;
- (id)traceInfo;
- (void)setTraceInfo:(id)arg1;
- (id)pendingDataItem;
- (void)setPendingDataItem:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

