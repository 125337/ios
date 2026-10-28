@interface MMLiveFlowDelegatingActionBase : MMLiveFlowActionBase
{
    NSMutableDictionary * _downstreamActions; // +0x8
}
- (id)init;
- (void)addDownstreamAction:(id)arg1 withName:(id)arg2;
- (BOOL)hasDownstreamActionWithName:(id)arg1;
- (void)invokeDownstreamWithName:(id)arg1 input:(id)arg2 flowInvocationContext:(id)arg3 currentActionInvocationContext:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)invokeDownstreamWithName:(id)arg1 input:(id)arg2 cancelationToken:(id)arg3 flowInvocationContext:(id)arg4 currentActionInvocationContext:(id)arg5 completionBlock:(id /* block */)arg6;
- (id)downstreamActions;
- (void)setDownstreamActions:(id)arg1;
- (void).cxx_destruct;
@end
