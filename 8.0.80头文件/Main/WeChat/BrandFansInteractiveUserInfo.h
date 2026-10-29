@interface BrandFansInteractiveUserInfo : NSObject <BrandFansProfileItem>
{
    BizInteractiveUserInfo * _userInfo; // +0x8
    BrandFansContactExtendInfo * _extendInfo; // +0x10
    NSString * _bizUin; // +0x18
    NSString * _username; // +0x20
}
- (id)initWithUserInfo:(id)arg1 bizUin:(id)arg2;
- (void)updateWithBizUin:(id)arg1;
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
- (id)profileFriendNickname;
- (BOOL)profileIsFriend;
- (BOOL)profileCanSendMsg;
- (unsigned int)profileInviteStatus;
- (unsigned int)profileSex;
- (id)profileBizUin;
- (unsigned int)serviceType;
- (id)profileOpenID;
- (id)profileUsername;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)extendInfo;
- (void)setExtendInfo:(id)arg1;
- (id)bizUin;
- (void)setBizUin:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
