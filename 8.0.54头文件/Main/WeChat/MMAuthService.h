@interface MMAuthService : MMUserService <MMConfigMgrExt, MMKernelExt, IMsgExt, MMAxAuthLogicDelegate, MMServiceProtocol>
{
    BOOL m_hasLoadUseAesGcmSessionKeyConfig; // +0x8
    BOOL m_useAesGcmSessionKey; // +0x9
    BOOL m_useSm4GcmAlgo; // +0xa
    unsigned int _authStartTime; // +0xc
    unsigned int _axTicketExpireTime; // +0x10
    unsigned int _axTicketAutoRetry; // +0x14
    NSData * _ecdhKey; // +0x18
    NSSet * _useAesGcmSessionKeyCgis; // +0x20
    MMAuthInfo * _oriAuthInfo; // +0x28
    MMMultiHostAuthInfo * _mainAuthInfo; // +0x30
    NSMutableDictionary * _axAuthWrapDic; // +0x38
    NSMutableDictionary * _axAuthWrapFromHostDic; // +0x40
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
- (unsigned long long)checkAxAuthStateForHost:(id)arg1;
- (void)loadUseAesGcmSessionKeyConfig;
- (void)setUseSm4GcmSwitchEnabled:(BOOL)arg1;
- (void)adjustEncryptAlgoForAuthInfo:(id)arg1;
- (void)onAxAuthLogicSuccess:(id)arg1 clientSessionKey:(id)arg2 serverSessionKey:(id)arg3 serverId:(id)arg4 hostAlgoList:(id)arg5;
- (void)onAxAuthLogicFailed:(id)arg1;
- (void)onAuthOK;
- (void)onMMDynamicConfigUpdated;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)ecdhKey;
- (void)setEcdhKey:(id)arg1;
- (id)useAesGcmSessionKeyCgis;
- (void)setUseAesGcmSessionKeyCgis:(id)arg1;
- (id)oriAuthInfo;
- (void)setOriAuthInfo:(id)arg1;
- (id)mainAuthInfo;
- (void)setMainAuthInfo:(id)arg1;
- (id)axAuthWrapDic;
- (void)setAxAuthWrapDic:(id)arg1;
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

