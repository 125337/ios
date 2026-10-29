@interface OMJAsyncSpeechCloneQueryResponseInfo : NSObject
{
    BOOL _isFinished; // +0x8
    NSString * _roleID; // +0x10
    long long _httpRetCode; // +0x18
    long long _taskID; // +0x20
    NSDictionary * _extraInfos; // +0x28
    unsigned long long _queryIntervalMillis; // +0x30
    NSData * _contextBuff; // +0x38
}
- (id)initWithRoleID:(id)arg1 isFinished:(BOOL)arg2 httpRetCode:(long long)arg3 taskID:(long long)arg4 extraInfos:(id)arg5 queryIntervalMillis:(unsigned long long)arg6 contextBuff:(id)arg7;
- (id)roleID;
- (BOOL)isFinished;
- (long long)httpRetCode;
- (long long)taskID;
- (id)extraInfos;
- (unsigned long long)queryIntervalMillis;
- (id)contextBuff;
- (void).cxx_destruct;
@end

