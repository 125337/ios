@interface FTSIntelligentMsgIndexMgr : FTSIndexMgr <IMsgExt, WXGImportMessageNotification, IFTSIntelligentMessageExt, IDownloadImageExt>
{
    NSRecursiveLock * _lock; // +0x8
    NSRecursiveLock * _insertDbLock; // +0x10
    unsigned int _unIndexNewMsgCount; // +0x18
    NSMutableDictionary * _dicUnIndexMsgCache; // +0x20
    NSMutableDictionary * _dicSessionMaxId; // +0x28
    BOOL _hasDeleteTask; // +0x30
    NSMutableSet * _newMsgIndexSessions; // +0x38
    NSMutableSet * _oldMsgIndexSessions; // +0x40
    FTSIntelligentMsgIndexState * _indexingState; // +0x48
    NSOperationQueue * m_priorityBulidQueue; // +0x50
    BOOL m_isSkipOverCheckAppCpuUsage; // +0x58
    BOOL _isInitingIndex; // +0x59
    BOOL _m_isPauseInBackground; // +0x5a
    BOOL _m_isHadreleaseInPauseBackground; // +0x5b
    NSString * m_priorityBulidUserName; // +0x60
    NSMutableArray * m_arrAppCpuUsage; // +0x68
    double m_sleepSec; // +0x70
    double m_appLaunchTime; // +0x78
    FTSIntelligentMessageDB * _ftsIntelligentMessageDB; // +0x80
    NSMutableSet * _indexRepairingUsrs; // +0x88
    NSMutableDictionary * _m_dicUnHadDownLoadMsgCache; // +0x90
}
+ (BOOL)priorityImageIndexBuildSwitch;
- (id)initWithFTSDB:(id)arg1;
- (BOOL)isValidAccount;
- (void)makeSureInitIndexing;
- (void)asyncInitIndex;
- (void)doInitIndexing;
- (void)doInitMsgSourceState;
- (id)getAllNeedBuildIndexSessionUserNameAr;
- (void)resetIndexState;
- (BOOL)needIndexNewMsgFirst;
- (BOOL)hasNewIndexTask;
- (BOOL)canDoIndexing;
- (BOOL)shouldCancelIndexing;
- (void)updateIndexStatus:(id)arg1 withLocalId:(unsigned int)arg2;
- (void)clearIndexStatus:(id)arg1;
- (id)captureOrUpdateIndexStatus;
- (void)checkIndexInvalid:(id)arg1;
- (BOOL)checkCanDoIntelligent;
- (BOOL)checkCanDoIntelligentInRAM;
- (BOOL)checkIsCongestionWithCpuUsage:(double)arg1 andTotalMemory:(unsigned long long)arg2 andUserMemory:(unsigned long long)arg3;
- (double)getCongestionSleepSec;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingStop;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSClearIndex;
- (int)iFTSIndexingCount;
- (void)iFTSIndexingPauseBackground;
- (void)iFTSIndexingResumeBackground;
- (void)cacheUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (unsigned int)calAllMemMsgCount;
- (void)removeUnIndexMsgFromID:(unsigned int)arg1 toID:(unsigned int)arg2 forKey:(id)arg3;
- (void)clearIndexMemCache;
- (id)safeCopyUnIndexMsgCache;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)handelNewHadDownLoadImageMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)handelDelOrRevokeMsg:(id)arg1 MsgWrap:(id)arg2 isDeleteAction:(BOOL)arg3;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDownloadImageOk:(id)arg1;
- (void)fireIntelligentMsgIndexingTaskLoop;
- (void)releaseInternalMemoryInPauseInBackground;
- (void)internalBuildIndexForNewMsg;
- (void)internalBuildIndexForOldMsg;
- (void)internalBuildIndexForHadDownloadInValidMsg;
- (void)internalDeleteExpiredIndex;
- (id)getBatchAddMessage:(BOOL)arg1 finishSessions:(id)arg2;
- (BOOL)isSessionUsrValid:(id)arg1 contact:(id)arg2;
- (BOOL)updateToDeleteIntelligentLocalIds:(id)arg1 usr:(id)arg2;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTableWithlimitUsrname:(id)arg1 limit:(int)arg2 rowidIndexResult:(id)arg3;
- (BOOL)batchInsertMsgToFTSTable:(id)arg1;
- (BOOL)batchInsertIntelligentHadDownloadInValidMsgToFTSTable:(id)arg1 rowidIndexResult:(id)arg2;
- (void)priorityBuildIndexMsgWithUserName:(id)arg1;
- (void)priorityBatchBuildIndexMsgWithUserName:(id)arg1;
- (void)buildIndexForHadDownloadInValidMsgWithUserName:(id)arg1;
- (void)cancelPriorityBuildIndexMsgWithUserName:(id)arg1;
- (BOOL)checkPriorityHadFinishOperate:(id)arg1;
- (BOOL)checkPriorityImageMessageHadBuildIndex:(id)arg1;
- (BOOL)checkPriorityImageMessageHadBuildIndexCore:(id)arg1;
- (BOOL)checkAllImageMessageHadBuildIndex:(id)arg1;
- (BOOL)checkAllImageMessageHadBuildIndexCore:(id)arg1;
- (void)onFTSIntelligentMessageDBWillRepairIndexForUsername:(id)arg1;
- (void)onFTSIntelligentMessageDBDidRepairIndexForUsername:(id)arg1 result:(BOOL)arg2;
- (id)m_priorityBulidUserName;
- (void)setM_priorityBulidUserName:(id)arg1;
- (id)m_arrAppCpuUsage;
- (void)setM_arrAppCpuUsage:(id)arg1;
- (double)m_sleepSec;
- (void)setM_sleepSec:(double)arg1;
- (double)m_appLaunchTime;
- (void)setM_appLaunchTime:(double)arg1;
- (BOOL)m_isSkipOverCheckAppCpuUsage;
- (void)setM_isSkipOverCheckAppCpuUsage:(BOOL)arg1;
- (id)ftsIntelligentMessageDB;
- (void)setFtsIntelligentMessageDB:(id)arg1;
- (id)indexRepairingUsrs;
- (void)setIndexRepairingUsrs:(id)arg1;
- (id)m_dicUnHadDownLoadMsgCache;
- (void)setM_dicUnHadDownLoadMsgCache:(id)arg1;
- (BOOL)isInitingIndex;
- (void)setIsInitingIndex:(BOOL)arg1;
- (BOOL)m_isPauseInBackground;
- (void)setM_isPauseInBackground:(BOOL)arg1;
- (BOOL)m_isHadreleaseInPauseBackground;
- (void)setM_isHadreleaseInPauseBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
