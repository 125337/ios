@interface EdgeComputingFieldConfigModel : MMObject <PBCoding, NSCopying>
{
    unsigned int _index; // +0x8
    unsigned int _type; // +0xc
    NSString * _name; // +0x10
}
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_name;
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
- (void).cxx_destruct;
@end

