@interface VersionPatternModel : NSObject
{
    long long _version; // +0x8
    long long _AbsoluteTime; // +0x10
    NSArray * _PatternAry; // +0x18
    NSArray * _SystemVibrationAry; // +0x20
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (long long)version;
- (void)setVersion:(long long)arg1;
- (long long)AbsoluteTime;
- (void)setAbsoluteTime:(long long)arg1;
- (id)PatternAry;
- (void)setPatternAry:(id)arg1;
- (id)SystemVibrationAry;
- (void)setSystemVibrationAry:(id)arg1;
- (void).cxx_destruct;
@end

