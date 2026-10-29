@interface ActionText : NSObject <NSCoding>
{
    NSString * _name; // +0x8
    NSString * _desc; // +0x10
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end

