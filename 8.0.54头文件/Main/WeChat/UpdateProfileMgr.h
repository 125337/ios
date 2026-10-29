@interface UpdateProfileMgr : MMUserService <INewSyncExt, MMServiceProtocol, MMKernelExt, PBMessageObserverDelegate, IContactMgrExt>
{
    NSRecursiveLock * m_lock; // +0x8
    long long m_profileUpdateEvent; // +0x10
    BOOL _isShowingElderModeAlert; // +0x18
}
+ (BOOL)hasSetWxPasswd;
+ (BOOL)isUserInfoNotReady;
+ (id)getOplog:(id)arg1;
+ (void)modifySetting:(id)arg1;
+ (void)modifySetting:(id)arg1 callExt:(BOOL)arg2;
+ (BOOL)modifyUserInfo:(id)arg1;
- (void)onServiceInit;
- (id)init;
- (void)dealloc;
- (void)handleModUserInfo:(id)arg1 withSetting:(id)arg2;
- (void)modifyPatSuffix:(id)arg1;
- (void)modifyTextStateId:(id)arg1 extInfo:(id)arg2;
- (void)modifyVideoRing:(id)arg1;
- (void)updateVoipRecentStatusSwitch:(BOOL)arg1;
- (void)updateSavedHelloMsg:(id)arg1;
- (void)handleGetUserInfoExt:(id)arg1;
- (void)updateRegCountry:(id)arg1;
- (void)updateExtStatus:(unsigned long long)arg1 extStatus2:(unsigned long long)arg2;
- (void)HandleModUsrInfo:(id)arg1;
- (void)HandleModUsrInfoExt:(id)arg1;
- (void)commonHandleModUserInfoExt:(id)arg1;
- (void)checkAndTransferCallKitSwitch;
- (void)updateUserProfile;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNewSyncModUserInfo:(id)arg1;
- (void)onNewSyncModUserInfoExt:(id)arg1;
- (void)callOnProfileChange;
- (void)setIsNeedUpdateAfterAuth:(BOOL)arg1;
- (void)onAuthOK;
- (void)onModifySelfContact:(id)arg1;
- (BOOL)isShowingElderModeAlert;
- (void)setIsShowingElderModeAlert:(BOOL)arg1;
- (void).cxx_destruct;
@end

