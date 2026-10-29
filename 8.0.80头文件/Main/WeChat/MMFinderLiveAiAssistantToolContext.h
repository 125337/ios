@interface MMFinderLiveAiAssistantToolContext : NSObject
{
    MMFinderLiveTaskId * _taskId; // +0x8
    NSString * _sessionId; // +0x10
    unsigned long long _requestId; // +0x18
    NSString * _toolCallId; // +0x20
}
+ (id)contextForInitWithTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1 sessionId:(id)arg2 requestId:(unsigned long long)arg3 toolCallId:(id)arg4;
- (id)liveTask;
- (id)finderLiveViewController;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (id)toolCallId;
- (void)setToolCallId:(id)arg1;
- (void).cxx_destruct;
@end
