@interface SightBeautyDataItem : NSObject
{
    float _defaultValue; // +0x8
    float _value; // +0xc
    unsigned long long _type; // +0x10
    NSString * _titleLocalLanguageKey; // +0x18
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)titleLocalLanguageKey;
- (void)setTitleLocalLanguageKey:(id)arg1;
- (float)defaultValue;
- (void)setDefaultValue:(float)arg1;
- (float)value;
- (void)setValue:(float)arg1;
- (void).cxx_destruct;
@end
