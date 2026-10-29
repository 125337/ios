@interface StoreEmotionProductIdListObject : MMObject <PBCoding>
{
    NSMutableArray * _pids; // +0x8
}
+ (void)PBArrayAdd_pids;
+ (void)initialize;
+ (id)instance;
+ (id)getSaveRootDir;
+ (id)getSavePath;
- (id)getPBPropertyTable;
- (id)init;
- (void)savePidsToFile:(id)arg1;
- (void)savePidToFile:(id)arg1;
- (id)getPids;
- (void)deletePid:(id)arg1;
- (void)addFirstPid:(id)arg1;
- (id)pids;
- (void)setPids:(id)arg1;
- (void).cxx_destruct;
@end

