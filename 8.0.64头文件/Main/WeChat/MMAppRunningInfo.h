@interface MMAppRunningInfo : NSObject
{
    BOOL _vacuumClean; // +0x8
    unsigned long long _launchTime; // +0x10
    unsigned long long _currentTime; // +0x18
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)launchTime;
+ (const void *)__wcdb_synthesize_35:(void *)arg1;
+ (id)swift_launchTime;
+ (const void *)currentTime;
+ (const void *)__wcdb_synthesize_36:(void *)arg1;
+ (id)swift_currentTime;
+ (const void *)vacuumClean;
+ (const void *)__wcdb_synthesize_37:(void *)arg1;
+ (id)swift_vacuumClean;
+ (void)__wcdb_column_constraint_38:(void *)arg1;
- (unsigned long long)launchTime;
- (void)setLaunchTime:(unsigned long long)arg1;
- (unsigned long long)currentTime;
- (void)setCurrentTime:(unsigned long long)arg1;
- (BOOL)vacuumClean;
- (void)setVacuumClean:(BOOL)arg1;
@end
