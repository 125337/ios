@interface BrandFansInteractiveUserInfo : NSObject <BrandFansProfileItem>
{
    BizInteractiveUserInfo * _userInfo; // +0x8
    BrandFansContactExtendInfo * _extendInfo; // +0x10
}
- (id)initWithUserInfo:(id)arg1;
- (id)profileAvatarImageURL;
- (id)profileDescription;
- (BOOL)profileInBlacklist;
- (id)profileNickname;
- (id)profileSignature;
- (id)profileUserID;
- (unsigned int)profileUserType;
- (id)profileInteractiveInfo;
- (void)updateWithExtendInfo:(id)arg1;
- (BOOL)profileUseRoundAvatar;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)extendInfo;
- (void)setExtendInfo:(id)arg1;
- (void).cxx_destruct;
@end
