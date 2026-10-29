@interface MMFinderLiveCoverImageEnhanceCGI : WCFinderLiveBaseCgi
{
    int _enhanceScene; // +0x8
    int _enhanceRequestType; // +0xc
    NSString * _finderUsername; // +0x10
    NSString * _coverUrl; // +0x18
    NSString * _enhanceTaskId; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithLiveFinderUserName:(id)arg1 coverUrl:(id)arg2 previousEnhanceTaskId:(id)arg3 scene:(int)arg4 requestType:(int)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)enhanceTaskId;
- (void)setEnhanceTaskId:(id)arg1;
- (int)enhanceScene;
- (void)setEnhanceScene:(int)arg1;
- (int)enhanceRequestType;
- (void)setEnhanceRequestType:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
