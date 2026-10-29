@interface MMFinderLiveCoAuthorCellItem : NSObject
{
    BOOL _isFollowed; // +0x8
    BOOL _isAnchor; // +0x9
    BOOL _disableFollowing; // +0xa
    NSString * _username; // +0x10
    NSString * _nickname; // +0x18
    NSString * _headUrl; // +0x20
    WCFinderAuthInfo * _authInfo; // +0x28
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (BOOL)isFollowed;
- (void)setIsFollowed:(BOOL)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (BOOL)disableFollowing;
- (void)setDisableFollowing:(BOOL)arg1;
- (void).cxx_destruct;
@end
