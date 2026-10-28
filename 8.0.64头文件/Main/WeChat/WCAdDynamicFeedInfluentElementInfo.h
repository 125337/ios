@interface WCAdDynamicFeedInfluentElementInfo : WCAdDynamicFeedElementInfo
{
    NSString * _isNormalStyleString; // +0x248
    NSString * _hideForElderModeString; // +0x250
    NSArray * _propertiesToReset; // +0x258
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)isNormalStyleString;
- (void)setIsNormalStyleString:(id)arg1;
- (id)hideForElderModeString;
- (void)setHideForElderModeString:(id)arg1;
- (id)propertiesToReset;
- (void)setPropertiesToReset:(id)arg1;
- (void).cxx_destruct;
@end
