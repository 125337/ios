@interface NewLifeClientVersionInfo : NSObject
{
    unsigned int _version; // +0x8
    unsigned int _buildTime; // +0xc
    unsigned int _lastVersion; // +0x10
    unsigned int _lastBuildTime; // +0x14
    NSString * _buildTimeString; // +0x18
    NSString * _bundleId; // +0x20
    NSString * _featureId; // +0x28
    NSString * _scheme; // +0x30
    NSString * _revision; // +0x38
    NSString * _lastBuildTimeString; // +0x40
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)current;
+ (unsigned int)convertTimestampFromString:(id)arg1;
+ (id)convertStringFromTimestamp:(unsigned int)arg1;
+ (id)dateFormatter;
- (BOOL)hasChanged;
- (void)updateLastVersionAndLastBuildTime;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)buildTime;
- (void)setBuildTime:(unsigned int)arg1;
- (id)buildTimeString;
- (void)setBuildTimeString:(id)arg1;
- (id)bundleId;
- (void)setBundleId:(id)arg1;
- (id)featureId;
- (void)setFeatureId:(id)arg1;
- (id)scheme;
- (void)setScheme:(id)arg1;
- (id)revision;
- (void)setRevision:(id)arg1;
- (unsigned int)lastVersion;
- (void)setLastVersion:(unsigned int)arg1;
- (unsigned int)lastBuildTime;
- (void)setLastBuildTime:(unsigned int)arg1;
- (id)lastBuildTimeString;
- (void)setLastBuildTimeString:(id)arg1;
- (void).cxx_destruct;
@end
