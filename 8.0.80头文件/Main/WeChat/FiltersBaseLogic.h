@interface FiltersBaseLogic : MMObject
{
    NSRecursiveLock * _lock; // +0x8
    NSMutableArray * _arrFilters; // +0x10
    NSMutableArray * _arrSources; // +0x18
    NSMutableArray * _arrDests; // +0x20
}
- (id)init;
- (id)initWithInput:(id)arg1 output:(id)arg2;
- (id)initWithOrderedFilters:(id)arg1 input:(id)arg2 output:(id)arg3;
- (id)initWithOrderedFilters:(id)arg1 input:(id)arg2 outputs:(id)arg3;
- (void)initData;
- (void)addFilter:(id)arg1;
- (void)addFilter:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceFilter:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceAllFilters:(id)arg1;
- (void)removeFilter:(id)arg1;
- (void)removeAllFilters;
- (void)addOutput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)removeAllOutputs;
- (id)getFinalFilterChain;
- (BOOL)chainPipeline;
- (void)resetChain;
- (void).cxx_destruct;
@end
