@interface IWAAuthorizeAddAvatarViewControllerParams : NSObject
{
    BOOL _isEdit; // +0x8
    unsigned int _sessionId; // +0xc
    OauthAvatarInfo * _editedAvatarInfo; // +0x10
    NSString * _appId; // +0x18
    NSString * _defaultAvatarUrl; // +0x20
    NSString * _defaultAvatarFileId; // +0x28
}
- (BOOL)isEdit;
- (void)setIsEdit:(BOOL)arg1;
- (id)editedAvatarInfo;
- (void)setEditedAvatarInfo:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)defaultAvatarUrl;
- (void)setDefaultAvatarUrl:(id)arg1;
- (id)defaultAvatarFileId;
- (void)setDefaultAvatarFileId:(id)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
