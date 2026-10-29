@interface LoginInfo : NSObject <PBCoding>
{
    unsigned int _m_uiLogoutType; // +0x8
    NSMutableArray * _m_arrUserInfos; // +0x10
    NSMutableDictionary * _m_dicUserInfos; // +0x18
    LoginUserInfo * _m_curUserInfo; // +0x20
}
+ (void)PBArrayAdd_m_arrUserInfos;
+ (void)PBArrayAdd_m_uiLogoutType;
+ (void)initialize;
+ (id)getLoginInfoPath;
+ (id)sharedLoginInfo;
+ (unsigned long long)getLastUin:(id)arg1;
+ (BOOL)updateUserInfo:(id)arg1 fromLocalInfo:(id)arg2;
+ (void)updateToLocalInfo:(id)arg1;
- (id)getPBPropertyTable;
- (void)continueInit;
- (BOOL)isLogoutSwitch;
- (void)setLogoutSwitch:(BOOL)arg1;
- (id)curStateDescription;
- (void)saveLoginInfo;
- (id)getLoginInfo:(id)arg1;
- (id)getCurLoginUserInfos;
- (void)updateLastLoginUserInfo:(id)arg1 fromSwitch:(BOOL)arg2;
- (BOOL)checkAndRevise;
- (void)removeLoginUserInfo:(id)arg1;
- (void)reportSwitchAccountWithOpCode:(unsigned int)arg1 userName:(id)arg2;
- (id)m_arrUserInfos;
- (void)setM_arrUserInfos:(id)arg1;
- (id)m_dicUserInfos;
- (void)setM_dicUserInfos:(id)arg1;
- (id)m_curUserInfo;
- (void)setM_curUserInfo:(id)arg1;
- (unsigned int)m_uiLogoutType;
- (void)setM_uiLogoutType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
