@interface MMLiveMentionContactItem : NSObject
{
    BOOL _isFinderRole; // +0x8
    NSString * _userName; // +0x10
    NSString * _displayName; // +0x18
    NSString * _avatarURL; // +0x20
    FinderLiveContact * _finderLiveContact; // +0x28
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg1;
- (BOOL)isFinderRole;
- (void)setIsFinderRole:(BOOL)arg1;
- (id)finderLiveContact;
- (void)setFinderLiveContact:(id)arg1;
- (void).cxx_destruct;
@end
