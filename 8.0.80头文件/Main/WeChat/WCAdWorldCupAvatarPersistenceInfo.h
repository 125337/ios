@interface WCAdWorldCupAvatarPersistenceInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _avatarUrl; // +0x8
    NSString * _avatarMd5; // +0x10
}
+ (void)PBArrayAdd_avatarUrl;
+ (void)PBArrayAdd_avatarMd5;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)avatarMd5;
- (void)setAvatarMd5:(id)arg1;
- (void).cxx_destruct;
@end
