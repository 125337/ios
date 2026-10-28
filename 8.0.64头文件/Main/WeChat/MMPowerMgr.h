@interface MMPowerMgr : MMRootService <MMServiceProtocol>
{
    BOOL m_bLowPowerMode; // +0x8
    NSMutableArray * m_minuteCPUUsageArray; // +0x10
    double m_foregroundTime; // +0x18
    double m_backgroundTime; // +0x20
}
+ (float)getCurrentCpuUsage;
+ (long long)getResidentMemory;
- (id)init;
- (void)dealloc;
- (void)processEnterForeground;
- (void)processEnterBackground;
- (double)getForegroundTime;
- (double)getBackgroundTime;
- (void)markTestCPU:(BOOL)arg1;
- (void)costCPUALot;
- (void)p_setPowerMode;
- (void)processPowerModeChange;
- (BOOL)isLowPowerMode;
- (void).cxx_destruct;
@end
