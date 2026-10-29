@interface WAWorkFlowBase : NSObject <WAWorkFlowImplement>
{
    NSString * _workFlowName; // +0x8
    NSMutableArray * _arrStepInfo; // +0x10
    id _context; // +0x18
    BOOL _isStartRun; // +0x20
    BOOL _isCancel; // +0x21
    id /* block */ _completeHandler; // +0x28
}
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)workFlowName;
- (void)addStepName:(id)arg1 block:(id /* block */)arg2;
- (void)addStepSubWorkFlow:(id)arg1;
- (void)runWithContext:(id)arg1 completeHandler:(id /* block */)arg2;
- (void)cancel;
- (void)runSteps;
- (void)onStepFinish:(id)arg1 isSuccess:(BOOL)arg2 error:(id)arg3;
- (void)onWorkFlowStart;
- (void)onWorkFlowEnd;
- (BOOL)runOneStep:(id)arg1;
- (void)runStepBlock:(id)arg1;
- (void)runStepSubWorkFlow:(id)arg1;
- (BOOL)checkFinishedStepInfo:(id)arg1 getStepInfoIndex:(unsigned long long *)arg2;
- (void)callCompleteHandler:(BOOL)arg1 error:(id)arg2;
- (void)callFail:(id)arg1;
- (void)callSuccess;
- (void).cxx_destruct;
@end

