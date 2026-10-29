@interface WAAsyncOrGateWorkFlow : WAWorkFlowBase
- (void)runSteps;
- (void)onStepFinish:(id)arg1 isSuccess:(BOOL)arg2 error:(id)arg3;
- (BOOL)isAllStepFail;
- (id)allStepInfoError;
@end

