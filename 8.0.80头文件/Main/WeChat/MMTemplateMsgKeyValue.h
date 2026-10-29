@interface MMTemplateMsgKeyValue : MMObject <PBCoding>
{
    NSString * _key; // +0x8
    NSString * _value; // +0x10
}
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_value;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)key;
- (void)setKey:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void).cxx_destruct;
@end
