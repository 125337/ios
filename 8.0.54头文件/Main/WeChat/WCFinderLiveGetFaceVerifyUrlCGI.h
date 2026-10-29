@interface WCFinderLiveGetFaceVerifyUrlCGI : WCFinderLiveBaseCgi
{
    int _scene; // +0x8
    NSString * _anchorFinderUsername; // +0x10
    unsigned long long _objectId; // +0x18
    unsigned long long _liveId; // +0x20
    unsigned long long _quotaAmount; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithAnchorFinderUsername:(id)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3 scene:(int)arg4 quotaAmount:(unsigned long long)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)quotaAmount;
- (void)setQuotaAmount:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

