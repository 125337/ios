@interface WAAuthorizeResultInfo : NSObject
{
    BOOL _isAcceptUserPrivacyProtectInfo; // +0x8
    unsigned int _avatarId; // +0xc
    unsigned int _avatarOpt; // +0x10
    unsigned long long _scopeId; // +0x18
    NSString * _sessionId; // +0x20
}
- (id)init;
- (unsigned int)avatarId;
- (void)setAvatarId:(unsigned int)arg1;
- (unsigned long long)scopeId;
- (void)setScopeId:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)avatarOpt;
- (void)setAvatarOpt:(unsigned int)arg1;
- (BOOL)isAcceptUserPrivacyProtectInfo;
- (void)setIsAcceptUserPrivacyProtectInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end

