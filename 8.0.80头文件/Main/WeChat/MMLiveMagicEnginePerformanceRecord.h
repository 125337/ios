@interface MMLiveMagicEnginePerformanceRecord : NSObject
{
    double _mostCPUIncrease; // +0x8
    double _mostGPUInscrease; // +0x10
    double _mostMemoryInscrease; // +0x18
    long long _thermalState; // +0x20
}
- (id)description;
- (double)mostCPUIncrease;
- (void)setMostCPUIncrease:(double)arg1;
- (double)mostGPUInscrease;
- (void)setMostGPUInscrease:(double)arg1;
- (double)mostMemoryInscrease;
- (void)setMostMemoryInscrease:(double)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
@end
