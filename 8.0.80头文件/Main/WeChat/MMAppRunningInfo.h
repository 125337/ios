@interface MMAppRunningInfo : NSObject
{
    BOOL _vacuumClean; // +0x8
    unsigned long long _launchTime; // +0x10
    unsigned long long _currentTime; // +0x18
    unsigned long long _deviceBirthTime; // +0x20
    NSString * _deviceModel; // +0x28
    NSString * _osVersion; // +0x30
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)launchTime;
+ (const void *)__wcdb_synthesize_39:(void *)arg1;
+ (id)swift_launchTime;
+ (const void *)currentTime;
+ (const void *)__wcdb_synthesize_40:(void *)arg1;
+ (id)swift_currentTime;
+ (const void *)deviceBirthTime;
+ (const void *)__wcdb_synthesize_41:(void *)arg1;
+ (id)swift_deviceBirthTime;
+ (const void *)vacuumClean;
+ (const void *)__wcdb_synthesize_42:(void *)arg1;
+ (id)swift_vacuumClean;
+ (const void *)deviceModel;
+ (const void *)__wcdb_synthesize_43:(void *)arg1;
+ (id)swift_deviceModel;
+ (const void *)osVersion;
+ (const void *)__wcdb_synthesize_44:(void *)arg1;
+ (id)swift_osVersion;
+ (void)__wcdb_column_constraint_45:(void *)arg1;
- (unsigned long long)launchTime;
- (void)setLaunchTime:(unsigned long long)arg1;
- (unsigned long long)currentTime;
- (void)setCurrentTime:(unsigned long long)arg1;
- (unsigned long long)deviceBirthTime;
- (void)setDeviceBirthTime:(unsigned long long)arg1;
- (BOOL)vacuumClean;
- (void)setVacuumClean:(BOOL)arg1;
- (id)deviceModel;
- (void)setDeviceModel:(id)arg1;
- (id)osVersion;
- (void)setOsVersion:(id)arg1;
- (void).cxx_destruct;
@end
