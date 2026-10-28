@interface WAWorkFlowStepInfo : NSObject
{
    NSString * _stepName; // +0x8
    id /* block */ _stepBlock; // +0x10
    id <WAWorkFlowImplement> _stepSubWorkFlow; // +0x18
    NSNumber * _numResult; // +0x20
    NSString * _error; // +0x28
}
- (void)dealloc;
- (id)stepName;
- (void)setStepName:(id)arg1;
- (id /* block */)stepBlock;
- (void)setStepBlock:(id /* block */)arg1;
- (id)stepSubWorkFlow;
- (void)setStepSubWorkFlow:(id)arg1;
- (id)numResult;
- (void)setNumResult:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end
