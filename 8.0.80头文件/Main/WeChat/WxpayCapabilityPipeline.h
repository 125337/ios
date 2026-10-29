@interface WxpayCapabilityPipeline : NSObject
{
    NSLock * _countersLock; // +0x8
    NSMutableDictionary * _hotPathCounts; // +0x10
    NSMutableDictionary * _recursiveSinkCounts; // +0x18
    id /* block */ _faultObserver; // +0x20
}
+ (id)shared;
+ (unsigned long long)newSpanId;
+ (BOOL)validateProvider:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)invokeProvider:(id)arg1 invocation:(id)arg2 sink:(id /* block */)arg3;
- (id)refuseUnresolved:(id)arg1 sink:(id /* block */)arg2;
- (id)refuseUnresolved:(id)arg1 sink:(id /* block */)arg2 detail:(id)arg3;
- (id)invokeSyncProvider:(id)arg1 invocation:(id)arg2;
- (id)resolvedMethodForProvider:(id)arg1 invocation:(id)arg2;
- (BOOL)answeredSynchronously:(id)arg1;
- (id)asyncTerminalForMethod:(id)arg1 reaction:(id)arg2 alreadyTerminal:(BOOL)arg3;
- (void)validateReactionArity:(long long)arg1 reaction:(id)arg2 invocation:(id)arg3 target:(id)arg4 spanId:(unsigned long long)arg5 startedMs:(unsigned long long)arg6;
- (id)copiedInvocation:(id)arg1;
- (id)wrappedCallbacks:(id)arg1;
- (id)copiedReaction:(id)arg1;
- (id)copiedOutcome:(id)arg1;
- (BOOL)isRecursiveSink:(id)arg1;
- (BOOL)isSampledHotPath:(id)arg1;
- (unsigned long long)bumpCounter:(id)arg1 forTarget:(id)arg2;
- (void)reportBegin:(id)arg1 target:(id)arg2 spanId:(unsigned long long)arg3;
- (void)reportReaction:(id)arg1 target:(id)arg2 spanId:(unsigned long long)arg3 startedMs:(unsigned long long)arg4 reaction:(id)arg5 terminal:(shared_ptr<std::atomic<bool>>)arg6;
- (void)reportOutcome:(id)arg1 target:(id)arg2 spanId:(unsigned long long)arg3 startedMs:(unsigned long long)arg4 outcome:(id)arg5;
- (void)reportEnd:(id)arg1 target:(id)arg2 spanId:(unsigned long long)arg3 startedMs:(unsigned long long)arg4 status:(id)arg5;
- (void)reportPhase:(id)arg1 invocation:(id)arg2 target:(id)arg3 spanId:(unsigned long long)arg4 startedMs:(unsigned long long)arg5 status:(id)arg6;
- (void)reportFault:(id)arg1 invocation:(id)arg2 target:(id)arg3 spanId:(unsigned long long)arg4 startedMs:(unsigned long long)arg5 outcomePayload:(id)arg6;
- (void)reportHotPath:(id)arg1 target:(id)arg2;
- (id /* block */)faultObserver;
- (void)setFaultObserver:(id /* block */)arg1;
- (void).cxx_destruct;
@end
