@interface OMJAIGCSubmitResponse : NSObject
{
    unsigned int _queryIntervalMS; // +0x8
    NSString * _requestID; // +0x10
    unsigned long long _resultCode; // +0x18
    NSString * _taskID; // +0x20
    NSData * _contextData; // +0x28
}
- (id)initWithRequestID:(id)arg1 resultCode:(unsigned long long)arg2;
- (id)initWithRequestID:(id)arg1 resultCode:(unsigned long long)arg2 taskID:(id)arg3 contextData:(id)arg4 queryIntervalMS:(unsigned int)arg5;
- (id)requestID;
- (void)setRequestID:(id)arg1;
- (unsigned long long)resultCode;
- (void)setResultCode:(unsigned long long)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)contextData;
- (void)setContextData:(id)arg1;
- (unsigned int)queryIntervalMS;
- (void)setQueryIntervalMS:(unsigned int)arg1;
- (void).cxx_destruct;
@end
