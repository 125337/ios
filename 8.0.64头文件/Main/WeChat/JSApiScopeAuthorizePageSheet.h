@interface JSApiScopeAuthorizePageSheet : WAAuthorizePageSheet <MMAuthorizeAddAvatarViewControllerDelegate>
{
    unsigned int _selectedAvatarId; // +0x8
    unsigned int _sessionId; // +0xc
    JSApiScopeAuthViewModel * _asaViewModel; // +0x10
}
- (id)initWithInfo:(id)arg1;
- (void)deleteOneAvatarInfo:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handleDelAvatarResp:(id)arg1;
- (void)tryAddAvatar;
- (void)markAvartarIdSelected:(unsigned int)arg1;
- (void)scrollToCurrentIndex;
- (void)onAddAvatarSuccess:(id)arg1;
- (id)customSubviewClassList;
- (id)subViewModel;
- (unsigned int)selectedAvatarId;
- (void)setSelectedAvatarId:(unsigned int)arg1;
- (unsigned int)sessionId;
- (void)setSessionId:(unsigned int)arg1;
- (id)asaViewModel;
- (void)setAsaViewModel:(id)arg1;
- (void).cxx_destruct;
@end
