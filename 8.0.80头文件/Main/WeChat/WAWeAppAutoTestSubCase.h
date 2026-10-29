@interface WAWeAppAutoTestSubCase : NSObject
{
    BOOL _success; // +0x8
    NSString * _name; // +0x10
    NSString * _caseName; // +0x18
    NSString * _subCaseDescription; // +0x20
    double _timeout; // +0x28
    id /* block */ _block; // +0x30
    unsigned long long _stepIndex; // +0x38
    NSString * _firstFailureDescription; // +0x40
}
+ (id)subCaseWithName:(id)arg1 description:(id)arg2 timeout:(double)arg3 block:(id /* block */)arg4;
- (void)runWithContext:(id)arg1 caseName:(id)arg2 completion:(id /* block */)arg3;
- (void)step:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logWarning:(id)arg1;
- (void)logError:(id)arg1;
- (BOOL)expectTrue:(BOOL)arg1 description:(id)arg2;
- (BOOL)expectEqualObject:(id)arg1 actual:(id)arg2 description:(id)arg3;
- (BOOL)guardTrue:(BOOL)arg1 description:(id)arg2;
- (BOOL)currentSuccess;
- (void)recordFailureDescription:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)caseName;
- (void)setCaseName:(id)arg1;
- (id)subCaseDescription;
- (void)setSubCaseDescription:(id)arg1;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (unsigned long long)stepIndex;
- (void)setStepIndex:(unsigned long long)arg1;
- (id)firstFailureDescription;
- (void)setFirstFailureDescription:(id)arg1;
- (void).cxx_destruct;
@end
