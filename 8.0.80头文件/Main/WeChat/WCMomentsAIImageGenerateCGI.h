@interface WCMomentsAIImageGenerateCGI : WCBaseCgi
{
    unsigned int _nextQueryInterval; // +0x8
    unsigned int _maxRetryTimes; // +0xc
    NSString * _clientID; // +0x10
    NSArray * _originalURLs; // +0x18
    unsigned long long _aiGenType; // +0x20
    id /* block */ _successHandler; // +0x28
    id /* block */ _failureHandler; // +0x30
    NSError * _error; // +0x38
    NSString * _taskID; // +0x40
}
- (id)initWithClientID:(id)arg1 originalURLs:(id)arg2;
- (void)_initRequest;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)clientID;
- (id)originalURLs;
- (unsigned long long)aiGenType;
- (void)setAiGenType:(unsigned long long)arg1;
- (id /* block */)successHandler;
- (void)setSuccessHandler:(id /* block */)arg1;
- (id /* block */)failureHandler;
- (void)setFailureHandler:(id /* block */)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (unsigned int)nextQueryInterval;
- (void)setNextQueryInterval:(unsigned int)arg1;
- (unsigned int)maxRetryTimes;
- (void)setMaxRetryTimes:(unsigned int)arg1;
- (void).cxx_destruct;
@end
