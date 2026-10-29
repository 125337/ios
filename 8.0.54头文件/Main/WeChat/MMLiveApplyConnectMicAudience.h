@interface MMLiveApplyConnectMicAudience : NSObject
{
    BOOL _isSelf; // +0x8
    NSString * _sdkUserId; // +0x10
    NSString * _displayName; // +0x18
    NSString * _avatarUrlString; // +0x20
    NSString * _avatarHDUrlString; // +0x28
    NSString * _liveMicId; // +0x30
    NSString * _identityId; // +0x38
    NSString * _roomId; // +0x40
    CContact * _contact; // +0x48
}
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)avatarUrlString;
- (void)setAvatarUrlString:(id)arg1;
- (id)avatarHDUrlString;
- (void)setAvatarHDUrlString:(id)arg1;
- (id)liveMicId;
- (void)setLiveMicId:(id)arg1;
- (id)identityId;
- (void)setIdentityId:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

