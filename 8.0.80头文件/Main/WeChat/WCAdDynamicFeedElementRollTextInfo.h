@interface WCAdDynamicFeedElementRollTextInfo : NSObject <NSCoding>
{
    WCAdDynamicFeedElementValue * _backgroundColor; // +0x8
    WCAdDynamicFeedElementValue * _textColor; // +0x10
    NSString * _iconUrl; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (void).cxx_destruct;
@end
