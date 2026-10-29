@interface MMPropertyParserToken : MMObject
{
    int _attributes; // +0x8
    NSString * _name; // +0x10
    NSString * _type; // +0x18
    NSString * _getter; // +0x20
    NSString * _setter; // +0x28
}
- (id)init;
- (id)setter;
- (id)getter;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (void)setGetter:(id)arg1;
- (void)setSetter:(id)arg1;
- (int)attributes;
- (void)setAttributes:(int)arg1;
- (void).cxx_destruct;
@end

