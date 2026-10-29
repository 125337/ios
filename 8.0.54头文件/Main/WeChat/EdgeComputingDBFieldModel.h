@interface EdgeComputingDBFieldModel : MMObject <NSCopying>
{
    unsigned int _index; // +0x8
    NSString * _name; // +0x10
    NSString * _value; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toString;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void).cxx_destruct;
@end

