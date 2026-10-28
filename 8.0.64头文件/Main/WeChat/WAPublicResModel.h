@interface WAPublicResModel : NSObject
{
    unsigned long long _type; // +0x8
    unsigned long long _version; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
@end
