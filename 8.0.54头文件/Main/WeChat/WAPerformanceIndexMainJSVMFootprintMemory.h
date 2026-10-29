@interface WAPerformanceIndexMainJSVMFootprintMemory : WAPerformanceIndexBase
{
    unsigned long long _lastIndexNum; // +0x8
}
- (unsigned long long)getCurrentIndexNum;
- (unsigned int)getIndexType;
- (unsigned long long)lastIndexNum;
- (void)setLastIndexNum:(unsigned long long)arg1;
@end

