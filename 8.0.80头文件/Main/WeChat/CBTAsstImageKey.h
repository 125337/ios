@interface CBTAsstImageKey : NSObject <NSCopying>
{
    long long _svrId; // +0x8
    NSString * _resourceIdentity; // +0x10
}
+ (id)keyWithInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)svrId;
- (void)setSvrId:(long long)arg1;
- (id)resourceIdentity;
- (void)setResourceIdentity:(id)arg1;
- (void).cxx_destruct;
@end
