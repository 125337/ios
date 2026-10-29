@interface WCFinderLiveGetMicReplayInfoCGI : WCFinderLiveBaseCgi
{
    unsigned long long _objectId; // +0x8
    NSString * _micSessionId; // +0x10
    long long _replayType; // +0x18
    id /* block */ _completionBlock; // +0x20
}
- (id)initWithObjectId:(unsigned long long)arg1 micSessionId:(id)arg2 isKTVMode:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)micSessionId;
- (void)setMicSessionId:(id)arg1;
- (long long)replayType;
- (void)setReplayType:(long long)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
