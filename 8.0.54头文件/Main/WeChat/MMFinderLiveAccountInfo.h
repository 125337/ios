@interface MMFinderLiveAccountInfo : NSObject
{
    BOOL _isReName; // +0x8
    unsigned int _roleType; // +0xc
    NSString * _nickName; // +0x10
    NSString * _headImgUrl; // +0x18
    NSString * _roleName; // +0x20
    NSString * _roleWording; // +0x28
}
+ (id)tranferToLiveAccountInfo:(id)arg1;
+ (void)reName:(id)arg1 forAccountInfos:(id)arg2;
+ (id)getDigestLogWithLiveAccountInfoList:(id)arg1;
- (id)initWithLiveAliasInfo:(id)arg1;
- (void)copyFromLiveAliasInfo:(id)arg1;
- (id)description;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (unsigned int)roleType;
- (void)setRoleType:(unsigned int)arg1;
- (id)roleName;
- (id)roleWording;
- (BOOL)isReName;
- (void)setIsReName:(BOOL)arg1;
- (void).cxx_destruct;
@end

