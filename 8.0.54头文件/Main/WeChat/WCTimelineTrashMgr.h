@interface WCTimelineTrashMgr : MMUserService <MMServiceProtocol>
{
    BOOL _enable; // +0x8
    NSMutableDictionary * _trashMap; // +0x10
    NSMutableDictionary * _idMap; // +0x18
    NSMutableDictionary * _exposeMap; // +0x20
    MMTimer * _timer; // +0x28
}
- (id)init;
- (void)loadCacheFromFile:(id)arg1;
- (void)dealloc;
- (void)throwIntoTrash:(id)arg1;
- (id)getTrashPlaceHolderItem;
- (void)copyToTrash:(id)arg1 draftController:(id)arg2 trashReportData:(id)arg3;
- (void)copyToTrash:(id)arg1 draftController:(id)arg2 forwardItem:(id)arg3 trashReportData:(id)arg4;
- (void)recoverDataForTrashModel:(id)arg1 fromDataItem:(id)arg2;
- (id)recoverDraftFromTrash:(id)arg1 forwardItem:(id *)arg2 reportData:(id *)arg3;
- (void)updateTrashModelWithLocalItem:(id)arg1 andSvrItem:(id)arg2;
- (BOOL)updateTrashModelForDataItem:(id)arg1 withSightDraft:(id)arg2;
- (void)clearAllDisplayCanReEditItem;
- (void)clearTrashWithItemID:(id)arg1;
- (id)getReferenceImageFiles;
- (void)recordExpose:(id)arg1;
- (void)tryReportExpose;
- (void)reportClick:(id)arg1 nextAction:(unsigned int)arg2;
- (id)getCanReEditModel;
- (id)getSessionId:(unsigned long long)arg1;
- (void)clearAllExpiredRecyclableItem;
- (void)clearExpiredRecyclableItem:(id)arg1;
- (id)clearExpiredRecyclableArchive;
- (void)clearAllDisplayCanReEditItemAndReloadIfNeeded:(BOOL)arg1 shouldCleanLocalData:(BOOL)arg2;
- (void)removeModelWithLocalId:(id)arg1 svrId:(id)arg2 shouldCleanLocalData:(BOOL)arg3;
- (void)startTimerCheckIfNeeded;
- (void)stopTimerCheck;
- (void)clearExpiredDisplayCanReEditItemIfNeeded;
- (id)genReportData:(id)arg1;
- (BOOL)isEnable;
- (id)extraImageDraftPaths:(id)arg1;
- (id)trashMap;
- (void)setTrashMap:(id)arg1;
- (id)idMap;
- (void)setIdMap:(id)arg1;
- (id)exposeMap;
- (void)setExposeMap:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end

