@interface BSNotifyTimerMgr : NSObject
{
    NSArray * _lastNativeLocalIdList; // +0x8
    long long _lastNativeLocalIdListCount; // +0x10
    NSTimer * _currentTimer; // +0x18
}
+ (id)shared;
- (id)init;
- (void)relaunchScheduleNotificationWithDelayMinutes:(long long)arg1 nativeLocalIdList:(id)arg2;
- (void)scheduleNotificationWithDelayMinutes:(long long)arg1 latestNotifyMsgId:(id)arg2;
- (void)updateNotifyMsgForAff:(long long)arg1 latestNotifyMsgId:(id)arg2;
- (void)handleTimerTrigger;
- (void)performUpdate;
- (id)lastNativeLocalIdList;
- (void)setLastNativeLocalIdList:(id)arg1;
- (long long)lastNativeLocalIdListCount;
- (void)setLastNativeLocalIdListCount:(long long)arg1;
- (id)currentTimer;
- (void)setCurrentTimer:(id)arg1;
- (void).cxx_destruct;
@end
