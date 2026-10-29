@interface FTSMsgIndexMgr : FTSIndexMgr <IMsgExt, WXGImportMessageNotification, IFTSMessageExt, IMMNewSessionMgrExt, VoiceTranslateMsgMgrExt>
{
    NSRecursiveLock * _lock; // +0x8
    unsigned int _unIndexNewMsgCount; // +0x10
    NSMutableDictionary * _dicUnIndexMsgCache; // +0x18
    NSMutableDictionary * _dicSessionMaxId; // +0x20
    BOOL _hasDeleteTask; // +0x28
    BOOL _hasMigrationTask; // +0x29
    BOOL _hasVoiceTransTask; // +0x2a
    NSMutableSet * _newMsgIndexSessions; // +0x30
    NSMutableSet * _oldMsgIndexSessions; // +0x38
    FTSMsgIndexState * _indexingState; // +0x40
    FTS5MigrationInfo * _migrationInfo; // +0x48
    BOOL m_hasReportMigrationStartIdkey; // +0x50
    BOOL m_hasReportMigrationEndIdkey; // +0x51
    BOOL m_needClearAllIndex; // +0x52
    unsigned int _lastIndexErrorCode; // +0x54
    FTSVoiceTransTask * _voiceTransTask; // +0x58
    BOOL _isInitingIndex; // +0x60
    FTSMessageDB * _ftsMessageDB; // +0x68
    NSMutableSet * _indexRepairingUsrs; // +0x70
}
- (id)initWithFTSDB:(id)arg1;
- (BOOL)isValidAccount;
- (void)makeSureInitIndexing;
- (void)asyncInitIndex;
- (void)doInitIndexing;
- (void)doInitMsgSourceState;
- (BOOL)updateToDeleteLocalIds:(id)arg1 usr:(id)arg2;
- (void)resetIndexState;
- (BOOL)needIndexNewMsgFirst;
- (BOOL)hasNewIndexTask;
- (BOOL)canDoIndexing;
- (void)updateIndexStatus:(id)arg1 withLocalId:(unsigned int)arg2;
- (void)clearIndexStatus:(id)arg1;
- (id)captureOrUpdateIndexStatus;
- (void)checkIndexInvalid:(id)arg1;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingStop;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSClearIndex;
- (void)cacheUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (unsigned int)calAllMemMsgCount;
- (void)removeUnIndexMsgFromID:(unsigned int)arg1 toID:(unsigned int)arg2 forKey:(id)arg3;
- (void)clearIndexMemCache;
- (id)safeCopyUnIndexMsgCache;
- (BOOL)haveTaskRunning;
- (BOOL)rebuildIndexForSession:(id)arg1;
- (void)fireMsgIndexingTaskLoop;
- (void)tryRecoverIndexIfNeededForErrorCode:(unsigned int)arg1;
- (BOOL)internalBuildIndexForNewMsg;
- (BOOL)internalBuildIndexForOldMsg;
- (BOOL)internalDeleteExpiredIndex;
- (BOOL)internalMigrateIndex;
- (void)markMigrationStart;
- (void)markMigrationFinish;
- (id)migrationInfoPath;
- (id)getBatchAddMessage:(BOOL)arg1 finishSessions:(id)arg2;
- (BOOL)isSessionUsrValid:(id)arg1 contact:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)onImportMessage:(id)arg1;
- (void)onWillDeleteAllSession;
- (void)onDidDeleteAllSession;
- (void)onSessionRebuildFromContact;
- (void)onFTSMessageDBWillRepairIndexForUsername:(id)arg1;
- (void)onFTSMessageDBDidRepairIndexForUsername:(id)arg1 result:(BOOL)arg2;
- (void)OnVoiceTranslateBegin:(id)arg1;
- (void)OnVoiceTranslateResultChange:(id)arg1;
- (void)OnVoiceTranslateFail:(id)arg1;
- (void)OnVoiceTranslateSuccess:(id)arg1;
- (void)OnVoiceTranslateRemoved:(id)arg1 isHidden:(BOOL)arg2;
- (id)voiceTransTaskPath;
- (void)loadVoiceTransTask;
- (void)saveVoiceTransTask;
- (void)addVoiceTransPendingLocalId:(unsigned int)arg1 userName:(id)arg2;
- (void)removeVoiceTransPendingLocalId:(unsigned int)arg1 userName:(id)arg2;
- (BOOL)internalBuildIndexForVoiceTrans;
- (id)getIndexProgressReportInfoForSession:(id)arg1;
- (id)ftsMessageDB;
- (void)setFtsMessageDB:(id)arg1;
- (id)indexRepairingUsrs;
- (void)setIndexRepairingUsrs:(id)arg1;
- (BOOL)isInitingIndex;
- (void)setIsInitingIndex:(BOOL)arg1;
- (void).cxx_destruct;
@end
