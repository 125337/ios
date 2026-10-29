@interface MiniTaskFavHelperLongVideoStarTidIndex : NSObject <IMiniMizeUserdRecordUpdateExt>
{
    NSMutableDictionary * _tidToTaskKeys; // +0x8
    NSMutableDictionary * _taskKeyToTid; // +0x10
    BOOL _extRegistered; // +0x18
    BOOL _loaded; // +0x19
}
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id)taskKeysForTid:(id)arg1;
- (void)_ensureLoadedLocked;
- (void)_indexRecordLocked:(id)arg1;
- (void)_unindexTaskKeyLocked:(id)arg1;
- (void)onAppendMinimizedTaskData:(id)arg1;
- (void)onUpdateMinimizedTaskData:(id)arg1;
- (void)onRemoveMinimizedTaskData:(id)arg1;
- (void).cxx_destruct;
@end
