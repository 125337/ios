@interface TextStateRedDotProfileIconConfig : NSObject
{
    NSArray * _durations; // +0x8
    NSArray * _parsedDurations; // +0x10
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (long long)secondsFromDurationString:(id)arg1;
- (id)parsedDurations;
- (_NSRange)hitDurationForLocation:(long long)arg1;
- (id)durations;
- (void)setDurations:(id)arg1;
- (void)setParsedDurations:(id)arg1;
- (void).cxx_destruct;
@end

