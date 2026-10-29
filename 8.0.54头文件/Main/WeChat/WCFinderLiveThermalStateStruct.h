@interface WCFinderLiveThermalStateStruct : NSObject
{
    unsigned int _thermalState; // +0x8
    unsigned int _isLowPowerModeEnabled; // +0xc
    unsigned int _currentLiveScene; // +0x10
    float _deviceGPUUtilization; // +0x14
    float _deviceAverageGPUUtilization; // +0x18
    float _deviceCPUUsage; // +0x1c
    float _appCPUUsage; // +0x20
    unsigned int _backgroundWeAppTaskCount; // +0x24
    unsigned int _downloadingTaskCount; // +0x28
    unsigned long long _liveId; // +0x30
    NSString * _finderNickname; // +0x38
    MMBatteryInfo * _batteryInfo; // +0x40
    NSString * _networkType; // +0x48
    unsigned long long _appFootprintMemory; // +0x50
    unsigned long long _appAverageFootprintMemory; // +0x58
    double _appFootprintMemoryRisingDuration; // +0x60
    long long _appFootprintMemoryRisingLength; // +0x68
    long long _overheatingEvent; // +0x70
    double _overheatingDuration; // +0x78
    long long _overheatingTorchStatus; // +0x80
    long long _energyMode; // +0x88
    NSString * _energyRuleID; // +0x90
}
- (id)toReport;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)thermalState;
- (void)setThermalState:(unsigned int)arg1;
- (unsigned int)isLowPowerModeEnabled;
- (void)setIsLowPowerModeEnabled:(unsigned int)arg1;
- (unsigned int)currentLiveScene;
- (void)setCurrentLiveScene:(unsigned int)arg1;
- (id)finderNickname;
- (void)setFinderNickname:(id)arg1;
- (id)batteryInfo;
- (void)setBatteryInfo:(id)arg1;
- (float)deviceGPUUtilization;
- (void)setDeviceGPUUtilization:(float)arg1;
- (float)deviceAverageGPUUtilization;
- (void)setDeviceAverageGPUUtilization:(float)arg1;
- (id)networkType;
- (void)setNetworkType:(id)arg1;
- (float)deviceCPUUsage;
- (void)setDeviceCPUUsage:(float)arg1;
- (float)appCPUUsage;
- (void)setAppCPUUsage:(float)arg1;
- (unsigned long long)appFootprintMemory;
- (void)setAppFootprintMemory:(unsigned long long)arg1;
- (unsigned long long)appAverageFootprintMemory;
- (void)setAppAverageFootprintMemory:(unsigned long long)arg1;
- (double)appFootprintMemoryRisingDuration;
- (void)setAppFootprintMemoryRisingDuration:(double)arg1;
- (long long)appFootprintMemoryRisingLength;
- (void)setAppFootprintMemoryRisingLength:(long long)arg1;
- (long long)overheatingEvent;
- (void)setOverheatingEvent:(long long)arg1;
- (double)overheatingDuration;
- (void)setOverheatingDuration:(double)arg1;
- (long long)overheatingTorchStatus;
- (void)setOverheatingTorchStatus:(long long)arg1;
- (long long)energyMode;
- (void)setEnergyMode:(long long)arg1;
- (id)energyRuleID;
- (void)setEnergyRuleID:(id)arg1;
- (unsigned int)backgroundWeAppTaskCount;
- (void)setBackgroundWeAppTaskCount:(unsigned int)arg1;
- (unsigned int)downloadingTaskCount;
- (void)setDownloadingTaskCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

