@interface MMFinderLiveAiAssistantToolManager : NSObject
{
    BOOL _hasStarted; // +0x8
    BOOL _isStopped; // +0x9
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveAiAssistantToolManagerDelegate> _delegate; // +0x18
    MMFinderLiveAiAssistantToolRegistry * _registry; // +0x20
    NSMutableArray * _activeBatches; // +0x28
}
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)onFirstJoinLive;
- (void)registerAllBuiltInTools;
- (id)allRegisteredTools;
- (void)start;
- (void)stop;
- (void)reportInitToolListWithRetryLeft:(long long)arg1 delay:(double)arg2;
- (void)handleToolCalls:(id)arg1 msgId:(id)arg2 sessionId:(id)arg3 requestId:(unsigned long long)arg4;
- (void)dispatchSingleToolCall:(id)arg1 inBatch:(id)arg2;
- (void)finishImmediatelyInBatch:(id)arg1 toolCall:(id)arg2 code:(long long)arg3 message:(id)arg4;
- (void)onInvocationFinished:(id)arg1 inBatch:(id)arg2;
- (void)maybeReportBatchIfAllFinished:(id)arg1;
- (void)reportToolResultsToLLM:(id)arg1;
- (void)reportToolResultsToData:(id)arg1 inBatch:(id)arg2;
- (id)liveTask;
- (id)errorTypeForCode:(long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)registry;
- (void)setRegistry:(id)arg1;
- (BOOL)hasStarted;
- (void)setHasStarted:(BOOL)arg1;
- (BOOL)isStopped;
- (void)setIsStopped:(BOOL)arg1;
- (id)activeBatches;
- (void)setActiveBatches:(id)arg1;
- (void).cxx_destruct;
@end
