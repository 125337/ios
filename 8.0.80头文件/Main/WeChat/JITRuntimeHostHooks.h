@interface JITRuntimeHostHooks : NSObject
{
    id /* block */ _makeQOSProcessPool; // +0x8
    id /* block */ _simulateFullGC; // +0x10
    id /* block */ _simulateFullGCWithDeleteAllCode; // +0x18
    id /* block */ _simulateLowMemory; // +0x20
    id /* block */ _dumpGCHeap; // +0x28
}
+ (void)registerHooks:(id)arg1;
+ (id)currentHooks;
- (id /* block */)makeQOSProcessPool;
- (void)setMakeQOSProcessPool:(id /* block */)arg1;
- (id /* block */)simulateFullGC;
- (void)setSimulateFullGC:(id /* block */)arg1;
- (id /* block */)simulateFullGCWithDeleteAllCode;
- (void)setSimulateFullGCWithDeleteAllCode:(id /* block */)arg1;
- (id /* block */)simulateLowMemory;
- (void)setSimulateLowMemory:(id /* block */)arg1;
- (id /* block */)dumpGCHeap;
- (void)setDumpGCHeap:(id /* block */)arg1;
- (void).cxx_destruct;
@end
