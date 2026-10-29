@interface WCFinderLiveGetAudienceMicStatsCGI : WCFinderLiveBaseCgi
{
    unsigned int _scene; // +0x8
    unsigned long long _liveId; // +0x10
    NSString * _sessionId; // +0x18
    id /* block */ _completionBlock; // +0x20
}
- (id)initWithLiveId:(unsigned long long)arg1 connectMicSessionId:(id)arg2 isKTVMode:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
