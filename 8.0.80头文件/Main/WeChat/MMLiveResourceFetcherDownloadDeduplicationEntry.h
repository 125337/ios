@interface MMLiveResourceFetcherDownloadDeduplicationEntry : NSObject <MMLiveResourceFetcherTaskExt>
{
    MMLiveResourceFetcherTask * _spearheadTask; // +0x8
    NSMutableDictionary * _invocations; // +0x10
    MMLiveResourceFetcherDownloadDeduplicationFlowAction * _associatedAction; // +0x18
}
- (id)initWithTask:(id)arg1;
- (id)uri;
- (void)startWithFlowInvocationContext:(id)arg1 actionInvocationContext:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)addInvocation:(id)arg1;
- (void)completeSuccessfully:(BOOL)arg1 spearheadTask:(id)arg2 flowInvocationContext:(id)arg3 actionInvocationContext:(id)arg4;
- (void)onResourceFetcherTaskPriorityChanged:(id)arg1 previousPriority:(struct)arg2;
- (void)onResourceFetcherTaskPriorityBatchChanging;
- (void)cancelTaskWithInvocationId:(id)arg1;
- (void)reevaluateSpearheadTaskPriority;
- (id)spearheadTask;
- (void)setSpearheadTask:(id)arg1;
- (id)invocations;
- (void)setInvocations:(id)arg1;
- (id)associatedAction;
- (void)setAssociatedAction:(id)arg1;
- (void).cxx_destruct;
@end
