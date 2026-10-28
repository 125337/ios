@interface EdgeComputingFieldDataModel : MMObject <PBCoding, NSCopying>
{
    unsigned int _index; // +0x8
    unsigned int _type; // +0xc
    int _intValue; // +0x10
    NSString * _name; // +0x18
    long long _longValue; // +0x20
    NSString * _stringValue; // +0x28
}
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_intValue;
+ (void)PBArrayAdd_longValue;
+ (void)PBArrayAdd_stringValue;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (int)intValue;
- (void)setIntValue:(int)arg1;
- (long long)longValue;
- (void)setLongValue:(long long)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void).cxx_destruct;
@end
