@interface WCStoryConfigureMgr : MMUserService <MMServiceProtocol, MMConfigMgrExt>
{
    BOOL _friendVisitSwitchOn; // +0x8
    unsigned long long _headerShowLimitCount; // +0x10
    unsigned long long _entranceInTimelineOfTimeDuration; // +0x18
}
- (void)onServiceInit;
- (void)setupDynamicValue;
- (void)onMMDynamicConfigUpdated;
- (unsigned long long)headerShowLimitCount;
- (void)setHeaderShowLimitCount:(unsigned long long)arg1;
- (unsigned long long)entranceInTimelineOfTimeDuration;
- (void)setEntranceInTimelineOfTimeDuration:(unsigned long long)arg1;
- (BOOL)friendVisitSwitchOn;
- (void)setFriendVisitSwitchOn:(BOOL)arg1;
@end

