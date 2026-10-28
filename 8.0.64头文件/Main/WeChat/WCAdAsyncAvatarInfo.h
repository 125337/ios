@interface WCAdAsyncAvatarInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _bizUsername; // +0x8
    NSString * _nickname; // +0x10
    NSString * _avatar; // +0x18
}
+ (void)PBArrayAdd_bizUsername;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatar;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isEqualToAvatarInfo:(id)arg1;
- (id)description;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (void).cxx_destruct;
@end
