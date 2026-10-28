@interface WALimitModeHelper : NSObject <MMLimitedModeAuthorizationUtilLogicDelegate, IWALimitModeHelper>
{
    MMLimitedModeAuthorizationUtilLogic * _utilLogic; // +0x8
    WAContact * _pendingContact; // +0x10
    id <WALimitModeHelperDelegate> _delegate; // +0x18
}
- (id)genLimitedModeBizKeyWithAppId:(id)arg1;
- (BOOL)tryBlockedByLimitModeWithContact:(id)arg1 inNavVC:(id)arg2;
- (void)sendVerifiedResult:(id)arg1 bizType:(long long)arg2 isVerified:(BOOL)arg3;
- (void)onVerifyPasswordSuccessWithBizKey:(id)arg1 bizType:(long long)arg2;
- (void)onVerifyCancelWithBizKey:(id)arg1 bizType:(long long)arg2;
- (id)utilLogic;
- (void)setUtilLogic:(id)arg1;
- (id)pendingContact;
- (void)setPendingContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
