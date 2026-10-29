@interface OMJAsyncSpeechQueryResponseInfo : NSObject
{
    BOOL _isFinished; // +0x8
    NSData * _data; // +0x10
    long long _httpRetCode; // +0x18
    long long _taskID; // +0x20
    unsigned long long _queryIntervalMillis; // +0x28
    NSData * _contextBuff; // +0x30
}
- (id)initWithData:(id)arg1 isFinished:(BOOL)arg2 httpRetCode:(long long)arg3 taskID:(long long)arg4 queryIntervalMillis:(unsigned long long)arg5 contextBuff:(id)arg6;
- (id)data;
- (BOOL)isFinished;
- (long long)httpRetCode;
- (long long)taskID;
- (unsigned long long)queryIntervalMillis;
- (id)contextBuff;
- (void).cxx_destruct;
@end

