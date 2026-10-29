@interface WCFinderFetchFinderMemberShipQAListCGI : WCFinderBaseCgi
{
    int _getType; // +0x8
    NSString * _finderUsername; // +0x10
    NSString * _lastBuff; // +0x18
    NSString * _objectId; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
}
- (id)initWithFinderUsername:(id)arg1 lastBuff:(id)arg2 getType:(int)arg3 objectId:(id)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (int)getType;
- (void)setGetType:(int)arg1;
- (id)objectId;
- (void)setObjectId:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

