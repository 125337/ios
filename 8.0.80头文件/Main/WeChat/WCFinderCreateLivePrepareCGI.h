@interface WCFinderCreateLivePrepareCGI : WCFinderBaseCgi
{
    unsigned int _liveEntranceType; // +0x8
    int _reqScene; // +0xc
    NSString * _finderUsername; // +0x10
    NSString * _micFinderUsername; // +0x18
    unsigned long long _micObjectId; // +0x20
    unsigned long long _micLiveId; // +0x28
    NSMutableArray * _cachedGestures; // +0x30
    id /* block */ _success; // +0x38
    id /* block */ _failure; // +0x40
}
- (id)initWithParamsModel:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)logResponseInfo:(id)arg1;
- (void)preHandleForCreateLiveResponse:(id)arg1;
- (void)logForQuestActivities:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)micFinderUsername;
- (void)setMicFinderUsername:(id)arg1;
- (unsigned long long)micObjectId;
- (void)setMicObjectId:(unsigned long long)arg1;
- (unsigned long long)micLiveId;
- (void)setMicLiveId:(unsigned long long)arg1;
- (unsigned int)liveEntranceType;
- (void)setLiveEntranceType:(unsigned int)arg1;
- (id)cachedGestures;
- (void)setCachedGestures:(id)arg1;
- (int)reqScene;
- (void)setReqScene:(int)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
