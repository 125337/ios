@interface WCFinderLiveGetPrizeHistoryCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    unsigned long long _liveId; // +0x18
    unsigned long long _objectId; // +0x20
    NSString * _nonceId; // +0x28
    NSString * _anchorFinderUserName; // +0x30
    NSData * _lastBuffer; // +0x38
    long long _liveScene; // +0x40
}
- (id)initWithLiveId:(unsigned long long)arg1 liveTaskId:(id)arg2 objectId:(unsigned long long)arg3 nonceId:(id)arg4 finderUserName:(id)arg5 lastBuffer:(id)arg6 liveScene:(long long)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)anchorFinderUserName;
- (void)setAnchorFinderUserName:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (long long)liveScene;
- (void)setLiveScene:(long long)arg1;
- (void).cxx_destruct;
@end
