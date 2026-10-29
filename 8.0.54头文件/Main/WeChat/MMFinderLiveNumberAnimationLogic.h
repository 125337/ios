@interface MMFinderLiveNumberAnimationLogic : NSObject
{
    BOOL _hasStarted; // +0x8
    BOOL _hasFinished; // +0x9
    unsigned long long _productID; // +0x10
    FinderLiveNumericAnimationRuleInfo * _ruleInfo; // +0x18
    unsigned long long _currentNumber; // +0x20
    NSPointerArray * _observers; // +0x28
}
- (id)initWithLocalValue:(unsigned long long)arg1 ruleInfo:(id)arg2 ForProductID:(unsigned long long)arg3;
- (BOOL)start;
- (void)addObserver:(id)arg1;
- (unsigned long long)productID;
- (void)setProductID:(unsigned long long)arg1;
- (id)ruleInfo;
- (void)setRuleInfo:(id)arg1;
- (unsigned long long)currentNumber;
- (void)setCurrentNumber:(unsigned long long)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (BOOL)hasStarted;
- (void)setHasStarted:(BOOL)arg1;
- (BOOL)hasFinished;
- (void)setHasFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end

