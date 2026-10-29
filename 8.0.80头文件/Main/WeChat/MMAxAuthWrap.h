@interface MMAxAuthWrap : NSObject <MMAxAuthLogicDelegate>
{
    unsigned long long _axScene; // +0x8
    unsigned long long _respListCount; // +0x10
    NSRecursiveLock * _lock; // +0x18
    MMMultiHostAuthInfo * _authInfo; // +0x20
    MMAxAuthLogic * _axAuthLogic; // +0x28
}
- (id)initWithAxAuthSecResp:(id)arg1;
- (void)startRequestWithExpireTimestamp:(unsigned int)arg1;
- (void)clearRequest;
- (id)identify;
- (unsigned long long)getAxAuthState;
- (id)authInfoForHost:(id)arg1;
- (void)onAxAuthLogicSuccess:(id)arg1 clientSessionKey:(id)arg2 serverSessionKey:(id)arg3 serverId:(id)arg4 hostAlgoList:(id)arg5 businessExtraRespData:(id)arg6;
- (void)onAxAuthLogicFailed:(id)arg1;
- (unsigned long long)axScene;
- (void)setAxScene:(unsigned long long)arg1;
- (unsigned long long)respListCount;
- (void)setRespListCount:(unsigned long long)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)axAuthLogic;
- (void)setAxAuthLogic:(id)arg1;
- (void).cxx_destruct;
@end
