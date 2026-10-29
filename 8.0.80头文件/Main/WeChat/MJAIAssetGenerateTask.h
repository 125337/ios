@interface MJAIAssetGenerateTask : NSObject
{
    unsigned int _nextQueryInterval; // +0x8
    unsigned int _queryCount; // +0xc
    NSString * _taskID; // +0x10
    MJAIAssetGenerateRequest * _request; // +0x18
    double _timeoutInterval; // +0x20
    long long _state; // +0x28
    unsigned long long _aiGenType; // +0x30
    MJAIAssetGenerateResult * _result; // +0x38
    NSError * _error; // +0x40
    id /* block */ _completionHandler; // +0x48
    MMTimer * _timeoutTimer; // +0x50
    double _startTimeInterval; // +0x58
    long long _maxRetryTimes; // +0x60
}
- (id)initWithRequest:(id)arg1 timeoutInterval:(double)arg2;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (void)_handleSubmitSuccessWithResult:(id)arg1;
- (void)_handleSubmitFailWithError:(id)arg1;
- (void)_repeatedlyQueryGenerateResult;
- (void)_disposedQueryGenerateResult;
- (void)_handleQuerySuccessWithResult:(id)arg1 isRepeatedly:(BOOL)arg2;
- (void)_handleQueryFailWithError:(id)arg1;
- (void)didRecieveCompletionNotify;
- (void)_startTimeoutTimer;
- (void)_stopTimeoutTimer;
- (void)_taskDidTimeout;
- (void)_completeWithResult:(id)arg1 error:(id)arg2;
- (BOOL)_checkGenResultIsSuccess:(id)arg1;
- (void)_callCompletionHandler;
- (void)submitWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryWithTaskID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelWithTaskID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)taskID;
- (id)request;
- (double)timeoutInterval;
- (long long)state;
- (unsigned long long)aiGenType;
- (void)setAiGenType:(unsigned long long)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (double)startTimeInterval;
- (void)setStartTimeInterval:(double)arg1;
- (long long)maxRetryTimes;
- (void)setMaxRetryTimes:(long long)arg1;
- (unsigned int)nextQueryInterval;
- (void)setNextQueryInterval:(unsigned int)arg1;
- (unsigned int)queryCount;
- (void)setQueryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
