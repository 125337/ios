@interface OMJAsyncSpeechSubmitResponseInfo : NSObject
{
    NSString * _submitTaskID; // +0x8
    long long _taskID; // +0x10
    unsigned long long _queryIntervalMillis; // +0x18
    NSData * _contextBuff; // +0x20
}
- (id)initWithSubmitTaskID:(id)arg1 taskID:(long long)arg2 queryIntervalMillis:(unsigned long long)arg3 contextBuff:(id)arg4;
- (id)submitTaskID;
- (long long)taskID;
- (unsigned long long)queryIntervalMillis;
- (id)contextBuff;
- (void).cxx_destruct;
@end
