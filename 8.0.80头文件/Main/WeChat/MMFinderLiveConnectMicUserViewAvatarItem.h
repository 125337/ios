@interface MMFinderLiveConnectMicUserViewAvatarItem : NSObject
{
    NSString * _username; // +0x8
    MMWebImageView * _avatarView; // +0x10
    NSString * _stagingAvatarUri; // +0x18
}
- (id)initWithImageView:(id)arg1;
- (id)actualAvatarUri;
- (BOOL)realAvatarSet;
- (void)commitStagedUpdate;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)stagingAvatarUri;
- (void)setStagingAvatarUri:(id)arg1;
- (void).cxx_destruct;
@end
