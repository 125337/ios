@interface HeMetadataModel : NSObject
{
    long long _Version; // +0x8
    NSString * _Created; // +0x10
    NSString * _Description; // +0x18
}
- (long long)Version;
- (void)setVersion:(long long)arg1;
- (id)Created;
- (void)setCreated:(id)arg1;
- (id)Description;
- (void)setDescription:(id)arg1;
- (void).cxx_destruct;
@end
