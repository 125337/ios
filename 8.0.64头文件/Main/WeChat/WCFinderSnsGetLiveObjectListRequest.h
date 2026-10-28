@interface WCFinderSnsGetLiveObjectListRequest : WCFinderBaseCgi
{
    NSData * _lastBuffer; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSMutableArray * _readStats; // +0x20
}
- (id)initRequestWith:(id)arg1 readStats:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)readStats;
- (void)setReadStats:(id)arg1;
- (void).cxx_destruct;
@end
