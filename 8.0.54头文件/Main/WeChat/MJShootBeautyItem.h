@interface MJShootBeautyItem : NSObject
{
    float _defaultValue; // +0x8
    float _value; // +0xc
    unsigned long long _type; // +0x10
    NSString * _title; // +0x18
    NSString * _iconName; // +0x20
}
- (BOOL)isModified;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (float)defaultValue;
- (void)setDefaultValue:(float)arg1;
- (float)value;
- (void)setValue:(float)arg1;
- (void).cxx_destruct;
@end

