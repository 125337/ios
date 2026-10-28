@interface WCAdDynamicFeedInfluentAnimationInfo : WCAdDynamicFeedAnimationInfo
{
    NSString * _commonStartDelayString; // +0x48
    NSString * _commonDurationString; // +0x50
    NSArray * _propertiesToReset; // +0x58
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)commonStartDelayString;
- (void)setCommonStartDelayString:(id)arg1;
- (id)commonDurationString;
- (void)setCommonDurationString:(id)arg1;
- (id)propertiesToReset;
- (void)setPropertiesToReset:(id)arg1;
- (void).cxx_destruct;
@end
