@interface WCAdvertiseDynamicKeyInfo : NSObject <NSCoding>
{
    NSString * _key; // +0x8
    NSString * _keyPath; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;
- (void).cxx_destruct;
@end

