@interface WANicknameAndHeadAuthorizePageSheet : WAAuthorizePageSheet <IWAAuthorizeAddAvatarServiceDelegate, IWANicknameAndHeadAuthorizePageSheet>
{
    unsigned int _selectedAvatarId; // +0x8
    unsigned int _sessionId; // +0xc
    WANickNameAndHeaderAuthViewModel * _nhaViewModel; // +0x10
    NSString * _appId; // +0x18
    id <IWAAuthorizeAddAvatarService> _authorizeAddAvatarProxyService; // +0x20
}
+ (id)convertAvatarInfoListFromProto:(id)arg1;
- (id)initWithInfo:(id)arg1 appId:(id)arg2;
- (void)tryAddAvatar;
- (void)editAvatar:(id)arg1;
- (void)markAvartarIdSelected:(unsigned int)arg1;
- (void)scrollToCurrentIndex;
- (void)deleteAvatar:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleDelAvatarResp:(id)arg1;
- (void)onIWAAuthorizeAddAvatarSuccess:(id)arg1;
- (void)onIWAAuthorizeModAvatarSuccess:(id)arg1;
- (id)authorizeAddAvatarProxyService;
- (id)customSubviewClassList;
- (id)subViewModel;
- (id)avatarInfo;
- (unsigned int)selectedAvatarId;
- (id)nhaViewModel;
- (void)setNhaViewModel:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (void)setAuthorizeAddAvatarProxyService:(id)arg1;
- (void).cxx_destruct;
@end

