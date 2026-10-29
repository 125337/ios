@interface MMMetricsInfo : NSObject
{
    BOOL isAutoIncrement; // +0x8
    BOOL _isLowPowerModeEnabled; // +0x9
    BOOL _cameraActive; // +0xa
    unsigned short _locationRetrievingCount; // +0xc
    unsigned short _audioPlayingCount; // +0xe
    float _appCPUUsage; // +0x10
    float _appAverageCPUUsage; // +0x14
    float _deviceCPUUsage; // +0x18
    float _deviceAverageCPUUsage; // +0x1c
    unsigned int _threadCount; // +0x20
    unsigned int _memoryPressureFlag; // +0x24
    unsigned int _networkType; // +0x28
    float _audioOutputVolume; // +0x2c
    float _brightness; // +0x30
    float _torchLevel; // +0x34
    unsigned long long _infoID; // +0x38
    double _time; // +0x40
    double _lastTime; // +0x48
    double _averageTime; // +0x50
    NSString * _scene; // +0x58
    NSString * _weAppScene; // +0x60
    unsigned long long _userType; // +0x68
    unsigned long long _maxUserType; // +0x70
    long long _applicationState; // +0x78
    long long _thermalState; // +0x80
    long long _overheatingEvent; // +0x88
    double _overheatingDuration; // +0x90
    long long _overheatingTorchStatus; // +0x98
    MMBatteryInfo * _batteryInfo; // +0xa0
    MatrixGPUUtilization * _deviceGPUUtilization; // +0xa8
    MatrixGPUUtilization * _deviceAverageGPUUtilization; // +0xb0
    double _hangTime; // +0xb8
    double _hitchRate; // +0xc0
    double _scrollScore; // +0xc8
    unsigned long long _appPhysicalMemory; // +0xd0
    unsigned long long _appAvailableMemory; // +0xd8
    unsigned long long _appFootprintMemory; // +0xe0
    unsigned long long _appAverageFootprintMemory; // +0xe8
    double _appFootprintMemoryRisingDuration; // +0xf0
    long long _appFootprintMemoryRisingLength; // +0xf8
    NSString * _networkTypeDescription; // +0x100
    MMNetworkStatistics * _appNetworkUsage; // +0x108
    MMNetworkStatistics * _deviceNetworkUsage; // +0x110
    long long _energyMode; // +0x118
    NSString * _energyRuleID; // +0x120
    long long _audioSessionRoute; // +0x128
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)infoID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_infoID;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_time;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_scene;
+ (const void *)weAppScene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_weAppScene;
+ (const void *)userType;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_userType;
+ (const void *)maxUserType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_maxUserType;
+ (const void *)applicationState;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_applicationState;
+ (const void *)thermalState;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_thermalState;
+ (const void *)overheatingEvent;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_overheatingEvent;
+ (const void *)overheatingTorchStatus;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_overheatingTorchStatus;
+ (const void *)batteryState;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_batteryState;
+ (const void *)batteryLevel;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_batteryLevel;
+ (const void *)isLowPowerModeEnabled;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_isLowPowerModeEnabled;
+ (const void *)appCPUUsage;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_appCPUUsage;
+ (const void *)deviceCPUUsage;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_deviceCPUUsage;
+ (const void *)threadCount;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_threadCount;
+ (const void *)appGPUUsage;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_appGPUUsage;
+ (const void *)hangTime;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_hangTime;
+ (const void *)hitchRate;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (id)swift_hitchRate;
+ (const void *)appAvailableMemory;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (id)swift_appAvailableMemory;
+ (const void *)appFootprintMemory;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (id)swift_appFootprintMemory;
+ (const void *)memoryPressureFlag;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (id)swift_memoryPressureFlag;
+ (const void *)locationRetrievingCount;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (id)swift_locationRetrievingCount;
+ (const void *)audioPlayingCount;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (id)swift_audioPlayingCount;
+ (const void *)audioSessionRoute;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (id)swift_audioSessionRoute;
+ (const void *)audioOutputVolume;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (id)swift_audioOutputVolume;
+ (const void *)brightness;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (id)swift_brightness;
+ (const void *)cameraActive;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (id)swift_cameraActive;
+ (const void *)torchLevel;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (id)swift_torchLevel;
+ (const void *)networkType;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (id)swift_networkType;
+ (const void *)appNetworkWifiSent;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (id)swift_appNetworkWifiSent;
+ (const void *)appNetworkWifiReceived;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (id)swift_appNetworkWifiReceived;
+ (const void *)appNetworkWwanSent;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (id)swift_appNetworkWwanSent;
+ (const void *)appNetworkWwanReceived;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (id)swift_appNetworkWwanReceived;
+ (const void *)deviceNetworkWifiSent;
+ (const void *)__wcdb_synthesize_34:(void *)arg1;
+ (id)swift_deviceNetworkWifiSent;
+ (const void *)deviceNetworkWifiReceived;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_deviceNetworkWifiReceived;
+ (const void *)deviceNetworkWwanSent;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_deviceNetworkWwanSent;
+ (const void *)deviceNetworkWwanReceived;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_deviceNetworkWwanReceived;
+ (void)__wcdb_column_constraint_38:(void *)arg1;
- (id)init;
- (long long)batteryState;
- (void)setBatteryState:(long long)arg1;
- (float)batteryLevel;
- (void)setBatteryLevel:(float)arg1;
- (float)appGPUUsage;
- (void)setAppGPUUsage:(float)arg1;
- (unsigned long long)appNetworkWifiSent;
- (void)setAppNetworkWifiSent:(unsigned long long)arg1;
- (unsigned long long)appNetworkWifiReceived;
- (void)setAppNetworkWifiReceived:(unsigned long long)arg1;
- (unsigned long long)appNetworkWwanSent;
- (void)setAppNetworkWwanSent:(unsigned long long)arg1;
- (unsigned long long)appNetworkWwanReceived;
- (void)setAppNetworkWwanReceived:(unsigned long long)arg1;
- (unsigned long long)deviceNetworkWifiSent;
- (void)setDeviceNetworkWifiSent:(unsigned long long)arg1;
- (unsigned long long)deviceNetworkWifiReceived;
- (void)setDeviceNetworkWifiReceived:(unsigned long long)arg1;
- (unsigned long long)deviceNetworkWwanSent;
- (void)setDeviceNetworkWwanSent:(unsigned long long)arg1;
- (unsigned long long)deviceNetworkWwanReceived;
- (void)setDeviceNetworkWwanReceived:(unsigned long long)arg1;
- (id)applicationStateString;
- (id)memoryPressureFlagString;
- (id)description;
- (id)reportString:(double)arg1 reportIndex:(unsigned int)arg2;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (unsigned long long)infoID;
- (void)setInfoID:(unsigned long long)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (double)lastTime;
- (void)setLastTime:(double)arg1;
- (double)averageTime;
- (void)setAverageTime:(double)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)weAppScene;
- (void)setWeAppScene:(id)arg1;
- (unsigned long long)userType;
- (void)setUserType:(unsigned long long)arg1;
- (unsigned long long)maxUserType;
- (void)setMaxUserType:(unsigned long long)arg1;
- (long long)applicationState;
- (void)setApplicationState:(long long)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (long long)overheatingEvent;
- (void)setOverheatingEvent:(long long)arg1;
- (double)overheatingDuration;
- (void)setOverheatingDuration:(double)arg1;
- (long long)overheatingTorchStatus;
- (void)setOverheatingTorchStatus:(long long)arg1;
- (id)batteryInfo;
- (void)setBatteryInfo:(id)arg1;
- (BOOL)isLowPowerModeEnabled;
- (void)setIsLowPowerModeEnabled:(BOOL)arg1;
- (float)appCPUUsage;
- (void)setAppCPUUsage:(float)arg1;
- (float)appAverageCPUUsage;
- (void)setAppAverageCPUUsage:(float)arg1;
- (float)deviceCPUUsage;
- (void)setDeviceCPUUsage:(float)arg1;
- (float)deviceAverageCPUUsage;
- (void)setDeviceAverageCPUUsage:(float)arg1;
- (unsigned int)threadCount;
- (void)setThreadCount:(unsigned int)arg1;
- (id)deviceGPUUtilization;
- (void)setDeviceGPUUtilization:(id)arg1;
- (id)deviceAverageGPUUtilization;
- (void)setDeviceAverageGPUUtilization:(id)arg1;
- (double)hangTime;
- (void)setHangTime:(double)arg1;
- (double)hitchRate;
- (void)setHitchRate:(double)arg1;
- (double)scrollScore;
- (void)setScrollScore:(double)arg1;
- (unsigned long long)appPhysicalMemory;
- (void)setAppPhysicalMemory:(unsigned long long)arg1;
- (unsigned long long)appAvailableMemory;
- (void)setAppAvailableMemory:(unsigned long long)arg1;
- (unsigned long long)appFootprintMemory;
- (void)setAppFootprintMemory:(unsigned long long)arg1;
- (unsigned long long)appAverageFootprintMemory;
- (void)setAppAverageFootprintMemory:(unsigned long long)arg1;
- (double)appFootprintMemoryRisingDuration;
- (void)setAppFootprintMemoryRisingDuration:(double)arg1;
- (long long)appFootprintMemoryRisingLength;
- (void)setAppFootprintMemoryRisingLength:(long long)arg1;
- (unsigned int)memoryPressureFlag;
- (void)setMemoryPressureFlag:(unsigned int)arg1;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (id)networkTypeDescription;
- (void)setNetworkTypeDescription:(id)arg1;
- (id)appNetworkUsage;
- (void)setAppNetworkUsage:(id)arg1;
- (id)deviceNetworkUsage;
- (void)setDeviceNetworkUsage:(id)arg1;
- (long long)energyMode;
- (void)setEnergyMode:(long long)arg1;
- (id)energyRuleID;
- (void)setEnergyRuleID:(id)arg1;
- (unsigned short)locationRetrievingCount;
- (void)setLocationRetrievingCount:(unsigned short)arg1;
- (unsigned short)audioPlayingCount;
- (void)setAudioPlayingCount:(unsigned short)arg1;
- (long long)audioSessionRoute;
- (void)setAudioSessionRoute:(long long)arg1;
- (float)audioOutputVolume;
- (void)setAudioOutputVolume:(float)arg1;
- (float)brightness;
- (void)setBrightness:(float)arg1;
- (BOOL)isCameraActive;
- (void)setCameraActive:(BOOL)arg1;
- (float)torchLevel;
- (void)setTorchLevel:(float)arg1;
- (void).cxx_destruct;
@end
