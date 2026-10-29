@interface WCFinderCoLiveAuthor : NSObject
{
    BOOL _isCoAuthorLive; // +0x8
    NSString * _avatarUrl; // +0x10
    NSString * _nicknameContent; // +0x18
    NSString * _displaySuffix; // +0x20
    NSArray * _allNicknames; // +0x28
    NSArray * _invitedAuthors; // +0x30
    unsigned long long _coAuthorCount; // +0x38
}
+ (id)authorWithDataItem:(id)arg1;
+ (id)authorWithAnchorNickname:(id)arg1 invitedAuthors:(id)arg2 avatarUrl:(id)arg3;
- (BOOL)isCoAuthorLive;
- (void)setIsCoAuthorLive:(BOOL)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)nicknameContent;
- (void)setNicknameContent:(id)arg1;
- (id)displaySuffix;
- (void)setDisplaySuffix:(id)arg1;
- (id)allNicknames;
- (void)setAllNicknames:(id)arg1;
- (id)invitedAuthors;
- (void)setInvitedAuthors:(id)arg1;
- (unsigned long long)coAuthorCount;
- (void)setCoAuthorCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
