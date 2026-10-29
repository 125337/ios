@interface WCAdDynamicFeedAnimationPropertyValueInfo : NSObject <NSCoding>
{
    BOOL _isValid; // +0x8
    WCAdDynamicFeedElementValue * _numValue; // +0x10
    UIColor * _colorExt; // +0x18
    WCAdDynamicFeedElementValue * _color; // +0x20
    WCAdDynamicFeedElementValue * _colorDark; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (BOOL)shouldValueParseAsColorWithName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (BOOL)parsePropertyValuesWithBasicWidth:(int)arg1 basicRootFontSize:(int)arg2;
- (id)colorExt;
- (id)numValue;
- (void)setNumValue:(id)arg1;
- (void)setColorExt:(id)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)colorDark;
- (void)setColorDark:(id)arg1;
- (void).cxx_destruct;
@end
