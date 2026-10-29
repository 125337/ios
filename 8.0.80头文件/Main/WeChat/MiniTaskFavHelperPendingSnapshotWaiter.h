@interface MiniTaskFavHelperPendingSnapshotWaiter : NSObject <IMiniMizeUserdRecordUpdateExt>
{
    BOOL _hasRegistered; // +0x8
    NSMutableDictionary * _pendingMap; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)registerExtIfNeeded;
- (void)deferDualWriteForTaskData:(id)arg1 complete:(id /* block */)arg2;
- (void)onTaskSnapShotUpdate:(id)arg1 snapshot:(id)arg2;
- (id)pendingMap;
- (void)setPendingMap:(id)arg1;
- (BOOL)hasRegistered;
- (void)setHasRegistered:(BOOL)arg1;
- (void).cxx_destruct;
@end
