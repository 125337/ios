@interface WCPaySecureEnclaveManager : NSObject
{
    NSRecursiveLock * m_lock; // +0x8
    BOOL _needChangeAuthKey; // +0x10
    int _taskCount; // +0x14
    unsigned long long _currenScene; // +0x18
}
+ (id)shared;
- (id)initOnce;
- (id)getError:(long long)arg1;
- (void)signatureData:(id)arg1 context:(id)arg2 callback:(id /* block */)arg3;
- (void)updateAuthKey:(id)arg1 cgiInstance:(id)arg2 needReset:(BOOL)arg3 callback:(id /* block */)arg4;
- (void)updateAuthKey:(id)arg1 cgiInstance:(id)arg2 needReset:(BOOL)arg3;
- (void)getChallenge:(int)arg1 cgiInstance:(id)arg2;
- (void)showTouchIDAuthView:(id)arg1 withNeedSignString:(id)arg2 disableFallBack:(BOOL)arg3 whenSuccessData:(id /* block */)arg4 whenFail:(id /* block */)arg5;
- (void)reset;
- (int)biometryType;
- (id)getPayTag;
- (long long)resetSEKey;
- (void)startAuthKeyCgi:(id)arg1 cgiInstance:(id)arg2 pem:(id)arg3;
- (void)report:(long long)arg1 errCode:(long long)arg2;
- (BOOL)needChangeAuthKey;
- (void)setNeedChangeAuthKey:(BOOL)arg1;
- (unsigned long long)currenScene;
- (void)setCurrenScene:(unsigned long long)arg1;
- (int)taskCount;
- (void)setTaskCount:(int)arg1;
- (void).cxx_destruct;
@end
