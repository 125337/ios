@interface MMPatternLockPwdMgr : MMUserService <WCPayWalletUpdateExt, PBMessageObserverDelegate, IUpdateProfileMgrExt, MMUIViewControllerDelegate, IWCPayControlLogicExt, MMServiceProtocol>
{
    BOOL _isLocalVerify; // +0x8
    BOOL _isNeedVerifyPwd; // +0x9
    BOOL _isCloseViaToken; // +0xa
    int _userRegFlag; // +0xc
    unsigned int _m_payCardListTag; // +0x10
    MMPatternLockBufferData * _lockBuffer; // +0x18
}
- (void)onServiceClearData;
- (id)init;
- (void)stopPayCardListLogic;
- (void)initData;
- (BOOL)detectLocalBufferData;
- (unsigned long long)isPatternLockSetup;
- (void)setupNewPatternLockPwdWithUserToken:(id)arg1 andPatternHash:(id)arg2;
- (void)closePatternLockPwdWithPatternHash:(id)arg1;
- (void)closePatternLockPwdWithUserToken:(id)arg1;
- (void)modifyPatternLockPwdWithOldPatternHash:(id)arg1 andNewHash:(id)arg2;
- (void)verifyPatternLockPwdWithPatternHash:(id)arg1;
- (BOOL)isNeedSvrVerify;
- (id)getPatternSvrHash;
- (unsigned long long)getPatternLockTimeInterval;
- (BOOL)updateBufferDataWithSvrBuffer:(id)arg1;
- (void)sendPatternLockOpRequestWithCmdID:(unsigned int)arg1 oldHash:(id)arg2 newHash:(id)arg3;
- (int)verifyBufferDataIsInvalid;
- (int)verifyLockInfoIsValid;
- (id)getBufferKeyDataWithVersion:(unsigned int)arg1;
- (void)checkPatternLockStatusViaSvr;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetRegisterNewPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetOpPatternLockResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onOpPatternLockResponseErrorWithOpCmd:(unsigned int)arg1;
- (void)onOpPatternLockResponseOKWithOpCmd:(unsigned int)arg1;
- (void)handlePatternLockCheckStatusBack:(id)arg1;
- (void)onProfileChange;
- (id)getViewController;
- (void)OnPayCardListChanged:(id)arg1;
- (void)onWCPayWalletUpdateDidCall;
- (id)lockBuffer;
- (void)setLockBuffer:(id)arg1;
- (BOOL)isLocalVerify;
- (void)setIsLocalVerify:(BOOL)arg1;
- (BOOL)isNeedVerifyPwd;
- (void)setIsNeedVerifyPwd:(BOOL)arg1;
- (int)userRegFlag;
- (void)setUserRegFlag:(int)arg1;
- (BOOL)isCloseViaToken;
- (void)setIsCloseViaToken:(BOOL)arg1;
- (unsigned int)m_payCardListTag;
- (void)setM_payCardListTag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
