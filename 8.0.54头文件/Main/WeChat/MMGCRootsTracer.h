@interface MMGCRootsTracer : NSObject
{
    NSMutableArray * _candidates; // +0x8
    MMGCRootsTracingGraphConfiguration * _configuration; // +0x10
    NSMutableSet * _objectSet; // +0x18
}
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)addCandidate:(id)arg1;
- (id)findPathToObject:(id)arg1 fromRoots:(id)arg2;
- (id)findPathToObject:(id)arg1 fromRoots:(id)arg2 stackDepth:(unsigned long long)arg3 maxTravelElementCount:(unsigned long long)arg4;
- (id)_findPathToObject:(id)arg1 fromRoots:(id)arg2 stackDepth:(unsigned long long)arg3 maxTravelElementCount:(unsigned long long)arg4;
- (id)findRetainCycles;
- (id)findRetainCyclesWithMaxCycleLength:(unsigned long long)arg1;
- (id)_findRetainCyclesInObject:(id)arg1 stackDepth:(unsigned long long)arg2;
- (id)_unwrapCycle:(id)arg1;
- (id)_shiftToUnifiedCycle:(id)arg1;
- (id)_extractClassNamesFromGraphObjects:(id)arg1;
- (id)_shiftToLowestLexicographically:(id)arg1;
- (long long)_compareStringArray:(id)arg1 withArray:(id)arg2;
- (id)_shiftBufferToLowestAddress:(id)arg1;
- (void).cxx_destruct;
@end

