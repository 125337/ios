@interface MMFinderLiveActivityView : UIImageView <MMFinderLiveInfoMgrExt>
{
    BOOL _hasRegisteredFetchLiveActivity; // +0x8
    WCFinderDataItem * _finderDataItem; // +0x10
    unsigned long long _activityType; // +0x18
}
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
- (void)registerFetchLiveActivity;
- (void)checkAndUnregisterFetchLiveActivity;
- (void)updateFinderDataItem:(id)arg1;
- (void)clearAndHide;
- (void)setActivityType:(unsigned long long)arg1;
- (void)onFinderLiveActivityType:(unsigned long long)arg1 tid:(id)arg2;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (unsigned long long)activityType;
- (BOOL)hasRegisteredFetchLiveActivity;
- (void)setHasRegisteredFetchLiveActivity:(BOOL)arg1;
- (void).cxx_destruct;
@end

