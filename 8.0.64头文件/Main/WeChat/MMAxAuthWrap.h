@interface MMAxAuthWrap : NSObject <MMAxAuthLogicDelegate>
{
    NSRecursiveLock * _lock; // +0x8
    MMMultiHostAuthInfo * _authInfo; // +0x10
    MMAxAuthLogic * _axAuthLogic; // +0x18
}
- (id)initWithAxAuthSecResp:(id)arg1;
- (void)startRequestWithExpireTimestamp:(unsigned int)arg1;
- (void)clearRequest;
- (id)identify;
- (unsigned long long)getAxAuthState;
- (id)authInfoForHost:(id)arg1;
- (void)onAxAuthLogicSuccess:(id)arg1 clientSessionKey:(id)arg2 serverSessionKey:(id)arg3 serverId:(id)arg4 hostAlgoList:(id)arg5;
- (void)onAxAuthLogicFailed:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)axAuthLogic;
- (void)setAxAuthLogic:(id)arg1;
- (void).cxx_destruct;
@end
