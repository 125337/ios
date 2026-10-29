@interface CBTStrongReminderBannerMgr : NSObject <CBTStrongReminderBannerObserverBase, CBTReminderDelegate>
{
    BOOL _isSetup; // +0x8
    CBTStrongReminderBannerObserver * _observer; // +0x10
    CBTStrongReminderBannerWeakObserverProxy * _weakProxy; // +0x18
    NSMutableDictionary * _forcePushIdToReminderId; // +0x20
    NSMutableDictionary * _forcePushIdToSvrId; // +0x28
    NSMutableDictionary * _forcePushIdToShowTimestampMs; // +0x30
    NSMutableDictionary * _forcePushIdToTapped; // +0x38
    NSMutableDictionary * _forcePushIdToBusinessId; // +0x40
    NSMutableDictionary * _forcePushIdToBannerId; // +0x48
}
+ (id)sharedInstance;
- (id)init;
- (void)setup;
- (void)teardown;
- (void)onStateChanged:(id)arg1;
- (void)handleRemindersData:(id)arg1;
- (void)reportBannerEventWithEventId:(id)arg1 reminderId:(id)arg2 businessId:(unsigned long long)arg3 bannerId:(id)arg4 extraParams:(id)arg5;
- (void)showBannerWithReminderId:(id)arg1 text:(id)arg2 data:(id)arg3;
- (void)dismissBannerWithForcePushId:(id)arg1;
- (void)dismissAllBanners;
- (void)dismissAllBannersUIOnly;
- (void)cleanupStateForForcePushId:(id)arg1;
- (void)onCBTReminderBannerTapped:(id)arg1;
- (void)navigateToAsstWithSvrId:(long long)arg1 fromVC:(id)arg2 businessId:(unsigned long long)arg3 bannerId:(id)arg4;
- (void)onCBTReminderBannerDismissed:(id)arg1;
- (id)buildLocateOptionsForBusinessId:(unsigned long long)arg1 bannerId:(id)arg2 svrId:(long long)arg3;
- (id /* block */)buildLocateCompletionWithLocateOptions:(id)arg1 svrId:(long long)arg2;
- (id)observer;
- (void)setObserver:(id)arg1;
- (id)weakProxy;
- (void)setWeakProxy:(id)arg1;
- (id)forcePushIdToReminderId;
- (void)setForcePushIdToReminderId:(id)arg1;
- (id)forcePushIdToSvrId;
- (void)setForcePushIdToSvrId:(id)arg1;
- (id)forcePushIdToShowTimestampMs;
- (void)setForcePushIdToShowTimestampMs:(id)arg1;
- (id)forcePushIdToTapped;
- (void)setForcePushIdToTapped:(id)arg1;
- (id)forcePushIdToBusinessId;
- (void)setForcePushIdToBusinessId:(id)arg1;
- (id)forcePushIdToBannerId;
- (void)setForcePushIdToBannerId:(id)arg1;
- (BOOL)isSetup;
- (void)setIsSetup:(BOOL)arg1;
- (void).cxx_destruct;
@end
