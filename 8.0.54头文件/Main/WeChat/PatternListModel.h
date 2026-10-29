@interface PatternListModel : NSObject
{
    long long _AbsoluteTime; // +0x8
    NSArray * _Pattern; // +0x10
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (long long)AbsoluteTime;
- (void)setAbsoluteTime:(long long)arg1;
- (id)Pattern;
- (void)setPattern:(id)arg1;
- (void).cxx_destruct;
@end

