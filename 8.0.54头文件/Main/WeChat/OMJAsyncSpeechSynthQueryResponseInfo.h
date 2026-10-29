@interface OMJAsyncSpeechSynthQueryResponseInfo : NSObject
{
    BOOL _isFinished; // +0x8
    NSData * _audioData; // +0x10
    long long _audioIndex; // +0x18
    long long _httpRetCode; // +0x20
    long long _taskID; // +0x28
    NSDictionary * _extraInfos; // +0x30
    unsigned long long _queryIntervalMillis; // +0x38
    NSData * _contextBuff; // +0x40
}
- (id)initWithAudioData:(id)arg1 audioIndex:(long long)arg2 isFinished:(BOOL)arg3 httpRetCode:(long long)arg4 taskID:(long long)arg5 extraInfos:(id)arg6 queryIntervalMillis:(unsigned long long)arg7 contextBuff:(id)arg8;
- (id)audioData;
- (long long)audioIndex;
- (BOOL)isFinished;
- (long long)httpRetCode;
- (long long)taskID;
- (id)extraInfos;
- (unsigned long long)queryIntervalMillis;
- (id)contextBuff;
- (void).cxx_destruct;
@end

