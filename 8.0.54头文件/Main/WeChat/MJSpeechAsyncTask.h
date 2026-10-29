@interface MJSpeechAsyncTask : NSObject
{
    UBDictionarySignal * _statusDidUpdateSignal; // +0x8
    unsigned long long _status; // +0x10
    NSNumber * _taskID; // +0x18
    double _requestStartTimeInterval; // +0x20
    double _queryInterval; // +0x28
    long long _queryCount; // +0x30
    NSString * _submitTaskID; // +0x38
    NSMutableArray * _completions; // +0x40
    NSData * _contextBuff; // +0x48
}
- (id)initWithStatusDidUpdateSignal:(id)arg1;
- (void)dealloc;
- (BOOL)appendCompletionIfRunning:(id)arg1;
- (void)markStatusPending;
- (void)startWithParams:(id)arg1 completionHandler:(id)arg2;
- (void)cancel;
- (void)_submitAsyncRequestWithParams:(id)arg1;
- (void)_queryAsyncRequest;
- (void)_submitDidSuccessWithTaskID:(long long)arg1 submitID:(id)arg2 info:(id)arg3;
- (void)_submitDidFailWithError:(id)arg1;
- (void)_queryDidFailWithError:(id)arg1;
- (void)_queryDidFinishWithResult:(id)arg1;
- (void)_queryDidCompleteOnceWithInfo:(id)arg1;
- (void)_handleTaskStartWithID:(long long)arg1;
- (void)_handleTaskFailWithError:(id)arg1;
- (void)_handleTaskSuccessWithResult:(id)arg1;
- (long long)submitAsyncRequestImplWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)queryAsyncRequestImplWithCompletionHandler:(id /* block */)arg1;
- (long long)taskTimeoutMillis;
- (void)processWithResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleTaskFailImplWithError:(id)arg1 completionHandlers:(id)arg2;
- (void)handleTaskSuccessImplWithResult:(id)arg1 completionHandlers:(id)arg2;
- (id)statusDidUpdateParams;
- (id)description;
- (id)statusDidUpdateSignal;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (double)requestStartTimeInterval;
- (void)setRequestStartTimeInterval:(double)arg1;
- (double)queryInterval;
- (void)setQueryInterval:(double)arg1;
- (long long)queryCount;
- (void)setQueryCount:(long long)arg1;
- (id)submitTaskID;
- (void)setSubmitTaskID:(id)arg1;
- (id)completions;
- (id)contextBuff;
- (void)setContextBuff:(id)arg1;
- (void).cxx_destruct;
@end

