@interface WCCommentContentCgiHelper : WCBaseCgi
{
    unsigned int _startTime; // +0x8
    NSMutableArray * _contentReqs; // +0x10
    id /* block */ _successHandler; // +0x18
    id /* block */ _failureHandler; // +0x20
}
- (id)initWithUserComments:(id)arg1 successHandler:(id /* block */)arg2 failureHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)startRequest;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)contentReqs;
- (void)setContentReqs:(id)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (id /* block */)successHandler;
- (void)setSuccessHandler:(id /* block */)arg1;
- (id /* block */)failureHandler;
- (void)setFailureHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
