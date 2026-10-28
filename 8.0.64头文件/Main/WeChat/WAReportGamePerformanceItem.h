@interface WAReportGamePerformanceItem : WAReportBaseItem
{
    NSString * _libVersion; // +0x8
    long long _renderMode; // +0x10
    long long _mainCanvasType; // +0x18
    long long _sceneId; // +0x20
    long long _runtimeDuration; // +0x28
    long long _fps; // +0x30
    long long _fpsEx; // +0x38
    long long _jank; // +0x40
    long long _bigJank; // +0x48
    long long _stutter; // +0x50
    long long _memory; // +0x58
    long long _memoryDiff; // +0x60
    long long _availableMemory; // +0x68
    long long _gpuMemory; // +0x70
    long long _gpuUtilizationDevice; // +0x78
    long long _cpuUtilization; // +0x80
    long long _cpuUtilizationDevice; // +0x88
    long long _batteryLevel; // +0x90
    long long _batteryInfo; // +0x98
    NSString * _extraInfo; // +0xa0
    NSString * _hostAppId; // +0xa8
    NSString * _runtimePlatformInfo; // +0xb0
}
- (id)init;
- (int)reportID;
- (id)reportString;
- (id)libVersion;
- (void)setLibVersion:(id)arg1;
- (long long)renderMode;
- (void)setRenderMode:(long long)arg1;
- (long long)mainCanvasType;
- (void)setMainCanvasType:(long long)arg1;
- (long long)sceneId;
- (void)setSceneId:(long long)arg1;
- (long long)runtimeDuration;
- (void)setRuntimeDuration:(long long)arg1;
- (long long)fps;
- (void)setFps:(long long)arg1;
- (long long)fpsEx;
- (void)setFpsEx:(long long)arg1;
- (long long)jank;
- (void)setJank:(long long)arg1;
- (long long)bigJank;
- (void)setBigJank:(long long)arg1;
- (long long)stutter;
- (void)setStutter:(long long)arg1;
- (long long)memory;
- (void)setMemory:(long long)arg1;
- (long long)memoryDiff;
- (void)setMemoryDiff:(long long)arg1;
- (long long)availableMemory;
- (void)setAvailableMemory:(long long)arg1;
- (long long)gpuMemory;
- (void)setGpuMemory:(long long)arg1;
- (long long)gpuUtilizationDevice;
- (void)setGpuUtilizationDevice:(long long)arg1;
- (long long)cpuUtilization;
- (void)setCpuUtilization:(long long)arg1;
- (long long)cpuUtilizationDevice;
- (void)setCpuUtilizationDevice:(long long)arg1;
- (long long)batteryLevel;
- (void)setBatteryLevel:(long long)arg1;
- (long long)batteryInfo;
- (void)setBatteryInfo:(long long)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)hostAppId;
- (void)setHostAppId:(id)arg1;
- (id)runtimePlatformInfo;
- (void)setRuntimePlatformInfo:(id)arg1;
- (void).cxx_destruct;
@end
