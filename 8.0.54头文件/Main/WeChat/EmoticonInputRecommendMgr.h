@interface EmoticonInputRecommendMgr : MMUserService <EmoticonDescMgrExt, EmoticonRecommendBoardCgiDelegate, MMLimitedModeExt, IUpdateProfileMgrExt, EmoticonBackUpMgrExt, EmoticonBackupOperateMgrExt, IntelligentMsgImgMgrExt, MMEmoticonResExt, MMServiceProtocol>
{
    BOOL _enableRemoteRecommend; // +0x8
    BOOL _loading; // +0x9
    BOOL _hasPullwordListAfterLaunch; // +0xa
    BOOL _hasClearUnReferenceRecordAfterLaunch; // +0xb
    BOOL _enableShuffleStragy; // +0xc
    BOOL _enableWordListUpdate; // +0xd
    BOOL _shouldPauseBackgroundTask; // +0xe
    BOOL _hasCalLocalEmojiOcr; // +0xf
    BOOL _shouldResumeLocalEmojiOcr; // +0x10
    unsigned int _wordListUpdateInterval; // +0x14
    unsigned int _localTopN; // +0x18
    unsigned int _preloadIntervalForQuery; // +0x1c
    double _searchDelay; // +0x20
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x28
    NSMutableSet * _recommendBoardCgis; // +0x30
    NSArray * _recommendWraps; // +0x38
    NSString * _lastedQuery; // +0x40
    NSMutableDictionary * _tasks; // +0x48
    NSMutableSet * _remoteWordList; // +0x50
    EmoticonWordListMeta * _remoteWordListMeta; // +0x58
    EmoticonGetWordListCGI * _fetchWordListCGI; // +0x60
    EmoticonRemoteRecommendTable * _recommendTable; // +0x68
    NSNumber * _localEmojiRecommendSwitchValue; // +0x70
    NSNumber * _ocrHasInitSuccessedValue; // +0x78
    NSOperationQueue * _calOcrQueue; // +0x80
    MMAsyncBlockOperation * _lastCalOcrOperation; // +0x88
    MemoryMappedKV * _localEmojiOcrResultKV; // +0x90
}
+ (id)cpkeyForOcrMd5:(id)arg1;
+ (id)adjustOcrResult:(id)arg1;
+ (void)clearAllCachedData;
- (id)init;
- (void)loadDynamicConfig;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (void)asyncReloadWordListAndSearchRecordFromCache;
- (void)reloadWordListAndSearchRecordFromCache;
- (void)onLoadCacheFinish:(id)arg1 meta:(id)arg2;
- (void)clearNoReferencedCachedRecordsIfNeeded;
- (void)requestForRecommendEmotion:(id)arg1;
- (BOOL)updateEmoticon:(id)arg1 withMd5:(id)arg2 usedTime:(unsigned int)arg3;
- (void)searchInLocalSvr:(id)arg1 sessionId:(id)arg2;
- (void)updateRemoteRecommendSwitch;
- (void)onLocalTaskFinish:(id)arg1 localList:(id)arg2;
- (void)onRemoteTaskFinish:(id)arg1 remoteList:(id)arg2 recSessionId:(id)arg3;
- (void)onAsyncRecommendTaskEnd:(id)arg1;
- (void)searchRemoteSvrForPreload:(id)arg1 sessionId:(id)arg2 localSearchResMd5:(id)arg3;
- (void)updatePreloadSearchRes:(id)arg1 svrRecommendWraps:(id)arg2 sessionID:(id)arg3;
- (void)onEmoticonRecommendBoardCgiOk:(id)arg1 recommendWraps:(id)arg2;
- (void)onEmoticonRecommendBoardCgiFailed:(id)arg1;
- (void)updateWordListFromSvrIfNeeded;
- (void)saveWordListToCache:(id)arg1 type:(unsigned int)arg2 version:(unsigned long long)arg3;
- (BOOL)shouldUpdateWordList;
- (BOOL)isInSvrWordList:(id)arg1;
- (BOOL)isInLocalWordList:(id)arg1;
- (double)getSearchDelay;
- (BOOL)isRemoteRecommendEnable;
- (BOOL)isShuffleStragyEnable;
- (unsigned int)getWordListUpdateInterval;
- (unsigned int)getSearchLocalTopN;
- (unsigned int)getPreloadIntervalForQuery;
- (BOOL)isWordListUpdateEnable;
- (unsigned int)getExptVal:(id)arg1 withDefaultVal:(unsigned int)arg2 andMinVal:(unsigned int)arg3;
- (BOOL)isSupportEmojiPrivacySetting;
- (BOOL)isSupportEmojiPrivacySettingExpt;
- (BOOL)isEmojiRecommendPersonalizedWithStrict:(BOOL)arg1;
- (BOOL)isRemoteRecommendSwithOpened;
- (BOOL)hasShowEmojiPrivacyPageSheet;
- (BOOL)needShowEmojiPrivacyPageSheet;
- (BOOL)shouldShowEmojiPrivacySectionWithIsFromStore:(BOOL)arg1;
- (void)switchRemoteRecommendWithIsOpen:(BOOL)arg1;
- (void)switchLocalOcrRecommendWithIsOpen:(BOOL)arg1;
- (void)switchPersonalizedRecommendWithIsOpen:(BOOL)arg1;
- (void)switchAllPrivacySettingWithIsOpen:(BOOL)arg1;
- (void)switchAllPrivacySettingWithIsOpen:(BOOL)arg1 hasShowPolicy:(BOOL)arg2;
- (void)tryResetPrivacy;
- (BOOL)isSupportLocalEmojiRecommend;
- (BOOL)isLocalEmojiRecommendSwitchOpened;
- (BOOL)isLocalEmojiRecommendSwitchOpenedWithNeedUpdate:(BOOL)arg1;
- (void)onUpdateLocalEmojiRecommendSwitchValueWithForceNotify:(BOOL)arg1;
- (id)localEmojiOcrResultKV;
- (id)ocrResultMappedID;
- (void)saveOcrResult:(id)arg1 forMd5:(id)arg2;
- (id)ocrResultInfoForMd5:(id)arg1;
- (void)removeOcrResultForMd5:(id)arg1;
- (void)clearAllOcrResult;
- (id)getAllLocalEmojiOcrResult;
- (void)checkOcrInitStatus;
- (void)tryCalLocalEmojiOcrFromUpdate:(BOOL)arg1;
- (void)realCalLocalEmojiOcrWithPartCallBackBlock:(id /* block */)arg1;
- (void)onOCRFirstTimeInitSuccess;
- (void)onEmoticonBackUpMgrRecoverPartSyncFinishedForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNotifyProgressForType:(unsigned int)arg1;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onProfileChange;
- (void)onLimitedModeChanged;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (BOOL)shouldReloadResGlobalWordList;
- (void)onGetEmoticonDesc:(id)arg1 emoticonWrapList:(id)arg2;
- (void)onGetEmoticonDescNoResult:(id)arg1;
- (BOOL)dirIsEmpty:(id)arg1;
- (BOOL)enableRemoteRecommend;
- (void)setEnableRemoteRecommend:(BOOL)arg1;
- (double)searchDelay;
- (void)setSearchDelay:(double)arg1;
- (id)workerQueue;
- (void)setWorkerQueue:(id)arg1;
- (id)recommendBoardCgis;
- (void)setRecommendBoardCgis:(id)arg1;
- (id)recommendWraps;
- (void)setRecommendWraps:(id)arg1;
- (id)lastedQuery;
- (void)setLastedQuery:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)remoteWordList;
- (void)setRemoteWordList:(id)arg1;
- (id)remoteWordListMeta;
- (void)setRemoteWordListMeta:(id)arg1;
- (id)fetchWordListCGI;
- (void)setFetchWordListCGI:(id)arg1;
- (id)recommendTable;
- (void)setRecommendTable:(id)arg1;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (BOOL)hasPullwordListAfterLaunch;
- (void)setHasPullwordListAfterLaunch:(BOOL)arg1;
- (BOOL)hasClearUnReferenceRecordAfterLaunch;
- (void)setHasClearUnReferenceRecordAfterLaunch:(BOOL)arg1;
- (BOOL)enableShuffleStragy;
- (void)setEnableShuffleStragy:(BOOL)arg1;
- (BOOL)enableWordListUpdate;
- (void)setEnableWordListUpdate:(BOOL)arg1;
- (unsigned int)wordListUpdateInterval;
- (void)setWordListUpdateInterval:(unsigned int)arg1;
- (unsigned int)localTopN;
- (void)setLocalTopN:(unsigned int)arg1;
- (unsigned int)preloadIntervalForQuery;
- (void)setPreloadIntervalForQuery:(unsigned int)arg1;
- (BOOL)shouldPauseBackgroundTask;
- (void)setShouldPauseBackgroundTask:(BOOL)arg1;
- (id)localEmojiRecommendSwitchValue;
- (void)setLocalEmojiRecommendSwitchValue:(id)arg1;
- (BOOL)hasCalLocalEmojiOcr;
- (void)setHasCalLocalEmojiOcr:(BOOL)arg1;
- (id)ocrHasInitSuccessedValue;
- (void)setOcrHasInitSuccessedValue:(id)arg1;
- (BOOL)shouldResumeLocalEmojiOcr;
- (void)setShouldResumeLocalEmojiOcr:(BOOL)arg1;
- (id)calOcrQueue;
- (void)setCalOcrQueue:(id)arg1;
- (id)lastCalOcrOperation;
- (void)setLastCalOcrOperation:(id)arg1;
- (void)setLocalEmojiOcrResultKV:(id)arg1;
- (void).cxx_destruct;
@end

