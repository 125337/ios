@interface CBTReddotPlatformSession : MMUserService <MMActionNotifyCommBizExt, INewSyncExt, MMServiceProtocol>
{
    BOOL _didSetup; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setupIfNeeded;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)onNewSyncChatbotNotifyReaded:(id)arg1;
- (BOOL)didSetup;
- (void)setDidSetup:(BOOL)arg1;
@end
