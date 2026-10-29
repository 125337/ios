@interface ActionRefer : NSObject <NSCoding>
{
    NSString * _name; // +0x8
    NSString * _desc; // +0x10
    NSString * _referKey; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)referKey;
- (void)setReferKey:(id)arg1;
- (void).cxx_destruct;
@end

