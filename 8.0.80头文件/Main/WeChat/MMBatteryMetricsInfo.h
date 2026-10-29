@interface MMBatteryMetricsInfo : NSObject
{
    BOOL isAutoIncrement; // +0x8
    BOOL _lowPowerModeEnabled; // +0x9
    float _fromLevel; // +0xc
    float _toLevel; // +0x10
    float _powerUsage; // +0x14
    float _brightness; // +0x18
    float _cpuUsage; // +0x1c
    float _gpuUsage; // +0x20
    float _locationUsage; // +0x24
    float _audioSpeakerUsage; // +0x28
    float _audioBluetoothUsage; // +0x2c
    float _cameraUsage; // +0x30
    float _torchLevel; // +0x34
    long long lastInsertedRowID; // +0x38
    unsigned long long _infoID; // +0x40
    long long _thermalState; // +0x48
    unsigned long long _wifiSent; // +0x50
    unsigned long long _wifiReceived; // +0x58
    unsigned long long _wwanSent; // +0x60
    unsigned long long _wwanReceived; // +0x68
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)infoID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_infoID;
+ (const void *)fromLevel;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_fromLevel;
+ (const void *)toLevel;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_toLevel;
+ (const void *)powerUsage;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_powerUsage;
+ (const void *)lowPowerModeEnabled;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_lowPowerModeEnabled;
+ (const void *)thermalState;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_thermalState;
+ (const void *)brightness;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_brightness;
+ (const void *)cpuUsage;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_cpuUsage;
+ (const void *)gpuUsage;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_gpuUsage;
+ (const void *)wifiSent;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_wifiSent;
+ (const void *)wifiReceived;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_wifiReceived;
+ (const void *)wwanSent;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_wwanSent;
+ (const void *)wwanReceived;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_wwanReceived;
+ (const void *)locationUsage;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_locationUsage;
+ (const void *)audioSpeakerUsage;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_audioSpeakerUsage;
+ (const void *)audioBluetoothUsage;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_audioBluetoothUsage;
+ (const void *)cameraUsage;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (id)swift_cameraUsage;
+ (const void *)torchLevel;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (id)swift_torchLevel;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
- (id)initWithMetricsInfos:(id)arg1;
- (id)reportString;
- (id)description;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg1;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)arg1;
- (unsigned long long)infoID;
- (void)setInfoID:(unsigned long long)arg1;
- (float)fromLevel;
- (void)setFromLevel:(float)arg1;
- (float)toLevel;
- (void)setToLevel:(float)arg1;
- (float)powerUsage;
- (void)setPowerUsage:(float)arg1;
- (BOOL)isLowPowerModeEnabled;
- (void)setLowPowerModeEnabled:(BOOL)arg1;
- (long long)thermalState;
- (void)setThermalState:(long long)arg1;
- (float)brightness;
- (void)setBrightness:(float)arg1;
- (float)cpuUsage;
- (void)setCpuUsage:(float)arg1;
- (float)gpuUsage;
- (void)setGpuUsage:(float)arg1;
- (unsigned long long)wifiSent;
- (void)setWifiSent:(unsigned long long)arg1;
- (unsigned long long)wifiReceived;
- (void)setWifiReceived:(unsigned long long)arg1;
- (unsigned long long)wwanSent;
- (void)setWwanSent:(unsigned long long)arg1;
- (unsigned long long)wwanReceived;
- (void)setWwanReceived:(unsigned long long)arg1;
- (float)locationUsage;
- (void)setLocationUsage:(float)arg1;
- (float)audioSpeakerUsage;
- (void)setAudioSpeakerUsage:(float)arg1;
- (float)audioBluetoothUsage;
- (void)setAudioBluetoothUsage:(float)arg1;
- (float)cameraUsage;
- (void)setCameraUsage:(float)arg1;
- (float)torchLevel;
- (void)setTorchLevel:(float)arg1;
@end
