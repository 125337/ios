@interface OMJAIGCQueryResponse : NSObject
{
    BOOL _isFinished; // +0x8
    unsigned int _queryIntervalMS; // +0xc
    NSString * _taskID; // +0x10
    unsigned long long _resultCode; // +0x18
    NSData * _contextData; // +0x20
    NSArray * _assets; // +0x28
}
- (id)initWithTaskID:(id)arg1 resultCode:(unsigned long long)arg2;
- (id)initWithTaskID:(id)arg1 resultCode:(unsigned long long)arg2 isFinished:(BOOL)arg3 contextData:(id)arg4 queryIntervalMS:(unsigned int)arg5 assets:(id)arg6;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (unsigned long long)resultCode;
- (void)setResultCode:(unsigned long long)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (id)contextData;
- (void)setContextData:(id)arg1;
- (unsigned int)queryIntervalMS;
- (void)setQueryIntervalMS:(unsigned int)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (void).cxx_destruct;
@end
