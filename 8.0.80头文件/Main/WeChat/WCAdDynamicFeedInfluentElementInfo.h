@interface WCAdDynamicFeedInfluentElementInfo : WCAdDynamicFeedElementInfo
{
    NSString * _isNormalStyleString; // +0x270
    NSString * _hideForElderModeString; // +0x278
    NSString * _repeatCountString; // +0x280
    NSDictionary * _pagInfoDict; // +0x288
    NSDictionary * _pagDarkInfoDict; // +0x290
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)isNormalStyleString;
- (void)setIsNormalStyleString:(id)arg1;
- (id)hideForElderModeString;
- (void)setHideForElderModeString:(id)arg1;
- (id)repeatCountString;
- (void)setRepeatCountString:(id)arg1;
- (id)pagInfoDict;
- (void)setPagInfoDict:(id)arg1;
- (id)pagDarkInfoDict;
- (void)setPagDarkInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
