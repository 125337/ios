@interface WeVisModelTypeConfig : NSObject
{
    NSString * _key; // +0x8
    long long _type; // +0x10
    long long _subtype; // +0x18
    NSString * _md5; // +0x20
    NSString * _filepath; // +0x28
}
- (id)key;
- (void)setKey:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)subtype;
- (void)setSubtype:(long long)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)filepath;
- (void)setFilepath:(id)arg1;
- (void).cxx_destruct;
@end
