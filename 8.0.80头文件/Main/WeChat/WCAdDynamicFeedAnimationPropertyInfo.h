@interface WCAdDynamicFeedAnimationPropertyInfo : NSObject <NSCoding>
{
    NSString * _name; // +0x8
    WCAdDynamicFeedAnimationPropertyValueInfo * _fromValue; // +0x10
    WCAdDynamicFeedAnimationPropertyValueInfo * _toValue; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (BOOL)parsePropertyValuesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (id)fromValue;
- (void)setFromValue:(id)arg1;
- (id)toValue;
- (void)setToValue:(id)arg1;
- (void).cxx_destruct;
@end
