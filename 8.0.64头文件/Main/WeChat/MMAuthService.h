@interface MMAuthService : MMUserService <MMKernelExt, MMServiceProtocol>
{
    unsigned int _authStartTime; // +0x8
    unsigned int _axTicketExpireTime; // +0xc
    unsigned int _axTicketAutoRetry; // +0x10
    NSData * _ecdhKey; // +0x18
    MMAuthInfo * _oriAuthInfo; // +0x20
    MMMultiHostAuthInfo * _mainAuthInfo; // +0x28
    NSRecursiveLock * _axAuthLock; // +0x30
    NSArray * _axAuthWrapList; // +0x38
    NSDictionary * _axAuthWrapFromHostDic; // +0x40
}
+ (BOOL)canUseInSafemode;
- (void)onServiceInit;
- (void)setOriSessionKey:(id)arg1;
- (id)oriSessionKey;
- (void)updateMainHostClientSessionKey:(id)arg1 serverSessionKey:(id)arg2 hostAlgoList:(id)arg3;
- (void)setMainHostServerId:(id)arg1;
- (id)mainHostServerId;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)cEcdhkey;
- (void)updateAxAuthSecRespList:(id)arg1 authStartTime:(unsigned int)arg2;
- (void)startAxAuthRequestsOnMainThread;
- (id)authInfoForCgi:(unsigned int)arg1 host:(id)arg2;
- (id)mainHostDecryptKeyForEncryptAlgo:(int)arg1;
- (id)axAuthWrapForHost:(id)arg1;
- (unsigned long long)checkAxAuthStateForHost:(id)arg1;
- (void)onAuthOK;
- (id)ecdhKey;
- (void)setEcdhKey:(id)arg1;
- (id)oriAuthInfo;
- (void)setOriAuthInfo:(id)arg1;
- (id)mainAuthInfo;
- (void)setMainAuthInfo:(id)arg1;
- (id)axAuthLock;
- (void)setAxAuthLock:(id)arg1;
- (id)axAuthWrapList;
- (void)setAxAuthWrapList:(id)arg1;
- (id)axAuthWrapFromHostDic;
- (void)setAxAuthWrapFromHostDic:(id)arg1;
- (unsigned int)authStartTime;
- (void)setAuthStartTime:(unsigned int)arg1;
- (unsigned int)axTicketExpireTime;
- (void)setAxTicketExpireTime:(unsigned int)arg1;
- (unsigned int)axTicketAutoRetry;
- (void)setAxTicketAutoRetry:(unsigned int)arg1;
- (void).cxx_destruct;
@end
