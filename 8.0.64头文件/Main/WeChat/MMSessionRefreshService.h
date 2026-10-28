@interface MMSessionRefreshService : MMUserService <MMServiceProtocol>
{
    MMTimer * m_refreshTimer; // +0x8
    NSMutableArray * m_objectNameArray; // +0x10
    BOOL m_bInBackground; // +0x18
    BOOL m_isTriggered; // +0x19
    int m_skipedCount; // +0x1c
}
- (void)registerToBeTriggered:(id)arg1;
- (void)triggerTimer;
- (void)timeToUpdate;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void).cxx_destruct;
@end
