@interface FTSContactIndexMgr : FTSIndexMgr <IContactMgrExt>
{
    NSMutableSet * m_invalidUsernames; // +0x8
    int * m_unIndexContactCount; // +0x10
    BOOL m_isIndexing; // +0x18
    BOOL m_hasCheckIndex; // +0x19
    BOOL m_shouldUseFTS; // +0x1a
    BOOL * m_indexingType; // +0x20
    BOOL m_contactHasLoad; // +0x28
    FTSContactIndexInfo * m_contactIndexInfo; // +0x30
    FTSContactIndexLogic * m_contactIndexLogic; // +0x38
    BOOL _hasCheckIndexCount; // +0x40
    FTSContactDB * _ftsContactDB; // +0x48
}
- (id)initWithFTSDB:(id)arg1;
- (void)dealloc;
- (BOOL)shouldFireTask;
- (BOOL)contactShouldUseFTS;
- (void)iFTSIndexingInit;
- (void)clearIndexRecordWhenRecoverDB;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSClearIndex;
- (BOOL)hasIndexTask;
- (void)captureIndexStatus;
- (void)freeIndexStatus;
- (void)updateIndexCount:(id)arg1;
- (void)markIndexingStart;
- (void)markIndexingFinish;
- (id)pathForIndexiInfo;
- (void)fireIndexingTaskLoop;
- (void)checkInvalidIndex;
- (void)checkMissingIndex;
- (void)markIndexInvalid:(id)arg1;
- (void)checkDeleteInvalidIndex;
- (BOOL)existValidIndexOfContact:(id)arg1;
- (id)getAllIndexRecord;
- (void)deleteIndexOfContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (id)ftsContactDB;
- (void)setFtsContactDB:(id)arg1;
- (BOOL)hasCheckIndexCount;
- (void)setHasCheckIndexCount:(BOOL)arg1;
- (void).cxx_destruct;
@end
