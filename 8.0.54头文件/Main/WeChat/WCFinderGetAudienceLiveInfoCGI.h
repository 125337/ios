@interface WCFinderGetAudienceLiveInfoCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    unsigned long long _objectId; // +0x18
    FinderLiveContact * _audienceContact; // +0x20
}
- (id)initWithFinderTaskId:(id)arg1 audienceContact:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)initWithFinderObjectId:(unsigned long long)arg1 audienceContact:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)audienceContact;
- (void)setAudienceContact:(id)arg1;
- (void).cxx_destruct;
@end

