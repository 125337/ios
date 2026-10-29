@interface CameraScanEnergyLiveData : NSObject
{
    long long _fps; // +0x8
    long long _thermalState; // +0x10
    double _appCPUUsage; // +0x18
    double _deviceCPUUsage; // +0x20
    long long _totalFrameCount; // +0x28
    long long _sampleIndex; // +0x30
}
- (long long)fps;
- (void)setFps:(long long)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (double)appCPUUsage;
- (void)setAppCPUUsage:(double)arg1;
- (double)deviceCPUUsage;
- (void)setDeviceCPUUsage:(double)arg1;
- (long long)totalFrameCount;
- (void)setTotalFrameCount:(long long)arg1;
- (long long)sampleIndex;
- (void)setSampleIndex:(long long)arg1;
@end
