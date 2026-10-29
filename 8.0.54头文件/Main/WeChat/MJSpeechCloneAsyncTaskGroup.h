@interface MJSpeechCloneAsyncTaskGroup : NSObject
{
    NSString * _audioID; // +0x8
    unsigned long long _status; // +0x10
    UBDictionarySignal * _statusDidUpdateSignal; // +0x18
    MJSpeechAudioData * _audioData; // +0x20
    NSString * _text; // +0x28
    NSMutableArray * _submitTasks; // +0x30
    NSNumber * _queryTask; // +0x38
    long long _runningTaskCount; // +0x40
    long long _submitSucceedCount; // +0x48
    NSMutableArray * _completions; // +0x50
    NSData * _contextBuff; // +0x58
    NSString * _submitTaskID; // +0x60
    double _requestStartTimeInterval; // +0x68
    double _queryInterval; // +0x70
    long long _queryCount; // +0x78
}
- (id)initWithAudioID:(id)arg1 statusDidUpdateSignal:(id)arg2;
- (void)dealloc;
- (void)startWithAudioData:(id)arg1 text:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (BOOL)appendCompletionIfRunning:(id)arg1;
- (void)markStatusPending;
- (long long)runningTaskCount;
- (void)handleTaskStart;
- (void)handleTaskSuccessWithResult:(id)arg1;
- (void)handleTaskFailWithError:(id)arg1;
- (void)handleOneOfSubmitsDidSuccessWithTaskID:(long long)arg1 submitID:(id)arg2 info:(id)arg3;
- (void)handleAllSubmitsDidSuccess;
- (void)queryAsyncRequest;
- (void)queryDidFailWithError:(id)arg1;
- (void)queryDidFinishWithResult:(id)arg1;
- (void)queryDidCompleteOnceWithInfo:(id)arg1;
- (id)statusDidUpdateParams;
- (BOOL)containsInvalidTaskID;
- (long long)taskTimeoutMillis;
- (id)description;
- (id)audioID;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)statusDidUpdateSignal;
- (id)audioData;
- (void)setAudioData:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)submitTasks;
- (void)setSubmitTasks:(id)arg1;
- (id)queryTask;
- (void)setQueryTask:(id)arg1;
- (void)setRunningTaskCount:(long long)arg1;
- (long long)submitSucceedCount;
- (void)setSubmitSucceedCount:(long long)arg1;
- (id)completions;
- (id)contextBuff;
- (void)setContextBuff:(id)arg1;
- (id)submitTaskID;
- (void)setSubmitTaskID:(id)arg1;
- (double)requestStartTimeInterval;
- (void)setRequestStartTimeInterval:(double)arg1;
- (double)queryInterval;
- (void)setQueryInterval:(double)arg1;
- (long long)queryCount;
- (void)setQueryCount:(long long)arg1;
- (void).cxx_destruct;
@end

