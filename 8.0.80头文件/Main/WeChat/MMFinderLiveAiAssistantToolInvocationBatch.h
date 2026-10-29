@interface MMFinderLiveAiAssistantToolInvocationBatch : NSObject
{
    NSString * _sessionId; // +0x8
    unsigned long long _requestId; // +0x10
    NSString * _msgId; // +0x18
    NSMutableArray * _invocations; // +0x20
    NSMutableArray * _results; // +0x28
    NSMutableArray * _toolInstances; // +0x30
    unsigned long long _pendingCount; // +0x38
}
- (id)initWithSessionId:(id)arg1 requestId:(unsigned long long)arg2 msgId:(id)arg3;
- (id)sessionId;
- (unsigned long long)requestId;
- (id)msgId;
- (id)invocations;
- (id)results;
- (id)toolInstances;
- (unsigned long long)pendingCount;
- (void)setPendingCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
