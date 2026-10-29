@interface WCMomentsAIImageCancelCGI : WCBaseCgi
{
    NSString * _taskID; // +0x8
    id /* block */ _successHandler; // +0x10
    id /* block */ _failureHandler; // +0x18
    NSError * _error; // +0x20
}
- (id)initWithTaskID:(id)arg1;
- (void)_initRequest;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)taskID;
- (id /* block */)successHandler;
- (void)setSuccessHandler:(id /* block */)arg1;
- (id /* block */)failureHandler;
- (void)setFailureHandler:(id /* block */)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end

