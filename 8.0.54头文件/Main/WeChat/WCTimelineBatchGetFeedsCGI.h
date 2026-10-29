@interface WCTimelineBatchGetFeedsCGI : WCBaseCgi
{
    int _scene; // +0x8
    unsigned int _startTime; // +0xc
    NSArray * _feedIds; // +0x10
    id /* block */ _successHandler; // +0x18
    id /* block */ _failureHandler; // +0x20
}
- (id)initWithScene:(int)arg1 feedIds:(id)arg2 successHandler:(id /* block */)arg3 failureHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)feedIds;
- (void)setFeedIds:(id)arg1;
- (int)scene;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (id /* block */)successHandler;
- (void)setSuccessHandler:(id /* block */)arg1;
- (id /* block */)failureHandler;
- (void)setFailureHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

