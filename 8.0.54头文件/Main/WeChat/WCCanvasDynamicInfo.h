@interface WCCanvasDynamicInfo : MMObject <NSCoding>
{
    NSString * _key; // +0x8
    NSString * _keypath; // +0x10
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)keypath;
- (void)setKeypath:(id)arg1;
- (void).cxx_destruct;
@end

